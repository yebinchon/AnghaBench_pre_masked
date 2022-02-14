
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* os_dsl_dataset; } ;
typedef TYPE_2__ objset_t ;
typedef int boolean_t ;
struct TYPE_4__ {scalar_t__ ds_owner; } ;


 scalar_t__ VAR_0 ;

boolean_t
FUNC_0(objset_t *VAR_1)
{
 return (VAR_1->os_dsl_dataset != ((void*)0) &&
     VAR_1->os_dsl_dataset->ds_owner == VAR_0);
}
