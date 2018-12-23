#include <stdio.h>
#include "com_mondari_HelloJNI.h"

JNIEXPORT void JNICALL Java_com_mondari_HelloJNI_sayHello(JNIEnv *env, jobject thisObject){
   printf("Hello World!\n");
   return;
}