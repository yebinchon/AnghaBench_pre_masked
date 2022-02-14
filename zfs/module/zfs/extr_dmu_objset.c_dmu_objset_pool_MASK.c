
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int os_spa; TYPE_3__* os_dsl_dataset; } ;
typedef TYPE_2__ objset_t ;
typedef int dsl_pool_t ;
struct TYPE_7__ {TYPE_1__* ds_dir; } ;
typedef TYPE_3__ dsl_dataset_t ;
struct TYPE_5__ {int * dd_pool; } ;


 int * FUNC_0 (int ) ;

dsl_pool_t *
FUNC_1(objset_t *VAR_0)
{
 dsl_dataset_t *VAR_1;

 if ((VAR_1 = VAR_0->os_dsl_dataset) != ((void*)0) && VAR_1->ds_dir)
  return (VAR_1->ds_dir->dd_pool);
 else
  return (FUNC_0(VAR_0->os_spa));
}
