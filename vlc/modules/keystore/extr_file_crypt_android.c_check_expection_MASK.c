
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_9__ ;
typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int vlc_keystore ;
typedef int * jthrowable ;
typedef int * jstring ;
struct TYPE_13__ {int toString; } ;
struct TYPE_10__ {int * toString; } ;
struct TYPE_12__ {TYPE_1__ Object; } ;
struct TYPE_11__ {char* (* GetStringUTFChars ) (TYPE_2__**,int *,int *) ;int (* ReleaseStringUTFChars ) (TYPE_2__**,int *,char const*) ;int (* ExceptionClear ) (TYPE_2__**) ;int * (* ExceptionOccurred ) (TYPE_2__**) ;} ;
typedef TYPE_2__* JNIEnv ;


 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 TYPE_9__ VAR_0 ;
 TYPE_7__ VAR_1 ;
 int FUNC_2 (int *,char*,...) ;
 int * FUNC_3 (TYPE_2__**) ;
 int FUNC_4 (TYPE_2__**) ;
 char* FUNC_5 (TYPE_2__**,int *,int *) ;
 int FUNC_6 (TYPE_2__**,int *,char const*) ;

__attribute__((used)) static bool
FUNC_7(vlc_keystore *VAR_2, JNIEnv *VAR_3)
{
    jthrowable VAR_4 = (*VAR_3)->ExceptionOccurred(VAR_3);
    if (VAR_4 != ((void*)0))
    {
        (*VAR_3)->ExceptionClear(VAR_3);
        if (VAR_1.Object.toString != ((void*)0))
        {
            const char *VAR_5 = ((void*)0);
            jstring VAR_6 = ((void*)0);

            VAR_6 = (jstring) FUNC_0(VAR_4, VAR_0.toString);
            if (VAR_6 != ((void*)0))
                VAR_5 = (*VAR_3)->GetStringUTFChars(VAR_3, VAR_6, ((void*)0));
            if (VAR_5 != ((void*)0))
            {
                FUNC_2(VAR_2, "%s", VAR_5);
                (*VAR_3)->ReleaseStringUTFChars(VAR_3, VAR_6, VAR_5);
            }
            FUNC_1(VAR_6);
        }
        else
            FUNC_2(VAR_2, "unknown exception");
        FUNC_1(VAR_4);
        return 1;
    }
    return 0;
}
