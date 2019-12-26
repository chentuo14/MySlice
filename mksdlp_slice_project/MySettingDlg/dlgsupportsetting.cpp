#include "dlgsupportsetting.h"
#include "ui_dlgsupportsetting.h"
#include <QDebug>

DlgSupportSetting::DlgSupportSetting(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DlgSupportSetting)
{
    ui->setupUi(this);
    InitControls();
    InitData();
}

DlgSupportSetting::~DlgSupportSetting()
{
    delete ui;
}

void DlgSupportSetting::OnModelSelected(int id)
{
    this->selectid = id;
}

void DlgSupportSetting::SupportTypeChange(int index)
{
    qDebug()<<__FUNCTION__;
    QString shape;
    switch(index){
    case 0:
        shape = "cylinder";
        break;
    case 1:
        shape = "square";
        break;
    default:
        shape = "square";
        break;
    }
    DealData("mksdlp_supportshape", QString::number(index));
    emit ChangeShape(shape);
}

void DlgSupportSetting::SupportShapChange(int index)
{
    qDebug()<<__FUNCTION__;
    QString stype;
    switch (index) {
    case 0:
        stype = "free";
        break;
    case 1:
        stype = "face";
        break;
    case 2:
        stype = "point";
        break;
    default:
        stype = "point";
        break;
    }
    DealData("mksdlp_supporttype", QString::number(index));
    emit ChangeType(stype);
}

void DlgSupportSetting::RateSelect()
{
    QPushButton *mbtn = (QPushButton*)sender();
    QString objn = mbtn->objectName();
    ((MainWindow *)this->parentWidget())->setData("mksdlp_supportrate", objn);
    UpdateData();
}

void DlgSupportSetting::SizeSelect()
{
    QPushButton *mbtn = (QPushButton*)sender();
    QString objn = mbtn->objectName();
    if(objn == "S")
    {
        ((MainWindow *)this->parentWidget())->setData("mksdlp_supportbsize", "5");
        ((MainWindow *)this->parentWidget())->setData("mksdlp_supportmsize", "0.3");
    }else if(objn == "M")
    {
        ((MainWindow *)this->parentWidget())->setData("mksdlp_supportbsize", "10");
        ((MainWindow *)this->parentWidget())->setData("mksdlp_supportmsize", "0.5");
    }else if(objn == "L")
    {
        ((MainWindow *)this->parentWidget())->setData("mksdlp_supportbsize", "10");
        ((MainWindow *)this->parentWidget())->setData("mksdlp_supportmsize", "1.0");
    }else{
        ((MainWindow *)this->parentWidget())->setData("mksdlp_supportbsize", "10");
        ((MainWindow *)this->parentWidget())->setData("mksdlp_supportmsize", "0.5");
    }
    UpdateData();
}

void DlgSupportSetting::UpdateData()
{
    QString data;
    ((MainWindow *)this->parentWidget())->getData("mksdlp_supportrate", data, "30");
    qDebug()<<"mksdlp_supportrate data:"<<data;
    m_supportTrateL->setStyleSheet("background-color:#ffffff;color:#0f8764;border-radius:2px;border:0px;margin-top:10px;"
                                   "margin-left:5px;font:14px;font-weight:bold;width:20px;height:20px;");
    m_supportTrateM->setStyleSheet("background-color:#ffffff;color:#0f8764;border-radius:2px;border:0px;margin-top:10px;"
                                   "margin-left:5px;font:14px;font-weight:bold;width:20px;height:20px;");
    m_supportTrateH->setStyleSheet("background-color:#ffffff;color:#0f8764;border-radius:2px;border:0px;margin-top:10px;"
                                   "margin-left:5px;font:14px;font-weight:bold;width:20px;height:20px;");
    if(data == m_supportTrateL->objectName()) {
        m_supportTrateL->setStyleSheet("background-color:#126e59;color:#14d39f;;border-radius:2px;border:0px;"
                                       "margin-top:10px;margin-left:5px;font:14px;font-weight:bold;width:20px;height:20px;");

    } else if(data == m_supportTrateM->objectName()) {
        m_supportTrateM->setStyleSheet("background-color:#126e59;color:#14d39f;;border-radius:2px;border:0px;"
                                       "margin-top:10px;margin-left:5px;font:14px;font-weight:bold;width:20px;height:20px;");
    } else if(data == m_supportTrateH->objectName()) {
        m_supportTrateH->setStyleSheet("background-color:#126e59;color:#14d39f;;border-radius:2px;border:0px;"
                                       "margin-top:10px;margin-left:5px;font:14px;font-weight:bold;width:20px;height:20px;");
    } else  {
        ((MainWindow *)this->parentWidget())->setData("mksdlp_supportrate", "30");
        m_supportTrateM->setStyleSheet("background-color:#126e59;color:#14d39f;;border-radius:2px;border:0px;"
                                       "margin-top:10px;margin-left:5px;font:14px;font-weight:bold;width:20px;height:20px;");
    }

    ((MainWindow *)this->parentWidget())->getData("mksdlp_supportmsize", data, "0.5");
    qDebug()<<"mksdlp_supportmsize data:"<<data;
    m_supportSizeS->setStyleSheet("background-color:#ffffff;color:#0f8764;border-radius:2px;border:0px;margin-top:10px;"
                                    "margin-left:5px;font:14px;font-weight:bold;width:20px;height:20px;");
    m_supportSizeM->setStyleSheet("background-color:#ffffff;color:#0f8764;border-radius:2px;border:0px;margin-top:10px;"
                                    "margin-left:5px;font:14px;font-weight:bold;width:20px;height:20px;");
    m_supportSizeL->setStyleSheet("background-color:#ffffff;color:#0f8764;border-radius:2px;border:0px;margin-top:10px;"
                                    "margin-left:5px;font:14px;font-weight:bold;width:20px;height:20px;");
    if(data == "0.3") {
        m_supportSizeS->setStyleSheet("background-color:#ffffff;color:#0f8764;border-radius:2px;border:0px;margin-top:10px;"
                                      "margin-left:5px;font:14px;font-weight:bold;width:20px;height:20px;");
    } else if(data == "0.5") {
        m_supportSizeM->setStyleSheet("background-color:#126e59;color:#14d39f;;border-radius:2px;border:0px;"
                                      "margin-top:10px;margin-left:5px;font:14px;font-weight:bold;width:20px;height:20px;");
    } else if(data == "1.0") {
        m_supportSizeL->setStyleSheet("background-color:#126e59;color:#14d39f;;border-radius:2px;border:0px;"
                                      "margin-top:10px;margin-left:5px;font:14px;font-weight:bold;width:20px;height:20px;");
    } else {
        ((MainWindow *)this->parentWidget())->setData("mksdlp_supportmsize", "0.5");
        ((MainWindow *)this->parentWidget())->setData("mksdlp_supportbsize", "10");
        m_supportSizeM->setStyleSheet("background-color:#126e59;color:#14d39f;;border-radius:2px;border:0px;"
                                      "margin-top:10px;margin-left:5px;font:14px;font-weight:bold;width:20px;height:20px;");
    }
}

void DlgSupportSetting::InitControls()
{
    m_supportTypeName = new QLabel("Support type:", this);
    m_supportType = new QComboBox(this);
    m_supportType->addItem("free");
    m_supportType->addItem("face");
    m_supportType->addItem("point");
    connect(m_supportType, SIGNAL(currentIndexChanged(int)), this, SLOT(SupportTypeChange(int)));

    m_supportShapeName = new QLabel("Support shape:");
    m_supportShape = new QComboBox(this);
    m_supportShape->addItem("cylinder");
    m_supportShape->addItem("square");
    connect(m_supportShape, SIGNAL(currentIndexChanged(int)), this, SLOT(SupportShapChange(int)));

    m_supportSizeName = new QLabel("support size:");
    m_supportDensityName = new QLabel("Support density:");

    m_supportSizeS = new QPushButton(this);
    m_supportSizeS->setText("S");
    m_supportSizeS->setObjectName("S");
    connect(m_supportSizeS, SIGNAL(clicked(bool)), this, SLOT(SizeSelect()));

    m_supportSizeM = new QPushButton(this);
    m_supportSizeM->setText("M");
    m_supportSizeM->setObjectName("M");
    connect(m_supportSizeM, SIGNAL(clicked(bool)), this, SLOT(SizeSelect()));

    m_supportSizeL = new QPushButton(this);
    m_supportSizeL->setText("L");
    m_supportSizeL->setObjectName("L");
    connect(m_supportSizeL, SIGNAL(clicked(bool)), this, SLOT(SizeSelect()));

    m_supportTrateL = new QPushButton(this);
    m_supportTrateL->setText("L");
    m_supportTrateL->setObjectName("20");
    connect(m_supportTrateL, SIGNAL(clicked(bool)), this, SLOT(RateSelect()));

    m_supportTrateM = new QPushButton(this);
    m_supportTrateM->setText("M");
    m_supportTrateM->setObjectName("30");
    connect(m_supportTrateM, SIGNAL(clicked(bool)), this, SLOT(RateSelect()));

    m_supportTrateH = new QPushButton(this);
    m_supportTrateH->setText("H");
    m_supportTrateH->setObjectName("50");
    connect(m_supportTrateH, SIGNAL(clicked(bool)), this, SLOT(RateSelect()));

    m_mainlayout = new QGridLayout(this);
    m_supportTypeLayout = new QHBoxLayout(this);
    m_supportShapeLayout = new QHBoxLayout(this);
    m_supportTrateLayout = new QHBoxLayout(this);
    m_supportSizeLayout = new QHBoxLayout(this);


    m_supportTypeLayout->addWidget(m_supportTypeName);
    m_supportTypeLayout->addWidget(m_supportType);
    m_supportTypeLayout->addStretch(1);

    m_supportShapeLayout->addWidget(m_supportShapeName);
    m_supportShapeLayout->addWidget(m_supportShape);
    m_supportShapeLayout->addStretch(1);

    m_supportTrateLayout->addWidget(m_supportDensityName);
    m_supportTrateLayout->addWidget(m_supportTrateL);
    m_supportTrateLayout->addWidget(m_supportTrateM);
    m_supportTrateLayout->addWidget(m_supportTrateH);
    m_supportTrateLayout->addStretch(1);

    m_supportSizeLayout->addWidget(m_supportSizeName);
    m_supportSizeLayout->addWidget(m_supportSizeS);
    m_supportSizeLayout->addWidget(m_supportSizeM);
    m_supportSizeLayout->addWidget(m_supportSizeL);
    m_supportSizeLayout->addStretch(1);

    m_mainlayout->addLayout(m_supportTypeLayout,    1, 0);
    m_mainlayout->addLayout(m_supportShapeLayout,   2, 0);
    m_mainlayout->addLayout(m_supportTrateLayout,   3, 0);
    m_mainlayout->addLayout(m_supportSizeLayout,    4, 0);
    this->setLayout(m_mainlayout);
}

void DlgSupportSetting::InitData()
{
    UpdateData();
}

void DlgSupportSetting::GetData(QString datakey, QString &data, QString defaultvalue)
{
    QSettings settings("makerbase", "mksdlp");
    data = settings.value(datakey).toString();
    if(data == "") {
        settings.setValue(datakey, defaultvalue);
        data = defaultvalue;
    }
}

void DlgSupportSetting::DealData(QString datakey, QString data)
{
    QSettings settings("makerbase", "mksdlp");
    settings.setValue(datakey, data);
}
