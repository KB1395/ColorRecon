#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/core/mat.hpp>
#include <jni.h>
#include <android/log.h>
#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"
#include <iostream>
#include <math.h>
#include <string.h>

#define TAG "OpenCVNative"
#define LOGD(MSG) __android_log_print(ANDROID_LOG_DEBUG, TAG, MSG)

using namespace std;
using namespace cv;





using namespace cv;
using namespace std;
extern "C"{

    JNIEXPORT void JNICALL Java_com_example_simonebrazzo_opencv_MainActivity_processing(JNIEnv *env, jobject instance, jlong imRgba, jlong imGray)
    {

        LOGD("Native processing");

        Mat& image = *(Mat*) imRgba;
        Mat& imgG = *(Mat*) imGray;







    }

}