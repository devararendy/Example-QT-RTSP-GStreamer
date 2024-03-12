#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    gst_init (&argc, &argv);
    QApplication a(argc, argv);
    a.connect(&a, SIGNAL(lastWindowClosed()), &a, SLOT(quit ()));

    // prepare the pipeline
    GstElement *pipeline = gst_parse_launch ("playbin uri=rtsp://admin:admin@192.168.1.24:1935 uridecodebin0::source::latency=25", NULL);

    // prepare the ui
    QWidget window;
    window.setWindowTitle("MyWidget");
    window.resize(1280, 720);
    window.show();

    WId xwinid = window.winId();
    //this is the call to overlay the gstreamer's output to the Qt Widgets...
    gst_video_overlay_set_window_handle (GST_VIDEO_OVERLAY (pipeline), xwinid);


    // run the pipeline
    GstStateChangeReturn sret = gst_element_set_state (pipeline, GST_STATE_PLAYING);
    if (sret == GST_STATE_CHANGE_FAILURE)
    {
        gst_element_set_state (pipeline, GST_STATE_NULL);
        gst_object_unref (pipeline);
        // Exit application
        QTimer::singleShot(0, QApplication::activeWindow(), SLOT(quit()));
    }

    int ret = a.exec();

    window.hide();
    gst_element_set_state (pipeline, GST_STATE_NULL);
    gst_object_unref (pipeline);

    return ret;
}
