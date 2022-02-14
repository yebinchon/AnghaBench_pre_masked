
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int spa_log_state; } ;
typedef TYPE_1__ spa_t ;
struct TYPE_9__ {int dp_root_dir_obj; } ;
typedef TYPE_2__ dsl_pool_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (TYPE_2__*,int ,int ,int *,int ) ;
 TYPE_2__* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int const) ;
 int VAR_2 ;

__attribute__((used)) static boolean_t
FUNC_3(spa_t *VAR_3)
{
 boolean_t VAR_4 = VAR_0;
 dsl_pool_t *VAR_5 = FUNC_1(VAR_3);

 switch (VAR_3->spa_log_state) {
 default:
  break;
 case 129:

 case 128:
  VAR_4 = (FUNC_0(VAR_5, VAR_5->dp_root_dir_obj,
      VAR_2, ((void*)0), VAR_1) != 0);
  if (VAR_4)
   FUNC_2(VAR_3, 129);
  break;
 }
 return (VAR_4);
}
