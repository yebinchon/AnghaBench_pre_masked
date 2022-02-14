
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_10__ ;


typedef int vlc_keystore ;
typedef int jstring ;
typedef int * jobjectArray ;
typedef int * jobject ;
typedef int * jclass ;
struct TYPE_19__ {int generateKey; int init; int getInstance; } ;
struct TYPE_18__ {int build; int setEncryptionPaddings; int setBlockModes; int setKeySize; } ;
struct TYPE_15__ {int PURPOSE_ENCRYPT; int PURPOSE_DECRYPT; int KEY_ALGORITHM_AES; int ENCRYPTION_PADDING_PKCS7; int BLOCK_MODE_CBC; } ;
struct TYPE_17__ {TYPE_1__ KeyProperties; } ;
struct TYPE_16__ {int (* SetObjectArrayElement ) (TYPE_2__**,int *,int ,int ) ;int * (* NewObjectArray ) (TYPE_2__**,int,int *,int *) ;int * (* FindClass ) (TYPE_2__**,char*) ;} ;
struct TYPE_14__ {TYPE_8__ Builder; } ;
typedef TYPE_2__* JNIEnv ;


 int * FUNC_0 (int *,int ,...) ;
 int * FUNC_1 (TYPE_9__,int ,int ,int ) ;
 int FUNC_2 (int *,int ,int *) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,TYPE_2__**) ;
 TYPE_10__ VAR_0 ;
 TYPE_9__ VAR_1 ;
 int * FUNC_6 (TYPE_8__,int ,int) ;
 scalar_t__ VAR_2 ;
 TYPE_7__ VAR_3 ;
 int * FUNC_7 (TYPE_2__**,char*) ;
 int * FUNC_8 (TYPE_2__**,int,int *,int *) ;
 int FUNC_9 (TYPE_2__**,int *,int ,int ) ;
 int FUNC_10 (TYPE_2__**,int *,int ,int ) ;

__attribute__((used)) static jobject
FUNC_11(vlc_keystore *VAR_4, JNIEnv *VAR_5, jstring VAR_6,
            jstring VAR_7)
{
    if (FUNC_5(VAR_4, VAR_5) != VAR_2)
        return ((void*)0);

    jobject VAR_8 = ((void*)0), VAR_9 = ((void*)0), VAR_10 = ((void*)0),
            VAR_11 = ((void*)0);
    jclass VAR_12 = ((void*)0);
    jobjectArray VAR_13 = ((void*)0);

    VAR_9 = FUNC_6(VAR_0.Builder, VAR_6,
                          VAR_3.KeyProperties.PURPOSE_ENCRYPT |
                          VAR_3.KeyProperties.PURPOSE_DECRYPT);
    FUNC_0(VAR_9, VAR_0.Builder.setKeySize, 256);

    VAR_12 = (*VAR_5)->FindClass(VAR_5, "java/lang/String");
    if (FUNC_3())
        goto end;

    VAR_13 = (*VAR_5)->NewObjectArray(VAR_5, 1, VAR_12, ((void*)0));
    if (FUNC_3())
        goto end;

    (*VAR_5)->SetObjectArrayElement(VAR_5, VAR_13, 0,
                                    VAR_3.KeyProperties.BLOCK_MODE_CBC);
    FUNC_0(VAR_9, VAR_0.Builder.setBlockModes, VAR_13);

    (*VAR_5)->SetObjectArrayElement(VAR_5, VAR_13, 0,
                                    VAR_3.KeyProperties.ENCRYPTION_PADDING_PKCS7);
    FUNC_0(VAR_9, VAR_0.Builder.setEncryptionPaddings, VAR_13);
    VAR_10 = FUNC_0(VAR_9, VAR_0.Builder.build);
    if (FUNC_3())
        goto end;

    VAR_11 = FUNC_1(VAR_1, VAR_1.getInstance,
                             VAR_3.KeyProperties.KEY_ALGORITHM_AES,
                             VAR_7);
    if (FUNC_3())
        goto end;

    FUNC_2(VAR_11, VAR_1.init, VAR_10);
    if (FUNC_3())
        goto end;

    VAR_8 = FUNC_0(VAR_11, VAR_1.generateKey);
    FUNC_3();

end:
    if (VAR_9 != ((void*)0))
        FUNC_4(VAR_9);
    if (VAR_12 != ((void*)0))
        FUNC_4(VAR_12);
    if (VAR_13 != ((void*)0))
        FUNC_4(VAR_13);
    if (VAR_10 != ((void*)0))
        FUNC_4(VAR_10);
    if (VAR_11 != ((void*)0))
        FUNC_4(VAR_11);

    return VAR_8;
}
