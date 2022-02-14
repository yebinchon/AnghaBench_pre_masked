
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int jstring ;
typedef int jfieldID ;
typedef int jclass ;
struct TYPE_9__ {char* (* GetStringUTFChars ) (TYPE_1__**,int ,int ) ;int (* DeleteLocalRef ) (TYPE_1__**,int ) ;int (* ReleaseStringUTFChars ) (TYPE_1__**,int ,char const*) ;int (* GetStaticObjectField ) (TYPE_1__**,int ,int ) ;int (* GetStaticFieldID ) (TYPE_1__**,int ,char*,char*) ;int (* FindClass ) (TYPE_1__**,char*) ;} ;
typedef TYPE_1__* JNIEnv ;


 scalar_t__ FUNC_0 () ;
 char* FUNC_1 (char const*) ;
 int FUNC_2 (TYPE_1__**,char*) ;
 int FUNC_3 (TYPE_1__**,int ,char*,char*) ;
 int FUNC_4 (TYPE_1__**,int ,int ) ;
 char* FUNC_5 (TYPE_1__**,int ,int ) ;
 int FUNC_6 (TYPE_1__**,int ,char const*) ;
 int FUNC_7 (TYPE_1__**,int ) ;

__attribute__((used)) static char *FUNC_8(JNIEnv *VAR_0)
{
    char *VAR_1 = ((void*)0);

    jclass VAR_2 = (*VAR_0)->FindClass(VAR_0, "android/os/Build");
    if (FUNC_0())
        return ((void*)0);

    jfieldID VAR_3 = (*VAR_0)->GetStaticFieldID(VAR_0, VAR_2, "MANUFACTURER",
                                           "Ljava/lang/String;");
    if (FUNC_0())
        goto end;

    jstring VAR_4 = (*VAR_0)->GetStaticObjectField(VAR_0, VAR_2, VAR_3);

    if (FUNC_0())
        goto end;

    const char *VAR_5 = (*VAR_0)->GetStringUTFChars(VAR_0, VAR_4, 0);
    if (VAR_5)
    {
        VAR_1 = FUNC_1(VAR_5);
        (*VAR_0)->ReleaseStringUTFChars(VAR_0, VAR_4, VAR_5);
    }

end:
    (*VAR_0)->DeleteLocalRef(VAR_0, VAR_2);
    return VAR_1;
}
