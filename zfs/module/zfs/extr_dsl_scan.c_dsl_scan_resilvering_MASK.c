
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_4__* dp_scan; } ;
typedef TYPE_2__ dsl_pool_t ;
typedef int boolean_t ;
struct TYPE_5__ {scalar_t__ scn_func; } ;
struct TYPE_7__ {TYPE_1__ scn_phys; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_4__*) ;

boolean_t
FUNC_1(dsl_pool_t *VAR_1)
{
 return (FUNC_0(VAR_1->dp_scan) &&
     VAR_1->dp_scan->scn_phys.scn_func == VAR_0);
}
