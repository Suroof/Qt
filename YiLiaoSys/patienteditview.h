#ifndef PATIENTEDITVIEW_H
#define PATIENTEDITVIEW_H

#include <QWidget>
#include <QDataWidgetMapper>
#include <QStyledItemDelegate>
#include <QDateEdit>

// 添加日期代理类声明
class QDateEditDelegate : public QStyledItemDelegate
{
public:
    QDateEditDelegate(QObject *parent = nullptr);
    void setModelData(QWidget *editor, QAbstractItemModel *model,
                     const QModelIndex &index) const override;
    void setEditorData(QWidget *editor, const QModelIndex &index) const override;
};

namespace Ui {
class PatientEditView;
}

class PatientEditView : public QWidget
{
    Q_OBJECT

public:
    explicit PatientEditView(QWidget *parent = nullptr, int index = 0);
    ~PatientEditView();
private slots:
    void on_btnSave_clicked();
    void on_btnCancel_clicked();

signals:
    void goPreviousView();

private:
    Ui::PatientEditView *ui;
    QDataWidgetMapper *dataMapper;
};

#endif // PATIENTEDITVIEW_H
