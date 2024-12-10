#include "patienteditview.h"
#include "ui_patienteditview.h"
#include "idatabase.h"

// 实现日期代理类的方法
QDateEditDelegate::QDateEditDelegate(QObject *parent) : QStyledItemDelegate(parent) {}

void QDateEditDelegate::setModelData(QWidget *editor, QAbstractItemModel *model,
                                   const QModelIndex &index) const
{
    QDateEdit *dateEdit = qobject_cast<QDateEdit*>(editor);
    if (dateEdit) {
        model->setData(index, dateEdit->date().toString("yyyy-MM-dd"));
    }
}

void QDateEditDelegate::setEditorData(QWidget *editor, const QModelIndex &index) const
{
    QDateEdit *dateEdit = qobject_cast<QDateEdit*>(editor);
    if (dateEdit) {
        QString dateStr = index.model()->data(index).toString();
        dateEdit->setDate(QDate::fromString(dateStr, "yyyy-MM-dd"));
    }
}

PatientEditView::PatientEditView(QWidget *parent,int index)
    : QWidget(parent)
    , ui(new Ui::PatientEditView)
{
    ui->setupUi(this);

    ui->dbComboSex->addItem("男");
    ui->dbComboSex->addItem("女");

    dataMapper = new QDataWidgetMapper();
    QSqlTableModel *tabModel = IDatabase::getInstance().patientTabModel;
    dataMapper->setModel(tabModel);
    dataMapper->setSubmitPolicy(QDataWidgetMapper::ManualSubmit);

    // 确保字段名称与数据库完全匹配
    dataMapper->addMapping(ui->dbEditID, tabModel->fieldIndex("ID"));
    dataMapper->addMapping(ui->dbEditName, tabModel->fieldIndex("NAME"));
    dataMapper->addMapping(ui->dbEditIDCard, tabModel->fieldIndex("ID_CARD"));
    dataMapper->addMapping(ui->dbSpinHeight, tabModel->fieldIndex("HEIGHT"));
    dataMapper->addMapping(ui->dbSpinWeight, tabModel->fieldIndex("WEIGHT"));
    dataMapper->addMapping(ui->dbEditMobile, tabModel->fieldIndex("MOBILEPHONE"));
    dataMapper->addMapping(ui->dbDateEditDoB, tabModel->fieldIndex("DOB"));
    dataMapper->addMapping(ui->dbComboSex, tabModel->fieldIndex("SEX"));
    dataMapper->addMapping(ui->dbCreatedTimeStamp, tabModel->fieldIndex("CREATEDTIMESTAMP"));

    // 设置日期编辑器
    ui->dbDateEditDoB->setDisplayFormat("yyyy-MM-dd");
    ui->dbDateEditDoB->setCalendarPopup(true);
    ui->dbDateEditDoB->setDateRange(QDate(1900,1,1), QDate::currentDate());

    // 设置数值范围
    ui->dbSpinHeight->setRange(0, 300);
    ui->dbSpinWeight->setRange(0, 500);

    dataMapper->setCurrentIndex(index);
}

PatientEditView::~PatientEditView()
{
    delete ui;
}

void PatientEditView::on_btnSave_clicked()
{
    // 先提交 dataMapper 的更改
    dataMapper->submit();
    // 再提交到数据库
    if (IDatabase::getInstance().submitPatientEdit()) {
        emit goPreviousView();
    }
}

void PatientEditView::on_btnCancel_clicked()
{
    IDatabase::getInstance().revertPatientEdit();
    emit goPreviousView();
}
