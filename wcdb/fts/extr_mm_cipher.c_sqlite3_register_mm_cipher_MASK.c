
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite3 ;
struct TYPE_5__ {int ref_count; int key; int cnv; } ;
typedef TYPE_1__ mm_cipher_context_t ;
typedef int UErrorCode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,unsigned char const*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int *,char*,int,int ,TYPE_1__*,int ,int *,int *,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int) ;
 int FUNC_4 (int,int ,int *) ;

int FUNC_5(sqlite3 *VAR_10, const unsigned char *VAR_11)
{
    UErrorCode VAR_12 = VAR_5;
    int VAR_13;
    mm_cipher_context_t *VAR_14;


    if (!&FUNC_4)
        return VAR_3;

    VAR_14 = FUNC_3(sizeof(mm_cipher_context_t));
    if (!VAR_14)
        return VAR_2;

    VAR_13 = VAR_1;

    VAR_14->cnv = FUNC_4(1214, VAR_4, &VAR_12);
    if (!VAR_14->cnv)
        goto error;

    FUNC_0(VAR_14->key, VAR_11, 16);
    VAR_14->ref_count = 3;

    VAR_13 =
        FUNC_1(VAR_10, "mmenc", 1, VAR_0, VAR_14, VAR_9,
                                   ((void*)0), ((void*)0), VAR_7);
    if (VAR_13 != VAR_3)
        goto error;

    VAR_13 =
        FUNC_1(VAR_10, "mmdec", 1, VAR_0, VAR_14, VAR_8,
                                   ((void*)0), ((void*)0), VAR_7);
    if (VAR_13 != VAR_3)
        goto error;

    VAR_13 = FUNC_1(VAR_10, "mm_cipher_key", 1, VAR_0,
                                            VAR_14, VAR_6, ((void*)0), ((void*)0),
                                            VAR_7);
    if (VAR_13 != VAR_3)
        goto error;

    return VAR_3;

error:
    if (VAR_14)
        FUNC_2(VAR_14);
    return VAR_13;
}
