#ifndef DLGSUPPORTSETTING_H
#define DLGSUPPORTSETTING_H

#include <QDialog>
#include <QLabel>
#include <QComboBox>
#include <QPushButton>
#include <QLayout>
#include <QGridLayout>
#include <QHBoxLayout>
#include <QSettings>

#include "mainwindow.h"

namespace Ui {
class DlgSupportSetting;
}

class DlgSupportSetting : public QDialog
{
    Q_OBJECT

public:
    explicit DlgSupportSetting(QWidget *parent = 0);
    ~DlgSupportSetting();
signals:
    void ChangeShape(QString shapetype);
    void ChangeType(QString suptype);
    void ChangeMode(QString mode);
public slots:
    void OnModelSelected(int id);
    void SupportTypeChange(int index);
    void SupportShapChange(int index);
    void RateSelect();
    void SizeSelect();
    void UpdateData();
private:
    Ui::DlgSupportSetting *ui;
    QLabel *m_supportTypeName, *m_supportShapeName, *m_supportSizeName, *m_supportDensityName;
    QPushButton *m_supportSizeS, *m_supportSizeM, *m_supportSizeL;
    QPushButton *m_supportTrateM, *m_supportTrateL, *m_supportTrateH;
    QComboBox *m_supportType, *m_supportShape;
    QGridLayout *m_mainlayout;
    QHBoxLayout *m_supportTypeLayout, *m_supportShapeLayout, *m_supportTrateLayout, *m_supportSizeLayout;
    int selectid = -1;
    void InitControls();
    void InitData();
    void GetData(QString datakey, QString &data, QString defaultvalue);
    void DealData(QString datakey, QString data);
};

#endif // DLGSUPPORTSETTING_H
