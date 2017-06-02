#include "UseNative.h"
#include <iostream>

void Java_UseNative_cppfunc(JNIEnv * jni, jclass klass)
{
	std::cout << "C++ says!" << std::endl;
	jmethodID mid = jni->GetStaticMethodID(klass, "write", "()V");
	jni->CallStaticVoidMethod(klass, mid);
}
