
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_keystore ;
typedef int * jstring ;
typedef int * jobject ;
struct TYPE_4__ {int getSecretKey; } ;
struct TYPE_5__ {TYPE_1__ SecretKeyEntry; int getEntry; int load; int getInstance; } ;
typedef int JNIEnv ;


 int * FUNC_0 (int *,int ,...) ;
 int * FUNC_1 (TYPE_2__,int ,int *) ;
 int FUNC_2 (int *,int ,int *) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int *) ;
 int * FUNC_5 () ;
 int * FUNC_6 (int *,int *,int *,int *) ;
 scalar_t__ FUNC_7 (int *,int *) ;
 TYPE_2__ VAR_0 ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_10(vlc_keystore *VAR_3)
{
    JNIEnv *VAR_4 = FUNC_5();
    if (VAR_4 == ((void*)0))
        return;

    if (FUNC_7(VAR_3, VAR_4) != VAR_1)
        return;

    jobject VAR_5 = ((void*)0), VAR_6 = ((void*)0), VAR_7 = ((void*)0);
    jstring VAR_8 = ((void*)0), VAR_9 = ((void*)0);

    VAR_8 = FUNC_9("LibVLCAndroid");
    if (FUNC_3())
        goto end;

    VAR_9 = FUNC_9("AndroidKeyStore");
    if (FUNC_3())
        goto end;

    VAR_5 = FUNC_1(VAR_0, VAR_0.getInstance, VAR_9);
    if (FUNC_3())
        goto end;

    FUNC_2(VAR_5, VAR_0.load, ((void*)0));
    if (FUNC_3())
        goto end;

    VAR_6 = FUNC_0(VAR_5, VAR_0.getEntry, VAR_8, ((void*)0));
    if (FUNC_3())
        goto end;
    if (VAR_6 != ((void*)0))
    {
        VAR_7 = FUNC_0(VAR_6, VAR_0.SecretKeyEntry.getSecretKey);
        if (FUNC_3())
            goto end;
    }
    else
    {
        VAR_7 = FUNC_6(VAR_3, VAR_4, VAR_8, VAR_9);
        if (VAR_7 == ((void*)0))
            goto end;
    }

    VAR_2 = FUNC_8(VAR_7);

end:
    if (VAR_8 != ((void*)0))
        FUNC_4(VAR_8);
    if (VAR_9 != ((void*)0))
        FUNC_4(VAR_9);
    if (VAR_5 != ((void*)0))
        FUNC_4(VAR_5);
    if (VAR_6 != ((void*)0))
        FUNC_4(VAR_6);
    if (VAR_7 != ((void*)0))
        FUNC_4(VAR_7);
}
