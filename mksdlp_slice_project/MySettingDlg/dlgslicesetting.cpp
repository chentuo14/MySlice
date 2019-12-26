#include "dlgslicesetting.h"
#include "ui_dlgslicesetting.h"
#include <QDebug>

DlgSliceSetting::DlgSliceSetting(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DlgSliceSetting)
{
    ui->setupUi(this);
    intvalidator = new QIntValidator(this);
    floatvalidator = new QDoubleValidator(this);
    InitControls();
    InitData();
}

DlgSliceSetting::~DlgSliceSetting()
{
    delete ui;
}

void DlgSliceSetting::JudgeText()
{
    QLineEdit *mwidget =(QLineEdit *)sender();
    QString tt = mwidget->text();
    QString datakey = mwidget->objectName();
    DealData(datakey, tt);
}

void DlgSliceSetting::SliceTypeChange(int index)
{
    DealData("mksdlp_slicetype", QString::number(index));
}

void DlgSliceSetting::InitControls()
{
    m_thicknessName = new QLabel("thickness(mm)");
    m_exposeTimeName = new QLabel("expose time(s)");
    m_lightOffName = new QLabel("light off time(s)");
    m_bottomExposeName = new QLabel("bottom expose(s)");
    m_bottomLayerName = new QLabel("bottom layer");
    m_lightCuringName = new QLabel("light curing type");

    m_thickness = new QLineEdit(this);
    m_thickness->setObjectName("mksdlp_thickness");
    m_thickness->setAlignment(Qt::AlignRight);
    m_thickness->setValidator(floatvalidator);
    connect(m_thickness, &QLineEdit::textChanged, this, &DlgSliceSetting::JudgeText);

    m_esposeTime = new QLineEdit(this);
    m_esposeTime->setObjectName("mksdlp_expose");
    m_esposeTime->setAlignment(Qt::AlignRight);
    m_esposeTime->setValidator(intvalidator);
    connect(m_esposeTime, &QLineEdit::textChanged, this, &DlgSliceSetting::JudgeText);

    m_lightOffTime = new QLineEdit(this);
    m_lightOffTime->setObjectName("mksdlp_lftime");
    m_lightOffTime->setAlignment(Qt::AlignRight);
    m_lightOffTime->setValidator(intvalidator);
    connect(m_lightOffTime, &QLineEdit::textChanged, this, &DlgSliceSetting::JudgeText);

    m_bottomExposeTime = new QLineEdit(this);
    m_bottomExposeTime->setObjectName("mksdlp_bexpose");
    m_bottomExposeTime->setAlignment(Qt::AlignRight);
    m_bottomExposeTime->setValidator(intvalidator);
    connect(m_bottomExposeTime, &QLineEdit::textChanged, this, &DlgSliceSetting::JudgeText);

    m_BottomLayer = new QLineEdit(this);
    m_BottomLayer->setObjectName("mksdlp_blayer");
    m_BottomLayer->setAlignment(Qt::AlignRight);
    m_BottomLayer->setValidator(intvalidator);
    connect(m_BottomLayer, &QLineEdit::textChanged, this, &DlgSliceSetting::JudgeText);

    m_sliceType = new QComboBox(this);
    m_sliceType->addItem(tr("LCD(X forward)"));
    m_sliceType->addItem(tr("Projector(X direction)"));
    connect(m_sliceType, SIGNAL(currentIndexChanged(int)), this, SLOT(SliceTypeChange(int)));

    m_mainlayout = new QGridLayout(this);
    m_mainlayout->addWidget(m_thicknessName,        1, 0);
    m_mainlayout->addWidget(m_thickness,            1, 1);
    m_mainlayout->addWidget(m_exposeTimeName,       2, 0);
    m_mainlayout->addWidget(m_esposeTime,           2, 1);
    m_mainlayout->addWidget(m_lightOffName,         3, 0);
    m_mainlayout->addWidget(m_lightOffTime,         3, 1);
    m_mainlayout->addWidget(m_bottomExposeName,     4, 0);
    m_mainlayout->addWidget(m_bottomExposeTime,     4, 1);
    m_mainlayout->addWidget(m_bottomLayerName,      5, 0);
    m_mainlayout->addWidget(m_BottomLayer,          5, 1);
    m_mainlayout->addWidget(m_lightCuringName,      6, 0);
    m_mainlayout->addWidget(m_sliceType,            6, 1);
    this->setLayout(m_mainlayout);
}

void DlgSliceSetting::InitData()
{
    QString data;
    GetData("mksdlp_thickness", data, "0.1");
    m_thickness->setText(data);

    GetData("mksdlp_expose", data, "8");
    m_esposeTime->setText(data);

    GetData("mksdlp_lftime", data, "3");
    m_lightOffTime->setText(data);

    GetData("mksdlp_bexpose", data, "3");
    m_bottomExposeTime->setText(data);

    GetData("mksdlp_blayer", data, "3");
    m_BottomLayer->setText(data);

    GetData("mksdlp_slicetype", data, "0");
    m_sliceType->setCurrentIndex(data.toInt());

}

void DlgSliceSetting::GetData(QString datakey, QString &data, QString defaultvalue)
{
    QSettings settings("makerbase", "mksdlp");
    data = settings.value(datakey).toString();
    if(data == "") {
        settings.setValue(datakey, defaultvalue);
        data = defaultvalue;
    }
}

void DlgSliceSetting::DealData(QString datakey, QString data)
{
    QSettings settings("makerbase", "mksdlp");
    settings.setValue(datakey, data);
}
