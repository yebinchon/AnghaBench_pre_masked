
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_13__ {scalar_t__ ds_is_snapshot; TYPE_4__* ds_dir; } ;
typedef TYPE_5__ dsl_dataset_t ;
struct TYPE_14__ {int ds_creation_txg; } ;
struct TYPE_12__ {TYPE_3__* dd_pool; } ;
struct TYPE_11__ {TYPE_2__* dp_scan; } ;
struct TYPE_9__ {int scn_max_txg; } ;
struct TYPE_10__ {TYPE_1__ scn_phys; } ;


 int FUNC_0 (int ,int ) ;
 TYPE_7__* FUNC_1 (TYPE_5__*) ;

__attribute__((used)) static uint64_t
FUNC_2(dsl_dataset_t *VAR_0)
{
 uint64_t VAR_1 = VAR_0->ds_dir->dd_pool->dp_scan->scn_phys.scn_max_txg;
 if (VAR_0->ds_is_snapshot)
  return (FUNC_0(VAR_1, FUNC_1(VAR_0)->ds_creation_txg));
 return (VAR_1);
}
