
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int zl_os; } ;
typedef TYPE_1__ zilog_t ;
typedef int uint64_t ;
struct TYPE_11__ {int dp_meta_objset; int dp_dirty_zilogs; } ;
typedef TYPE_2__ dsl_pool_t ;
struct TYPE_12__ {int ds_dbuf; } ;
typedef TYPE_3__ dsl_dataset_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 TYPE_3__* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 TYPE_1__* FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,TYPE_1__*,int ) ;
 int FUNC_6 (TYPE_1__*,int ) ;

void
FUNC_7(dsl_pool_t *VAR_0, uint64_t VAR_1)
{
 zilog_t *VAR_2;

 while ((VAR_2 = FUNC_4(&VAR_0->dp_dirty_zilogs, VAR_1))) {
  dsl_dataset_t *VAR_3 = FUNC_2(VAR_2->zl_os);






  FUNC_6(VAR_2, VAR_1);
  (void) FUNC_5(&VAR_0->dp_dirty_zilogs, VAR_2, VAR_1);
  FUNC_0(!FUNC_3(VAR_2->zl_os, VAR_1));
  FUNC_1(VAR_3->ds_dbuf, VAR_2);
 }
 FUNC_0(!FUNC_3(VAR_0->dp_meta_objset, VAR_1));
}
