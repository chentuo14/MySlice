#ifndef DLGMACHINESETTING_H
#define DLGMACHINESETTING_H

#include <QDialog>
#include <QLabel>
#include <QLayout>
#include <QGridLayout>
#include <QLineEdit>
#include <QDoubleValidator>
#include <QSettings>
#include <QCheckBox>

namespace Ui {
class DlgMachineSetting;
}

class DlgMachineSetting : public QDialog
{
    Q_OBJECT

public:
    explicit DlgMachineSetting(QWidget *parent = 0);
    ~DlgMachineSetting();
public slots:
    void JudgeText();
private:
    Ui::DlgMachineSetting *ui;
    QLabel *m_XResolutionName, *m_YResolutionName, *m_XSizeName, *m_YSizeName, *m_ZSizeName;
    QLineEdit *m_xResolution, *m_yResolution, *m_xSize, *m_ySize, *m_zSize;
    QCheckBox *m_keepRatio;
    QGridLayout *m_mainLayout;
    QIntValidator *intvalidator;
    QDoubleValidator *floatValidator;
    bool settexting;
    void InitControls();
    void InitData();
    void GetData(QString datakey, QString &data, QString defaultvalue);
    void DealData(QString datakey, QString data);
};

#endif // DLGMACHINESETTING_H
