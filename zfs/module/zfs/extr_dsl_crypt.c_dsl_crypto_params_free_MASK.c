
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * cp_wkey; int * cp_keylocation; } ;
typedef TYPE_1__ dsl_crypto_params_t ;
typedef scalar_t__ boolean_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int *) ;

void
FUNC_3(dsl_crypto_params_t *VAR_0, boolean_t VAR_1)
{
 if (VAR_0 == ((void*)0))
  return;

 if (VAR_0->cp_keylocation != ((void*)0))
  FUNC_2(VAR_0->cp_keylocation);
 if (VAR_1 && VAR_0->cp_wkey != ((void*)0))
  FUNC_0(VAR_0->cp_wkey);

 FUNC_1(VAR_0, sizeof (dsl_crypto_params_t));
}
