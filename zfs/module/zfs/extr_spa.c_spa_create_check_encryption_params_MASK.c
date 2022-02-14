
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ cp_crypt; } ;
typedef TYPE_1__ dsl_crypto_params_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,TYPE_1__*,int *) ;

__attribute__((used)) static int
FUNC_2(dsl_crypto_params_t *VAR_3,
    boolean_t VAR_4)
{
 if (VAR_3->cp_crypt != VAR_2 &&
     VAR_3->cp_crypt != VAR_1 &&
     !VAR_4)
  return (FUNC_0(VAR_0));

 return (FUNC_1(((void*)0), VAR_3, ((void*)0)));
}
