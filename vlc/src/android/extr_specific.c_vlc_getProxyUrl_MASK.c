
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_21__ ;
typedef struct TYPE_22__ TYPE_1__ ;


typedef int * jstring ;
struct TYPE_24__ {char* (* GetStringUTFChars ) (TYPE_2__**,int *,int ) ;int (* DeleteLocalRef ) (TYPE_2__**,int *) ;int (* ReleaseStringUTFChars ) (TYPE_2__**,int *,char const*) ;int * (* CallStaticObjectMethod ) (TYPE_2__**,int ,int ,int *) ;int (* ExceptionClear ) (TYPE_2__**) ;scalar_t__ (* ExceptionCheck ) (TYPE_2__**) ;int * (* NewStringUTF ) (TYPE_2__**,char*) ;} ;
struct TYPE_22__ {int getProperty; int clazz; } ;
struct TYPE_23__ {TYPE_1__ System; } ;
typedef TYPE_2__* JNIEnv ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (char**,char*,char const*,char*,char const*) ;
 TYPE_21__ VAR_0 ;
 TYPE_2__** FUNC_2 (int*) ;
 int FUNC_3 (int) ;
 int * FUNC_4 (TYPE_2__**,char*) ;
 int * FUNC_5 (TYPE_2__**,int ,int ,int *) ;
 int FUNC_6 (TYPE_2__**,int *) ;
 char* FUNC_7 (TYPE_2__**,int *,int ) ;
 int FUNC_8 (TYPE_2__**,int *,char const*) ;
 int FUNC_9 (TYPE_2__**,int *,char const*) ;
 int FUNC_10 (TYPE_2__**,int *) ;
 int FUNC_11 (TYPE_2__**,int *,char const*) ;
 int FUNC_12 (TYPE_2__**,int *) ;
 scalar_t__ FUNC_13 (TYPE_2__**) ;
 int FUNC_14 (TYPE_2__**) ;
 int * FUNC_15 (TYPE_2__**,int ,int ,int *) ;
 int FUNC_16 (TYPE_2__**,int *) ;
 char* FUNC_17 (TYPE_2__**,int *,int ) ;
 int * FUNC_18 (TYPE_2__**,char*) ;
 scalar_t__ FUNC_19 (TYPE_2__**) ;
 int FUNC_20 (TYPE_2__**) ;

char *FUNC_21(const char *VAR_1)
{
    FUNC_0(VAR_1);
    JNIEnv *VAR_2;
    bool VAR_3;
    char *VAR_4 = ((void*)0);
    const char *VAR_5 = ((void*)0), *VAR_6 = ((void*)0);
    jstring VAR_7 = ((void*)0), VAR_8 = ((void*)0);

    VAR_2 = FUNC_2(&VAR_3);
    if (VAR_2 == ((void*)0))
        return ((void*)0);


    jstring VAR_9 = (*VAR_2)->NewStringUTF(VAR_2, "http.proxyHost");
    if ((*VAR_2)->ExceptionCheck(VAR_2))
    {
        (*VAR_2)->ExceptionClear(VAR_2);
        VAR_9 = ((void*)0);
    }
    if (VAR_9 == ((void*)0))
        goto end;

    VAR_7 = (*VAR_2)->CallStaticObjectMethod(VAR_2, VAR_0.System.clazz,
                                           VAR_0.System.getProperty, VAR_9);
    (*VAR_2)->DeleteLocalRef(VAR_2, VAR_9);
    if (VAR_7 == ((void*)0))
        goto end;

    VAR_5 = (*VAR_2)->GetStringUTFChars(VAR_2, VAR_7, 0);

    if (VAR_5 == ((void*)0) || VAR_5[0] == '\0')
        goto end;


    VAR_9 = (*VAR_2)->NewStringUTF(VAR_2, "http.proxyPort");
    if ((*VAR_2)->ExceptionCheck(VAR_2))
    {
        (*VAR_2)->ExceptionClear(VAR_2);
        VAR_9 = ((void*)0);
    }
    if (VAR_9 == ((void*)0))
        goto end;

    VAR_8 = (*VAR_2)->CallStaticObjectMethod(VAR_2, VAR_0.System.clazz,
                                           VAR_0.System.getProperty, VAR_9);
    (*VAR_2)->DeleteLocalRef(VAR_2, VAR_9);


    if (VAR_8 != ((void*)0))
    {
        VAR_6 = (*VAR_2)->GetStringUTFChars(VAR_2, VAR_8, 0);
        if (VAR_6 != ((void*)0) && (VAR_6[0] == '\0' || VAR_6[0] == '0'))
        {
            (*VAR_2)->ReleaseStringUTFChars(VAR_2, VAR_8, VAR_6);
            VAR_6 = ((void*)0);
        }
    }


    if (FUNC_1(&VAR_4, "http://%s%s%s",
                 VAR_5,
                 VAR_6 != ((void*)0) ? ":" : "",
                 VAR_6 != ((void*)0) ? VAR_6 : "") == -1)
        VAR_4 = ((void*)0);

end:
    if (VAR_5 != ((void*)0))
        (*VAR_2)->ReleaseStringUTFChars(VAR_2, VAR_7, VAR_5);
    if (VAR_7 != ((void*)0))
        (*VAR_2)->DeleteLocalRef(VAR_2, VAR_7);
    if (VAR_6 != ((void*)0))
        (*VAR_2)->ReleaseStringUTFChars(VAR_2, VAR_8, VAR_6);
    if (VAR_8 != ((void*)0))
        (*VAR_2)->DeleteLocalRef(VAR_2, VAR_8);
    FUNC_3(VAR_3);
    return VAR_4;
}
