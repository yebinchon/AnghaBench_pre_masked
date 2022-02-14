
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_9__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int vlc_keystore ;
typedef int uint8_t ;
typedef scalar_t__ jsize ;
typedef int * jobject ;
typedef int jbyte ;
typedef int * jarray ;
struct TYPE_14__ {int getIV; int init; int getInstance; } ;
struct TYPE_11__ {int ENCRYPT_MODE; } ;
struct TYPE_13__ {TYPE_1__ Cipher; int VLC_CIPHER; } ;
struct TYPE_12__ {scalar_t__ (* GetArrayLength ) (TYPE_2__**,int *) ;int (* ReleaseByteArrayElements ) (TYPE_2__**,int *,int *,int ) ;int * (* GetByteArrayElements ) (TYPE_2__**,int *,int ) ;} ;
typedef TYPE_2__* JNIEnv ;


 int FUNC_0 (int *,int ) ;
 int * FUNC_1 (TYPE_9__,int ,int ) ;
 int FUNC_2 (int *,int ,int ,int ,int *) ;
 scalar_t__ FUNC_3 () ;
 TYPE_9__ VAR_0 ;
 int FUNC_4 (int *) ;
 TYPE_2__** FUNC_5 () ;
 size_t FUNC_6 (int *,TYPE_2__**,int *,int const*,size_t,int const*,scalar_t__,int **) ;
 TYPE_6__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_7 (TYPE_2__**,int *) ;
 int * FUNC_8 (TYPE_2__**,int *,int ) ;
 int FUNC_9 (TYPE_2__**,int *,int *,int ) ;

__attribute__((used)) static size_t
FUNC_10(vlc_keystore *VAR_3, void *VAR_4, const uint8_t *VAR_5,
               size_t VAR_6, uint8_t **VAR_7)
{
    (void) VAR_4;
    JNIEnv *VAR_8 = FUNC_5();
    if (VAR_8 == ((void*)0))
        return 0;

    jobject VAR_9 = ((void*)0);
    VAR_9 = FUNC_1(VAR_0, VAR_0.getInstance, VAR_1.VLC_CIPHER);
    if (FUNC_3())
        return 0;

    size_t VAR_10 = 0;
    FUNC_2(VAR_9, VAR_0.init, VAR_1.Cipher.ENCRYPT_MODE, VAR_2, ((void*)0));
    if (FUNC_3())
        goto end;




    jarray VAR_11 = (jarray) FUNC_0(VAR_9, VAR_0.getIV);
    if (VAR_11 == ((void*)0))
        goto end;

    jsize VAR_12 = (*VAR_8)->GetArrayLength(VAR_8, VAR_11);
    if (VAR_12 == 0)
        goto end;
    jbyte *VAR_13 = (*VAR_8)->GetByteArrayElements(VAR_8, VAR_11, 0);

    VAR_10 = FUNC_6(VAR_3, VAR_8, VAR_9, VAR_5, VAR_6,
                        (const uint8_t *)VAR_13, VAR_12, VAR_7);

    (*VAR_8)->ReleaseByteArrayElements(VAR_8, VAR_11, VAR_13, 0);
    FUNC_4(VAR_11);

end:

    FUNC_4(VAR_9);
    return VAR_10;
}
