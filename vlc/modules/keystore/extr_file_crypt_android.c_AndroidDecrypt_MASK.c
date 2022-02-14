
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int vlc_keystore ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int * jobject ;
typedef int jbyte ;
struct TYPE_13__ {int init; int getInstance; } ;
struct TYPE_10__ {int DECRYPT_MODE; } ;
struct TYPE_12__ {TYPE_1__ Cipher; int VLC_CIPHER; } ;
struct TYPE_11__ {int (* SetByteArrayRegion ) (TYPE_2__**,int *,int ,int,int *) ;int * (* NewByteArray ) (TYPE_2__**,int) ;} ;
typedef TYPE_2__* JNIEnv ;


 int * FUNC_0 (TYPE_8__,int ,int ) ;
 int FUNC_1 (int *,int ,int ,int ,int *) ;
 scalar_t__ FUNC_2 () ;
 TYPE_8__ VAR_0 ;
 int FUNC_3 (int *) ;
 TYPE_2__** FUNC_4 () ;
 int VAR_1 ;
 int * FUNC_5 (int ,int *) ;
 size_t FUNC_6 (int *,TYPE_2__**,int *,int const*,size_t,int *,int ,int **) ;
 TYPE_5__ VAR_2 ;
 int FUNC_7 (int*,int const*,int) ;
 int VAR_3 ;
 int * FUNC_8 (TYPE_2__**,int) ;
 int FUNC_9 (TYPE_2__**,int *,int ,int,int *) ;

__attribute__((used)) static size_t
FUNC_10(vlc_keystore *VAR_4, void *VAR_5, const uint8_t *VAR_6,
               size_t VAR_7, uint8_t **VAR_8)
{
    (void) VAR_5;
    JNIEnv *VAR_9 = FUNC_4();
    if (VAR_9 == ((void*)0))
        return 0;

    jobject VAR_10 = ((void*)0), VAR_11 = ((void*)0), VAR_12 = ((void*)0);

    VAR_12 = FUNC_0(VAR_0, VAR_0.getInstance, VAR_2.VLC_CIPHER);
    if (FUNC_2())
        return 0;


    size_t VAR_13 = 0;
    uint32_t VAR_14;
    if (VAR_7 < sizeof(uint32_t))
        goto end;

    FUNC_7(&VAR_14, VAR_6, sizeof(uint32_t));
    if (VAR_14 == 0 || VAR_7 < (sizeof(uint32_t) + VAR_14))
        goto end;

    VAR_10 = (*VAR_9)->NewByteArray(VAR_9, VAR_14);
    if (FUNC_2())
        goto end;
    (*VAR_9)->SetByteArrayRegion(VAR_9, VAR_10, 0, VAR_14,
                                 (jbyte *)(VAR_6 + sizeof(uint32_t)) );

    VAR_11 = FUNC_5(VAR_1, VAR_10);
    if (FUNC_2())
        goto end;


    FUNC_1(VAR_12, VAR_0.init, VAR_2.Cipher.DECRYPT_MODE, VAR_3, VAR_11);
    if (FUNC_2())
        goto end;

    VAR_13 = FUNC_6(VAR_4, VAR_9, VAR_12,
                        VAR_6 + sizeof(uint32_t) + VAR_14,
                        VAR_7 - sizeof(uint32_t) - VAR_14,
                        ((void*)0), 0, VAR_8);

end:
    FUNC_3(VAR_12);
    if (VAR_10 != ((void*)0))
        FUNC_3(VAR_10);
    if (VAR_11 != ((void*)0))
        FUNC_3(VAR_11);
    return VAR_13;
}
