# Intro

This is an example of QT for streaming RTSP from RTSP IP Camera. You can adjust the RTSP address.
I keep it simple to make it easy to understand. C++ is fun. Now C++ is similar to Golang :)

## Depedencies

It Requires GStreamer Library, you need to install it.

### MacOS

Simple, you only need to run. Tested on MacOS
```
brew install gstreamer

```

### Linux

Haven't test yet. but please follow this [link](https://gstreamer.freedesktop.org/documentation/installing/on-linux.html?gi-language=c)


### Windows

Haven't test yet. but please follow this [link](https://gstreamer.freedesktop.org/documentation/installing/on-windows.html?gi-language=c)

## Reference

- How to include GStreamer to CMakelist using [Pkg-Config](https://stackoverflow.com/questions/64078308/how-to-write-a-cmake-file-which-successfully-links-gstreamer-basic-tutorial-5)
- How to [integrate GStreamer with QT](https://forum.qt.io/post/296139)