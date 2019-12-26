#ifndef DLGSLICESETTING_H
#define DLGSLICESETTING_H

#include <QDialog>
#include <QLabel>
#include <QLineEdit>
#include <QLayout>
#include <QGridLayout>
#include <QIntValidator>
#include <QDoubleValidator>
#include <QComboBox>
#include <QSettings>

namespace Ui {
class DlgSliceSetting;
}

class DlgSliceSetting : public QDialog
{
    Q_OBJECT

public:
    explicit DlgSliceSetting(QWidget *parent = 0);
    ~DlgSliceSetting();
public slots:
    void JudgeText();
    void SliceTypeChange(int index);
private:
    Ui::DlgSliceSetting *ui;
    QLabel *m_thicknessName, *m_exposeTimeName, *m_lightOffName;
    QLabel *m_bottomExposeName, *m_bottomLayerName, *m_lightCuringName;
    QLineEdit *m_thickness, *m_esposeTime, *m_lightOffTime, *m_bottomExposeTime, *m_BottomLayer;
    QComboBox *m_sliceType;
    QIntValidator *intvalidator;
    QDoubleValidator *floatvalidator;
    QGridLayout *m_mainlayout;
    void InitControls();
    void InitData();
    void GetData(QString datakey, QString &data, QString defaultvalue);
    void DealData(QString datakey, QString data);
};

#endif // DLGSLICESETTING_H
