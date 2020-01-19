/* 自定义按钮 */
#ifndef MBUTTON_H
#define MBUTTON_H

#include <QWidget>
#include <QPainter>
#include <QBitmap>

class mButton : public QWidget
{
    Q_OBJECT
public:
    explicit mButton(QWidget *parent = 0, QString imgpath = "", QString imgpresspath = "");
    void setId(int id);
    int getId();
    void setSelectedStatus(bool status);
signals:
    void buttonClick();

public slots:
    void paintEvent(QPaintEvent *e);
    void mousePressEvent(QMouseEvent *e);
    void mouseReleaseEvent(QMouseEvent *e);
    void leaveEvent(QEvent *e);

private:
    QPainter *mp;
    QImage img, imgpress;
    bool ispress;
    bool isSelected;
    int m_id;
};

#endif // MBUTTON_H
