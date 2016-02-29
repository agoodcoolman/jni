#include <jni.h>
#include <com_example_jni_Native.h>
#include <string>
#include <people.h>

JNIEXPORT jint JNICALL Java_com_example_jni_Native_add
  (JNIEnv *env, jclass clazz, jint a, jint b) {
	jint  c = a + b;
	people.name = "nimei";

	LOGI("XXXX");
	LOGI("a = %s", people.getName().c_str());
	return c;
};
