#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    InitVideo();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::InitVideo()
{

    // // prepare the pipeline
    // GstElement *pipeline = gst_parse_launch ("playbin uri=rtsp://admin:admin@192.168.1.24:1935", NULL);

    // // prepare the ui
    // QWidget window;
    // window.setWindowTitle("MyWidget");
    // window.resize(640, 480);
    // window.show();

    // WId xwinid = window.winId();
    // //this is the call to overlay the gstreamer's output to the Qt Widgets...
    // gst_video_overlay_set_window_handle (GST_VIDEO_OVERLAY (pipeline), xwinid);


    // // run the pipeline
    // GstStateChangeReturn sret = gst_element_set_state (pipeline, GST_STATE_PLAYING);
    // if (sret == GST_STATE_CHANGE_FAILURE)
    // {
    //     gst_element_set_state (pipeline, GST_STATE_NULL);
    //     gst_object_unref (pipeline);
    //     // Exit application
    //     QTimer::singleShot(0, QApplication::activeWindow(), SLOT(quit()));
    // }

    // auto video = new QVideoWidget(this);
    // video->setGeometry(80, 80, this->width(), this->height());
    // video->show();

    // auto player = new  QMediaPlayer(this);
    // // auto audio = new QAudioOutput(this);

    // connect(player,&QMediaPlayer::errorChanged,this,&MainWindow::mediaPlayerDebugError);
    // connect(player,&QMediaPlayer::mediaStatusChanged,this,&MainWindow::mediaPlayerDebugStatus);

    // player->setVideoOutput(video);
    // const QUrl url1 = QUrl("rtsp://admin:admin@192.168.1.24:1935");
    // const QNetworkRequest requestRtsp1(url1);

    // player->setSource(url1);


    // player->play();
}

void MainWindow::mediaPlayerDebugError()
{

}

void MainWindow::mediaPlayerDebugStatus(QMediaPlayer::MediaStatus status)
{
    qDebug() << "Debug Status : " << status << Qt::endl;
}
