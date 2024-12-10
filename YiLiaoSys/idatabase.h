#ifndef IDATABASE_H
#define IDATABASE_H

#include <QObject>
#include <QtSql>
#include <QSqlDatabase>
#include <QDataWidgetMapper>

class IDatabase : public QObject
{
    Q_OBJECT
public:
    static IDatabase &getInstance()
    {
        static IDatabase instance;
        return instance;
    }

    QString userLogin(QString userName,QString password);
    bool initPatientModel();
    bool searchPatient(QString filter);
    bool deleteCurrentPatient();
    bool submitPatientEdit();
    void revertPatientEdit();
    bool addNewPatient();

    QSqlTableModel *patientTabModel;
    QItemSelectionModel *thePatientSelection;

private:
    explicit IDatabase(QObject *parent = nullptr);
    IDatabase(IDatabase const &)=delete;
    void operator=(IDatabase const &)=delete;

    QSqlDatabase database;
    void initDatabase();

signals:
};

#endif // IDATABASE_H
