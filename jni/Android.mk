LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE    := jni
LOCAL_SRC_FILES := jni.c
#����log������Ӧ��log��
LOCAL_LDLIBS += -llog 

include $(BUILD_SHARED_LIBRARY)