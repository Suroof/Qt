#include "patientview.h"
#include "ui_patientview.h"
#include "idatabase.h"

PatientView::PatientView(QWidget *parent)
    : QWidget(parent),
    ui(new Ui::PatientView)
{
    ui->setupUi(this);

    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableView->setAlternatingRowColors(true);

    IDatabase &iDatabase =IDatabase::getInstance();
    if(iDatabase.initPatientModel()){
        ui->tableView->setModel(iDatabase.patientTabModel);
        ui->tableView->setSelectionModel(iDatabase.thePatientSelection);
    }
}

PatientView::~PatientView()
{
    delete ui;
}

void PatientView::on_btAdd_clicked()
{
    QSqlTableModel* model = IDatabase::getInstance().patientTabModel;
    QSqlQuery query;
    query.exec("SELECT MAX(ID) FROM PATIENT");
    int maxId = 0;
    if (query.next()) {
        maxId = query.value(0).toInt();
    }

    QSqlRecord record = model->record();
    record.setValue("ID", maxId + 1);
    record.setValue("NAME", QString());
    record.setValue("ID_CARD", QString());
    record.setValue("SEX", "男");
    record.setValue("DOB", QDate::currentDate().toString("yyyy-MM-dd"));
    record.setValue("HEIGHT", 0);
    record.setValue("WEIGHT", 0);
    record.setValue("MOBILEPHONE", QString());
    record.setValue("CREATEDTIMESTAMP", QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss"));

    if (model->insertRecord(-1, record)) {
        model->submitAll();
        int newRow = model->rowCount() - 1;
        emit goPatientEditView(newRow);
    } else {
        qDebug() << "Error inserting record:" << model->lastError().text();
    }
}

void PatientView::on_btSearch_clicked()
{
    QString filter = QString("name like '%%1%'").arg(ui->txtSearch->text());
    IDatabase::getInstance().searchPatient(filter);
}

void PatientView::on_btDelete_clicked()
{
    IDatabase::getInstance().deleteCurrentPatient();
}


void PatientView::on_btEdit_clicked()
{
    QModelIndex curIndex=IDatabase::getInstance().thePatientSelection->currentIndex();

    emit goPatientEditView(curIndex.row());
}

