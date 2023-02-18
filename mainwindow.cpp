#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    cv::Mat test2;
    test2.create(100,200,CV_32FC1);
    testimg.create(200,300,CV_32FC3);
    testimg = cv::Scalar(0,0.5,0);

}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_actionAbout_CPP_DNN_triggered()
{
    Dialog_About *dialog_about_inst;
    dialog_about_inst = new Dialog_About;
    dialog_about_inst->setWindowTitle("About");
    dialog_about_inst->exec();
    delete dialog_about_inst;
}

void MainWindow::on_actionTest_opencv_image_triggered()
{
    cv::imshow("testimg", testimg);
    cv::waitKey(1);
}
