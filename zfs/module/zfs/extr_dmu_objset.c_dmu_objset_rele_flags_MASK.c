
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int os_dsl_dataset; } ;
typedef TYPE_1__ objset_t ;
typedef int dsl_pool_t ;
typedef int ds_hold_flags_t ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int * FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ,void*) ;
 int FUNC_2 (int *,void*) ;

void
FUNC_3(objset_t *VAR_1, boolean_t VAR_2, void *VAR_3)
{
 ds_hold_flags_t VAR_4 = (VAR_2) ? VAR_0 : 0;

 dsl_pool_t *VAR_5 = FUNC_0(VAR_1);
 FUNC_1(VAR_1->os_dsl_dataset, VAR_4, VAR_3);
 FUNC_2(VAR_5, VAR_3);
}
