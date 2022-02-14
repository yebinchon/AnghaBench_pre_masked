
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ dd_crypto_obj; TYPE_1__* dd_pool; } ;
typedef TYPE_2__ dsl_dir_t ;
struct TYPE_8__ {int ds_object; TYPE_2__* ds_dir; } ;
typedef TYPE_3__ dsl_dataset_t ;
struct TYPE_6__ {int dp_spa; } ;


 int FUNC_0 (int ,int ,TYPE_3__*) ;

void
FUNC_1(dsl_dataset_t *VAR_0)
{
 dsl_dir_t *VAR_1 = VAR_0->ds_dir;

 if (VAR_1 == ((void*)0) || VAR_1->dd_crypto_obj == 0)
  return;

 (void) FUNC_0(VAR_1->dd_pool->dp_spa,
     VAR_0->ds_object, VAR_0);
}
