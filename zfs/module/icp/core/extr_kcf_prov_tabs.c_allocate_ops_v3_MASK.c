
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * co_nostore_key_ops; } ;
typedef TYPE_1__ crypto_ops_t ;
typedef int crypto_nostore_key_ops_t ;


 int VAR_0 ;
 int * FUNC_0 (int,int ) ;

__attribute__((used)) static void
FUNC_1(crypto_ops_t *VAR_1, crypto_ops_t *VAR_2)
{
 if (VAR_1->co_nostore_key_ops != ((void*)0))
  VAR_2->co_nostore_key_ops =
      FUNC_0(sizeof (crypto_nostore_key_ops_t), VAR_0);
}
