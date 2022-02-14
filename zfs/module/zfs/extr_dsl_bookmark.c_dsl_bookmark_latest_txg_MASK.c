
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_9__ {int ds_bookmarks; TYPE_1__* ds_dir; } ;
typedef TYPE_3__ dsl_dataset_t ;
struct TYPE_8__ {int zbm_creation_txg; } ;
struct TYPE_10__ {TYPE_2__ dbn_phys; } ;
typedef TYPE_4__ dsl_bookmark_node_t ;
struct TYPE_7__ {int dd_pool; } ;


 int FUNC_0 (int ) ;
 TYPE_4__* FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

uint64_t
FUNC_3(dsl_dataset_t *VAR_0)
{
 FUNC_0(FUNC_2(VAR_0->ds_dir->dd_pool));
 dsl_bookmark_node_t *VAR_1 = FUNC_1(&VAR_0->ds_bookmarks);
 if (VAR_1 == ((void*)0))
  return (0);
 return (VAR_1->dbn_phys.zbm_creation_txg);
}
