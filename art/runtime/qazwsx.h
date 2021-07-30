
#ifndef ART_RUNTIME_QAZWSX_H_
#define ART_RUNTIME_QAZWSX_H_

#include "art_method.h"
#include "thread.h"
#include <string>
#include <thread>
#include <jni.h>

using namespace std;



namespace art
{
    //void register_android_app_Qazwsx(JNIEnv *env);



    class Qazwsx
    {
    public:

       
        static void qazwsxFunnyInvoke(ArtMethod *artMethod);

        static uint8_t *getCodeItemEnd(const uint8_t **pData);
        static char *base64Encode(char *str, long str_len, long *outlen);
        static bool getProcessName(char *szProcName);

        static void mapToFile();
        static void downloadClassName(const DexFile *dexFile, const char *feature);
        static void downloadMethod(ArtMethod *artMethod, const char *feature);
        static void downloadDexFile(const DexFile *dexFile, const char *feature);

        static void setThread(Thread *thread);
        static void setMethod(ArtMethod *method);
        static bool isFunnyInvoke(Thread *thread, ArtMethod *method);
        static void register_android_app_Qazwsx(JNIEnv *env);
        
    private:
        static Thread *qazwsxThread;
        static ArtMethod *qazwsxArtMethod;
    };

}

#endif // ART_RUNTIME_QAZWSX_H_
