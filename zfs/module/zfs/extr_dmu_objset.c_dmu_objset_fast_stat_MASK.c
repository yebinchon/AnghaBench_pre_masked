
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ os_dsl_dataset; TYPE_1__* os_phys; } ;
typedef TYPE_2__ objset_t ;
struct TYPE_9__ {int dds_type; } ;
typedef TYPE_3__ dmu_objset_stats_t ;
struct TYPE_7__ {int os_type; } ;


 int FUNC_0 (scalar_t__,TYPE_3__*) ;

void
FUNC_1(objset_t *VAR_0, dmu_objset_stats_t *VAR_1)
{
 VAR_1->dds_type = VAR_0->os_phys->os_type;
 if (VAR_0->os_dsl_dataset)
  FUNC_0(VAR_0->os_dsl_dataset, VAR_1);
}
