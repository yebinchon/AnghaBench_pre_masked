
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ dck_wkey; int dck_holds; int dck_key; } ;
typedef TYPE_1__ dsl_crypto_key_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(dsl_crypto_key_t *VAR_0)
{
 FUNC_0(FUNC_3(&VAR_0->dck_holds) == 0);


 FUNC_5(&VAR_0->dck_key);


 FUNC_4(&VAR_0->dck_holds);
 if (VAR_0->dck_wkey)
  FUNC_1(VAR_0->dck_wkey, VAR_0);


 FUNC_2(VAR_0, sizeof (dsl_crypto_key_t));
}
