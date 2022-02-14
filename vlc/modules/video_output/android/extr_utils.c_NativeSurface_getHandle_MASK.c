
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_1__ ;


typedef int jobject ;
typedef int * jfieldID ;
typedef int jclass ;
struct TYPE_14__ {int (* DeleteLocalRef ) (TYPE_1__**,int ) ;scalar_t__ (* GetIntField ) (TYPE_1__**,int ,int *) ;int (* ExceptionClear ) (TYPE_1__**) ;scalar_t__ (* ExceptionCheck ) (TYPE_1__**) ;int * (* GetFieldID ) (TYPE_1__**,int ,char*,char*) ;int (* GetObjectClass ) (TYPE_1__**,int ) ;} ;
typedef TYPE_1__* JNIEnv ;


 int FUNC_0 (TYPE_1__**,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__**,int ,int *) ;
 int FUNC_2 (TYPE_1__**,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__**) ;
 int FUNC_4 (TYPE_1__**) ;
 int * FUNC_5 (TYPE_1__**,int ,char*,char*) ;
 scalar_t__ FUNC_6 (TYPE_1__**) ;
 int FUNC_7 (TYPE_1__**) ;
 int * FUNC_8 (TYPE_1__**,int ,char*,char*) ;
 scalar_t__ FUNC_9 (TYPE_1__**) ;
 int FUNC_10 (TYPE_1__**) ;

__attribute__((used)) static void *
FUNC_11(JNIEnv *VAR_0, jobject VAR_1)
{
    jclass VAR_2;
    jfieldID VAR_3;
    intptr_t VAR_4 = 0;

    VAR_2 = (*VAR_0)->GetObjectClass(VAR_0, VAR_1);
    if ((*VAR_0)->ExceptionCheck(VAR_0))
    {
        (*VAR_0)->ExceptionClear(VAR_0);
        return ((void*)0);
    }
    VAR_3 = (*VAR_0)->GetFieldID(VAR_0, VAR_2, "mSurface", "I");
    if (VAR_3 == ((void*)0))
    {
        if ((*VAR_0)->ExceptionCheck(VAR_0))
            (*VAR_0)->ExceptionClear(VAR_0);
        VAR_3 = (*VAR_0)->GetFieldID(VAR_0, VAR_2, "mNativeSurface", "I");
        if (VAR_3 == ((void*)0))
        {
            if ((*VAR_0)->ExceptionCheck(VAR_0))
                (*VAR_0)->ExceptionClear(VAR_0);
        }
    }
    if (VAR_3 != ((void*)0))
        VAR_4 = (intptr_t)(*VAR_0)->GetIntField(VAR_0, VAR_1, VAR_3);
    (*VAR_0)->DeleteLocalRef(VAR_0, VAR_2);

    return (void *)VAR_4;
}
