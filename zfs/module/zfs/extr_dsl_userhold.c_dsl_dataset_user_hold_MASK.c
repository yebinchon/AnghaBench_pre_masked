
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int nvpair_t ;
typedef int nvlist_t ;
typedef int minor_t ;
struct TYPE_3__ {int dduha_chkholds; int dduha_minor; int * dduha_errlist; int * dduha_holds; } ;
typedef TYPE_1__ dsl_dataset_user_hold_arg_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ,TYPE_1__*,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int ,int ) ;
 int * FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;

int
FUNC_7(nvlist_t *VAR_4, minor_t VAR_5, nvlist_t *VAR_6)
{
 dsl_dataset_user_hold_arg_t VAR_7;
 nvpair_t *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_5(VAR_4, ((void*)0));
 if (VAR_8 == ((void*)0))
  return (0);

 VAR_7.dduha_holds = VAR_4;

 FUNC_0(0 == FUNC_4(&VAR_7.dduha_chkholds, 0, VAR_0));
 VAR_7.dduha_errlist = VAR_6;
 VAR_7.dduha_minor = VAR_5;

 VAR_9 = FUNC_1(FUNC_6(VAR_8), VAR_2,
     VAR_3, &VAR_7,
     FUNC_3(VAR_4), VAR_1);
 FUNC_2(VAR_7.dduha_chkholds);

 return (VAR_9);
}
