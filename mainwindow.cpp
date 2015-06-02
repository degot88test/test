#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QDir currentDir;
    QString path = "D:\\fraps";
    currentDir = QDir(path);
    QStringList files;
    files = currentDir.entryList(QStringList("*"),
                                 QDir::Files | QDir::NoSymLinks);

    for (int i = 0; i < files.size(); ++i) {
        qDebug() << currentDir.absoluteFilePath(files[i]);

    }





}

MainWindow::~MainWindow()
{
    delete ui;
}
