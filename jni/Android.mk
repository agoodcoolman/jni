LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE    := jni
LOCAL_SRC_FILES := jni.cpp
LOCAL_LDLIBS := -llog -lz
include $(BUILD_SHARED_LIBRARY)
