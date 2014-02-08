#include "shulaing_han_ndk_callback_DataProvider.h"
#include "first.h"
#include <string.h>
#include <android/log.h>
#define LOG_TAG "System.out"
#define LOGD(...) __android_log_print(ANDROID_LOG_DEBUG, LOG_TAG, __VA_ARGS__)
#define LOGI(...) __android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__)

JNIEXPORT void JNICALL Java_shulaing_han_ndk_1callback_DataProvider_callCcode
  (JNIEnv * env, jobject obj)
{
	//����DataProvider�����е�helloFromJava()����
	//��ȡ��ĳ������, ��ȡ�����еķ���, ���û�ȡ���ķ���
	LOGI("in code");
	//DataProvider�������� shulaing.han.ndk_callback.DataProvider
	char* classname = "shulaing/han/ndk_callback/DataProvider";


	jclass dpclazz = (*env)->FindClass(env, classname);
	if(dpclazz == 0)
		LOGI("class not find !!!");
	else
		LOGI("class find !!!");

	//�������� : �ڶ���������Class����, �����������Ƿ�����,���ĸ������Ƿ�����ǩ��, ��ȡ�����õ�method
	jmethodID methodID = (*env)->GetMethodID(env, dpclazz, "helloFromJava", "()V");
	if(methodID == 0)
			LOGI("method not find !!!");
		else
			LOGI("method find !!!");

	/*
	 * ���÷��� void (*CallVoidMethod)(JNIEnv*, jobject, jmethodID, ...);
	 * �������� : ����� ... �ǿɱ����, ����÷���ֵvoid�ķ����в���, �ͽ��������մ�������
	 */
	LOGI("before call method");
	(*env)->CallVoidMethod(env, obj, methodID);
	LOGI("after call method");

}

JNIEXPORT void JNICALL Java_shulaing_han_ndk_1callback_DataProvider_callCcode1
  (JNIEnv *env, jobject obj)
{
	//����DataProvider�����е�helloFromJava()����
		//��ȡ��ĳ������, ��ȡ�����еķ���, ���û�ȡ���ķ���
		LOGI("in code");
		//DataProvider�������� shulaing.han.ndk_callback.DataProvider
		char* classname = "shulaing/han/ndk_callback/DataProvider";


		jclass dpclazz = (*env)->FindClass(env, classname);
		if(dpclazz == 0)
			LOGI("class not find !!!");
		else
			LOGI("class find !!!");

		//�������� : �ڶ���������Class����, �����������Ƿ�����,���ĸ������Ƿ�����ǩ��, ��ȡ�����õ�method
		jmethodID methodID = (*env)->GetMethodID(env, dpclazz, "printString", "(Ljava/lang/String;)V");
		if(methodID == 0)
				LOGI("method not find !!!");
			else
				LOGI("method find !!!");

		/*
		 * ���÷��� void (*CallVoidMethod)(JNIEnv*, jobject, jmethodID, ...);
		 * �������� : ����� ... �ǿɱ����, ����÷���ֵvoid�ķ����в���, �ͽ��������մ�������
		 */
		LOGI("before call method");
		(*env)->CallVoidMethod(env, obj, methodID, (*env)->NewStringUTF(env, "printString method callback success!!"));
		LOGI("after call method");
}

/*
 * ʵ�ʿ��������
 * C���빤��ʦ������ first.h first.c , ����ֻ��Ҫ��first.h����, Ȼ��Ϳ���ʹ�����еķ�����
 */
JNIEXPORT void JNICALL Java_shulaing_han_ndk_1callback_DataProvider_callCcode2
  (JNIEnv *env, jobject obj)
{
	//����DataProvider�����е�helloFromJava()����
		//��ȡ��ĳ������, ��ȡ�����еķ���, ���û�ȡ���ķ���
		LOGI("in code");
		//DataProvider�������� shulaing.han.ndk_callback.DataProvider
		char* classname = "shulaing/han/ndk_callback/DataProvider";


		jclass dpclazz = (*env)->FindClass(env, classname);
		if(dpclazz == 0)
			LOGI("class not find !!!");
		else
			LOGI("class find !!!");

		//�������� : �ڶ���������Class����, �����������Ƿ�����,���ĸ������Ƿ�����ǩ��, ��ȡ�����õ�method
		jmethodID methodID = (*env)->GetMethodID(env, dpclazz, "Add", "(II)I");
		if(methodID == 0)
				LOGI("method not find !!!");
			else
				LOGI("method find !!!");

		/*
		 * ���÷��� void (*CallVoidMethod)(JNIEnv*, jobject, jmethodID, ...);
		 * �������� : ����� ... �ǿɱ����, ����÷���ֵvoid�ķ����в���, �ͽ��������մ�������
		 */
		LOGI("before call method");
		(*env)->CallIntMethod(env, obj, methodID, 3, 5);
		LOGI("after call method");

}
