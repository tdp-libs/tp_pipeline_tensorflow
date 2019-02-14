
This module adds the TensorFlow to tp_pipeline. To use this you will need to build and install TensorFlow.

## Building TensorFlow

### Dependencies
```
dnf install -y dnf-plugins-core
dnf copr enable -y vbatts/bazel
dnf install -y bazel

```

### Build
Following instructions on https://www.tensorflow.org/install/source

```
mkdir tensorflow
cd tensorflow

git clone https://github.com/tensorflow/tensorflow.git
cd tensorflow

./configure
bazel build --config=opt //tensorflow:libtensorflow.so

```

### Install
Bit of a hack we need to copy install files manually.
```
updatedb

```


```
locate c_api.h
mkdir -p ../usr/include/tensorflow/c
cp tensorflow/c/*.h ../usr/include/tensorflow/c/

locate libtensorflow.so
mkdir -p ../usr/lib
cp /home/tom/.cache/bazel/_bazel_tom/b75fa402907257891a5e8c3b59346828/execroot/org_tensorflow/bazel-out/k8-opt/bin/tensorflow/*.so ../usr/lib/

```
