
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_15__ ;


typedef int * jstring ;
typedef int * jobject ;
struct TYPE_19__ {char* (* GetStringUTFChars ) (TYPE_3__**,int *,int ) ;int (* DeleteLocalRef ) (TYPE_3__**,int *) ;int (* ReleaseStringUTFChars ) (TYPE_3__**,int *,char const*) ;int * (* CallObjectMethod ) (TYPE_3__**,int *,int ) ;int * (* CallStaticObjectMethod ) (TYPE_3__**,int ,int ,int *) ;int (* ExceptionClear ) (TYPE_3__**) ;scalar_t__ (* ExceptionCheck ) (TYPE_3__**) ;int * (* NewStringUTF ) (TYPE_3__**,char const*) ;} ;
struct TYPE_18__ {int getAbsolutePath; } ;
struct TYPE_17__ {int getExternalStoragePublicDirectory; int clazz; } ;
struct TYPE_16__ {TYPE_2__ File; TYPE_1__ Environment; } ;
typedef TYPE_3__* JNIEnv ;


 TYPE_15__ VAR_0 ;
 TYPE_3__** FUNC_0 (int*) ;
 int FUNC_1 (int) ;
 char* FUNC_2 (char const*) ;
 int * FUNC_3 (TYPE_3__**,char const*) ;
 int FUNC_4 (TYPE_3__**,int *) ;
 scalar_t__ FUNC_5 (TYPE_3__**) ;
 int FUNC_6 (TYPE_3__**) ;
 int * FUNC_7 (TYPE_3__**,int ,int ,int *) ;
 int FUNC_8 (TYPE_3__**,int *) ;
 int * FUNC_9 (TYPE_3__**,int *,int ) ;
 int FUNC_10 (TYPE_3__**,int *) ;
 char* FUNC_11 (TYPE_3__**,int *,int ) ;
 int FUNC_12 (TYPE_3__**,int *,char const*) ;

__attribute__((used)) static char *FUNC_13(const char *VAR_1)
{
    JNIEnv *VAR_2;
    bool VAR_3;
    char *VAR_4 = ((void*)0);

    VAR_2 = FUNC_0(&VAR_3);
    if (VAR_2 == ((void*)0))
        return ((void*)0);

    jstring VAR_5= (*VAR_2)->NewStringUTF(VAR_2, VAR_1);
    if ((*VAR_2)->ExceptionCheck(VAR_2))
    {
        (*VAR_2)->ExceptionClear(VAR_2);
        VAR_5 = ((void*)0);
    }
    if (VAR_5 == ((void*)0))
        goto error;

    jobject VAR_6 = (*VAR_2)->CallStaticObjectMethod(VAR_2,
                        VAR_0.Environment.clazz,
                        VAR_0.Environment.getExternalStoragePublicDirectory,
                        VAR_5);
    (*VAR_2)->DeleteLocalRef(VAR_2, VAR_5);
    if (VAR_6 == ((void*)0))
        goto error;

    jstring VAR_7 = (*VAR_2)->CallObjectMethod(VAR_2, VAR_6,
                                             VAR_0.File.getAbsolutePath);
    (*VAR_2)->DeleteLocalRef(VAR_2, VAR_6);

    const char *VAR_8 = (*VAR_2)->GetStringUTFChars(VAR_2, VAR_7, 0);
    if (VAR_8 == ((void*)0))
        goto error;
    VAR_4 = FUNC_2(VAR_8);
    (*VAR_2)->ReleaseStringUTFChars(VAR_2, VAR_7, VAR_8);
    (*VAR_2)->DeleteLocalRef(VAR_2, VAR_7);

error:
    FUNC_1(VAR_3);
    return VAR_4;
}
