
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ scn_state; scalar_t__ scn_func; } ;
typedef TYPE_2__ dsl_scan_phys_t ;
struct TYPE_7__ {TYPE_1__* dp_scan; } ;
typedef TYPE_3__ dsl_pool_t ;
typedef int boolean_t ;
struct TYPE_5__ {TYPE_2__ scn_phys; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

boolean_t
FUNC_0(const dsl_pool_t *VAR_2)
{
 dsl_scan_phys_t *VAR_3 = &VAR_2->dp_scan->scn_phys;

 return (VAR_3->scn_state == VAR_0 &&
     VAR_3->scn_func == VAR_1);
}
