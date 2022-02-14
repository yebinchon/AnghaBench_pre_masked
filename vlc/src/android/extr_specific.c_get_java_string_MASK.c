
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int jstring ;
typedef int jfieldID ;
typedef int jclass ;
struct TYPE_10__ {char* (* GetStringUTFChars ) (TYPE_1__**,int ,int ) ;int (* DeleteLocalRef ) (TYPE_1__**,int ) ;int (* ReleaseStringUTFChars ) (TYPE_1__**,int ,char const*) ;int (* GetStaticObjectField ) (TYPE_1__**,int ,int ) ;int (* ExceptionClear ) (TYPE_1__**) ;scalar_t__ (* ExceptionCheck ) (TYPE_1__**) ;int (* GetStaticFieldID ) (TYPE_1__**,int ,char const*,char*) ;} ;
typedef TYPE_1__* JNIEnv ;


 char* FUNC_0 (char const*) ;
 int FUNC_1 (TYPE_1__**,int ,char const*,char*) ;
 scalar_t__ FUNC_2 (TYPE_1__**) ;
 int FUNC_3 (TYPE_1__**) ;
 int FUNC_4 (TYPE_1__**,int ,int ) ;
 char* FUNC_5 (TYPE_1__**,int ,int ) ;
 int FUNC_6 (TYPE_1__**,int ,char const*) ;
 int FUNC_7 (TYPE_1__**,int ) ;

__attribute__((used)) static char *
FUNC_8(JNIEnv *VAR_0, jclass VAR_1, const char *VAR_2)
{
    jfieldID VAR_3 = (*VAR_0)->GetStaticFieldID(VAR_0, VAR_1, VAR_2,
                                           "Ljava/lang/String;");
    if ((*VAR_0)->ExceptionCheck(VAR_0))
    {
        (*VAR_0)->ExceptionClear(VAR_0);
        return ((void*)0);
    }

    jstring VAR_4 = (*VAR_0)->GetStaticObjectField(VAR_0, VAR_1, VAR_3);

    const char *VAR_5 = (*VAR_0)->GetStringUTFChars(VAR_0, VAR_4, 0);
    if (VAR_5 == ((void*)0))
        return ((void*)0);

    char *VAR_6 = FUNC_0(VAR_5);

    (*VAR_0)->ReleaseStringUTFChars(VAR_0, VAR_4, VAR_5);
    (*VAR_0)->DeleteLocalRef(VAR_0, VAR_4);

    return VAR_6;
}
