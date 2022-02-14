
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_9__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int vlc_keystore ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int jsize ;
typedef int jobject ;
typedef int * jbyteArray ;
typedef int const jbyte ;
struct TYPE_11__ {int doFinal; } ;
struct TYPE_10__ {int (* GetArrayLength ) (TYPE_1__**,int *) ;int* (* GetByteArrayElements ) (TYPE_1__**,int *,int ) ;int (* ReleaseByteArrayElements ) (TYPE_1__**,int *,int const*,int ) ;int (* SetByteArrayRegion ) (TYPE_1__**,int *,int ,size_t,int const*) ;int * (* NewByteArray ) (TYPE_1__**,size_t) ;} ;
typedef TYPE_1__* JNIEnv ;


 scalar_t__ FUNC_0 (int ,int ,int *) ;
 scalar_t__ FUNC_1 () ;
 TYPE_9__ VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int*) ;
 int* FUNC_4 (int) ;
 int FUNC_5 (int*,int const*,int) ;
 int * FUNC_6 (TYPE_1__**,size_t) ;
 int FUNC_7 (TYPE_1__**,int *,int ,size_t,int const*) ;
 int FUNC_8 (TYPE_1__**,int *) ;
 int* FUNC_9 (TYPE_1__**,int *,int ) ;
 int FUNC_10 (TYPE_1__**,int *,int const*,int ) ;
 int FUNC_11 (TYPE_1__**,int *,int const*,int ) ;

__attribute__((used)) static size_t
FUNC_12(vlc_keystore *VAR_1, JNIEnv *VAR_2, jobject VAR_3,
        const uint8_t *VAR_4, size_t VAR_5,
        const uint8_t *VAR_6, uint32_t VAR_7, uint8_t **VAR_8)
{
    size_t VAR_9 = 0;
    uint8_t *VAR_10;
    jbyteArray VAR_11 = ((void*)0), VAR_12 = ((void*)0);

    VAR_11 = (*VAR_2)->NewByteArray(VAR_2, VAR_5);
    if (FUNC_1())
        goto end;
    (*VAR_2)->SetByteArrayRegion(VAR_2, VAR_11, 0, VAR_5, (jbyte *)VAR_4);

    VAR_12 = (jbyteArray) FUNC_0(VAR_3, VAR_0.doFinal, VAR_11);
    if (FUNC_1())
        goto end;

    if (VAR_12 == ((void*)0))
        goto end;

    jsize VAR_13 = (*VAR_2)->GetArrayLength(VAR_2, VAR_12);

    if (VAR_13 == 0)
        goto end;

    jbyte *VAR_14 = (*VAR_2)->GetByteArrayElements(VAR_2, VAR_12, 0);

    VAR_10 = VAR_7 > 0 ? FUNC_4(VAR_13 + VAR_7 + sizeof(uint32_t))
                         : FUNC_4(VAR_13);
    if (VAR_10 == ((void*)0))
    {
        (*VAR_2)->ReleaseByteArrayElements(VAR_2, VAR_12, VAR_14, 0);
        FUNC_3(VAR_10);
        goto end;
    }

    if (VAR_7 > 0)
    {

        FUNC_5(VAR_10, &VAR_7, sizeof(uint32_t));
        FUNC_5(VAR_10 + sizeof(uint32_t), VAR_6, VAR_7);
        FUNC_5(VAR_10 + sizeof(uint32_t) + VAR_7, VAR_14, VAR_13);
        VAR_9 = VAR_13 + VAR_7 + sizeof(uint32_t);
    }
    else
    {
        FUNC_5(VAR_10, VAR_14, VAR_13);
        VAR_9 = VAR_13;
    }
    (*VAR_2)->ReleaseByteArrayElements(VAR_2, VAR_12, VAR_14, 0);

    *VAR_8 = VAR_10;

end:
    if (VAR_11 != ((void*)0))
        FUNC_2(VAR_11);
    if (VAR_12 != ((void*)0))
        FUNC_2(VAR_12);
    return VAR_9;
}
