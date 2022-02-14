
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int dsl_dir_t ;
struct TYPE_4__ {int dda_name; } ;
typedef TYPE_1__ dsl_deleg_arg_t ;
typedef int dmu_tx_t ;
struct TYPE_5__ {int dp_spa; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 TYPE_2__* FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,int ,int ,int **,int *) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(void *VAR_3, dmu_tx_t *VAR_4)
{
 dsl_deleg_arg_t *VAR_5 = VAR_3;
 dsl_dir_t *VAR_6;
 int VAR_7;

 if (FUNC_4(FUNC_1(VAR_4)->dp_spa) <
     VAR_2) {
  return (FUNC_0(VAR_0));
 }

 VAR_7 = FUNC_2(FUNC_1(VAR_4), VAR_5->dda_name, VAR_1, &VAR_6, ((void*)0));
 if (VAR_7 == 0)
  FUNC_3(VAR_6, VAR_1);
 return (VAR_7);
}
