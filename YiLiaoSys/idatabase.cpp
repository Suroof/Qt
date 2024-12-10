#include "idatabase.h"
#include <QUuid>
void IDatabase::initDatabase(){
    database = QSqlDatabase::addDatabase("QSQLITE");
    QString aFile = "D:/学习资料/QtProject/实验三/lab4.db";
    database.setDatabaseName(aFile);
    if(!database.open()){
        qDebug()<<"failed to open database";
    }else{
        qDebug()<<"open database is ok"<<database.connectionName();
    }
}

bool IDatabase::initPatientModel()
{
    if (!patientTabModel) {
        patientTabModel = new QSqlTableModel(this, database);
    }
    patientTabModel->setTable("PATIENT");
    patientTabModel->setEditStrategy(QSqlTableModel::OnManualSubmit);
    patientTabModel->select();

    if (!thePatientSelection) {
        thePatientSelection = new QItemSelectionModel(patientTabModel);
    }
    return true;
}

bool IDatabase::searchPatient(QString filter)
{
    patientTabModel->setFilter(filter);
    return patientTabModel->select();
}

bool IDatabase::deleteCurrentPatient()
{
    QModelIndex curIndex = thePatientSelection->currentIndex();
    if (curIndex.isValid()) {
        patientTabModel->removeRow(curIndex.row());
        return patientTabModel->submitAll();
    }
    return false;
}

bool IDatabase::submitPatientEdit()
{
    if (patientTabModel->submitAll()) {
        patientTabModel->select();
        return true;
    }
    qDebug() << "Error submitting changes:" << patientTabModel->lastError().text();
    return false;
}

void IDatabase::revertPatientEdit()
{
    patientTabModel->revertAll();
    patientTabModel->select();
}

bool IDatabase::addNewPatient()
{
    patientTabModel->insertRow(patientTabModel->rowCount(),
                               QModelIndex());//在末尾添加一个记录
    QModelIndex curIndex = patientTabModel->index(patientTabModel->rowCount()- 1,
                                                  1);//创建最后一行的ModelIndex
    int curRecNo =curIndex.row();
    QSqlRecord curRec= patientTabModel->record(curRecNo);//获取当前记录
    curRec.setValue("CREATEDTIMESTAMp", QDateTime::currentDateTime().toString("yyyy-MM-dd"));
    curRec.setValue("ID", QUuid::createUuid().toString(QUuid::WithoutBraces));
    patientTabModel->setRecord(curRecNo,curRec);
    return curIndex.row();
}


QString IDatabase::userLogin(QString userName, QString password)
{
    QSqlQuery query;
    query.prepare("SELECT username, password FROM user WHERE username = :USER");
    query.bindValue(":USER", userName);
    if (!query.exec())
    {
        qDebug() << "Query failed: " << query.lastError().text();
        return "queryFailed";
    }
    if (query.next())
    {
        QString storedPassword = query.value("password").toString();
        // 确保密码不为空
        if (!password.isEmpty())
        {
            if (storedPassword == password)
            {
                return "loginok";
            }
            else
            {
                qDebug() << "Wrong password for user: " << userName;
                return "wrongPassword";
            }
        }
        else
        {
            qDebug() << "Password is empty";
            return "passwordEmpty";
        }
    }
    else
    {
        qDebug() << "No such user: " << userName;
        return "wrongUserhame";
    }
}
IDatabase::IDatabase(QObject *parent) : QObject{parent}
{
    initDatabase();
}
