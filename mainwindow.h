#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMainWindow>
#include <QDebug>
#include <QtCore>
#include <QLabel>
#include <QBrush>
#include <QPixmap>
#include <QWidget>
#include <QBitmap>
#include <QKeyEvent>
#include <QTime>
#include <QPainter>
#include <QCoreApplication>
#include <ctime>
#include <QMovie>
#include <QApplication>
#include <QTimer>
#include <QDialog>
#include "ttaiko_start.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
