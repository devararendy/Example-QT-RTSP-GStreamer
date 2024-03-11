#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVideoWidget>
#include <QMediaPlayer>
#include <QAudioOutput>
#include <QUrl>
#include <QNetworkRequest>
#include <QTimer>
#include <gst/video/videooverlay.h>

#include <gst/gst.h>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void InitVideo();

private:
    Ui::MainWindow *ui;

private slots:
    void mediaPlayerDebugError();
    void mediaPlayerDebugStatus(QMediaPlayer::MediaStatus status);
};
#endif // MAINWINDOW_H
