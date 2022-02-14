
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_value ;
typedef int sqlite3_context ;
struct TYPE_2__ {int key; } ;
typedef TYPE_1__ mm_cipher_context_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(sqlite3_context *VAR_2, int VAR_3, sqlite3_value **VAR_4)
{
    mm_cipher_context_t *VAR_5;


    if (VAR_3 != 1)
        goto error_misuse;
    if (FUNC_6(VAR_4[0]) != VAR_0)
        goto error_misuse;
    if (FUNC_5(VAR_4[0]) != 16)
        goto error_misuse;

    VAR_5 = (mm_cipher_context_t *) FUNC_3(VAR_2);
    FUNC_0(VAR_5->key, FUNC_4(VAR_4[0]), 16);

    FUNC_2(VAR_2);
    return;

error_misuse:
    FUNC_1(VAR_2, VAR_1);
    return;
}
