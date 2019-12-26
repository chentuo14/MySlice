#include "dlgmachinesetting.h"
#include "ui_dlgmachinesetting.h"

DlgMachineSetting::DlgMachineSetting(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DlgMachineSetting)
{
    ui->setupUi(this);
    floatValidator = new QDoubleValidator();
    intvalidator = new QIntValidator();
    InitControls();
}

DlgMachineSetting::~DlgMachineSetting()
{
    delete m_XResolutionName;
    delete m_YResolutionName;
    delete m_XSizeName;
    delete m_YSizeName;
    delete m_ZSizeName;
    delete m_xResolution;
    delete m_yResolution;
    delete m_xSize;
    delete m_ySize;
    delete m_zSize;
    delete m_mainLayout;
    delete intvalidator;
    delete floatValidator;
    delete ui;

}

void DlgMachineSetting::JudgeText()
{
    QLineEdit *mwidget =(QLineEdit *)sender();
    QString tt = mwidget->text();
    QString datakey = mwidget->objectName();
    DealData(datakey, tt);
}

void DlgMachineSetting::InitControls()
{
    m_XResolutionName = new QLabel("x resolution(pixel");
    m_YResolutionName = new QLabel("y resolution(pixel)");
    m_XSizeName = new QLabel("x size(mm)");
    m_YSizeName = new QLabel("y size(mm)");
    m_ZSizeName = new QLabel("z size(mm)");

    m_xResolution = new QLineEdit(this);
    m_xResolution->setObjectName("mksdlp_pixelx");
    m_xResolution->setAlignment(Qt::AlignRight);
    m_xResolution->setValidator(intvalidator);
    connect(m_xResolution, &QLineEdit::textChanged, this, &DlgMachineSetting::JudgeText);

    m_yResolution = new QLineEdit(this);
    m_yResolution->setObjectName("mksdlp_pixely");
    m_yResolution->setAlignment(Qt::AlignRight);
    m_yResolution->setValidator(intvalidator);
    connect(m_yResolution, &QLineEdit::textChanged, this, &DlgMachineSetting::JudgeText);

    m_xSize = new QLineEdit(this);
    m_xSize->setObjectName("mksdlp_xsize");
    m_xSize->setAlignment(Qt::AlignRight);
    m_xSize->setValidator(floatValidator);
    connect(m_xSize, &QLineEdit::textChanged, this, &DlgMachineSetting::JudgeText);

    m_ySize = new QLineEdit(this);
    m_ySize->setObjectName("mksdlp_ysize");
    m_ySize->setAlignment(Qt::AlignRight);
    m_ySize->setValidator(floatValidator);
    connect(m_ySize, &QLineEdit::textChanged, this, &DlgMachineSetting::JudgeText);

    m_zSize = new QLineEdit(this);
    m_zSize->setObjectName("mksdlp_zsize");
    m_zSize->setAlignment(Qt::AlignRight);
    m_zSize->setValidator(floatValidator);
    connect(m_zSize, &QLineEdit::textChanged, this, &DlgMachineSetting::JudgeText);

    m_keepRatio = new QCheckBox(this);
    m_keepRatio->setText("lock ratio");
    m_keepRatio->setChecked(true);

    m_mainLayout = new QGridLayout(this);
    m_mainLayout->addWidget(m_XResolutionName,  1, 0);
    m_mainLayout->addWidget(m_xResolution,      1, 1);
    m_mainLayout->addWidget(m_YResolutionName,  2, 0);
    m_mainLayout->addWidget(m_yResolution,      2, 1);
    m_mainLayout->addWidget(m_XSizeName,        3, 0);
    m_mainLayout->addWidget(m_xSize,            3, 1);
    m_mainLayout->addWidget(m_YSizeName,        4, 0);
    m_mainLayout->addWidget(m_ySize,            4, 1);
    m_mainLayout->addWidget(m_ZSizeName,        5, 0);
    m_mainLayout->addWidget(m_zSize,            5, 1);
    m_mainLayout->addWidget(m_keepRatio,  6, 0, 1, 2);
    m_mainLayout->setAlignment(m_keepRatio, Qt::AlignCenter);
    this->setLayout(m_mainLayout);

    InitData();
}

void DlgMachineSetting::InitData()
{
    QString data;
    GetData("mksdlp_pixelx", data, "2560");
    m_xResolution->setText(data);

    GetData("mksdlp_pixely", data, "1440");
    m_yResolution->setText(data);

    GetData("mksdlp_xsize", data, "256");
    m_xSize->setText(data);

    GetData("mksdlp_ysize", data, "144");
    m_ySize->setText(data);

    GetData("mksdlp_zsize", data, "150.0");
    m_zSize->setText(data);
}

void DlgMachineSetting::GetData(QString datakey, QString &data, QString defaultvalue)
{
//    qDebug()<<" [function]"<<__FUNCTION__;
    QSettings settings("makerbase", "mksdlp");
    data = settings.value(datakey).toString();
    if(data == "") {
        settings.setValue(datakey, defaultvalue);
        data = defaultvalue;
    }
}

void DlgMachineSetting::DealData(QString datakey, QString data)
{
//    qDebug()<<" [function]"<<__FUNCTION__;
    QSettings settings("makerbase", "mksdlp");
    settings.setValue(datakey, data);
    if(m_keepRatio->isChecked() && !settexting)
    {
        settexting = true;
        float result;
        if(datakey == "mksdlp_xsize") {
            result = m_yResolution->text().toFloat()* (m_xSize->text().toFloat()/m_xResolution->text().toFloat());
            m_ySize->setText(QString::number(result));
        } else if(datakey == "mksdlp_ysize") {
            result = m_xResolution->text().toFloat()*(m_ySize->text().toFloat()/m_yResolution->text().toFloat());
            m_xSize->setText(QString::number(result));
        }
//        qDebug() << "changing";
        settexting = false;
    }
}
