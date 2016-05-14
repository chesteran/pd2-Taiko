#ifndef TTAIKO_START_H
#define TTAIKO_START_H
#include "mainwindow.h"
#include <QDialog>
#include <QtCore>


namespace Ui {
class ttaiko_start;
}

class ttaiko_start : public QDialog
{
    Q_OBJECT

public:
    explicit ttaiko_start(QWidget *parent = 0);
    ~ttaiko_start();
int i=1;
int speed=10;
int score=0;
int ansec=1;


QTimer *timer;
QTimer *timer2;
QTimer *timer3;
private:
    Ui::ttaiko_start *ui;
    void keyPressEvent(QKeyEvent *event);


public slots:
    void counttime();
    void mmove();
    void animate();

private slots:
    void on_pushButton_2_clicked();
    void on_pushButton_clicked();
};

#endif // TTAIKO_START_H
