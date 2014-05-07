
namespace android {

/* JNI Helpers for wifi_hal to WifiNative bridge implementation */

void throwException( JNIEnv *env, const char *message, int line );
jlong getLongField(JNIEnv *env, jobject obj, const char *name);
jlong getLongArrayField(JNIEnv *env, jobject obj, const char *name, int index);
void setIntField(JNIEnv *env, jobject obj, const char *name, jint value);
void setLongField(JNIEnv *env, jobject obj, const char *name, jlong value);
void setLongArrayField(JNIEnv *env, jobject obj, const char *name, jlongArray value);
void setLongArrayElement(JNIEnv *env, jobject obj, const char *name, int index, jlong value);
void setStringField(JNIEnv *env, jobject obj, const char *name, const char *value);
void reportEvent(JNIEnv *env, jobject obj, const char *method, const char *signature, ...);
jobject createObject(JNIEnv *env, const char *className);
void setObjectField(JNIEnv *env, jobject obj, const char *name, const char *type, jobject value);

}

#define THROW(env, message)      throwException(env, message, __LINE__)
