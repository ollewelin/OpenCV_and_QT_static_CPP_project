#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
//Opencv---------------
#include <opencv2/highgui/highgui.hpp>  // OpenCV window I/O
#include <opencv2/imgproc/imgproc.hpp> //
#include <opencv2/opencv.hpp>
#include <opencv2/core.hpp>
#include <opencv2/core/core.hpp>        // Basic OpenCV structures (cv::Mat, Scalar)
#include <opencv2/core/types_c.h>
//--------------------
#include "dialog_about.h"


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

    void on_actionAbout_CPP_DNN_triggered();

    void on_actionTest_opencv_image_triggered();

private:
    Ui::MainWindow *ui;
    cv::Mat testimg;
    Dialog_About *dialog_about_inst;
};

#endif // MAINWINDOW_H
