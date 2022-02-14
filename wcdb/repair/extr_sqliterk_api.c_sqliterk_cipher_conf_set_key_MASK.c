
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int key_len; void const* key; } ;
typedef TYPE_1__ sqliterk_cipher_conf ;



void FUNC_0(sqliterk_cipher_conf *VAR_0, const void* VAR_1, int VAR_2)
{
    if (VAR_0 != ((void*)0)) {
        VAR_0->key = VAR_1;
        VAR_0->key_len = VAR_2;
    }
}
