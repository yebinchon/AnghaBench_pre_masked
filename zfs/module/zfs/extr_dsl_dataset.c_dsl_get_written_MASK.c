
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint64_t ;
typedef int dsl_pool_t ;
struct TYPE_11__ {TYPE_1__* ds_dir; } ;
typedef TYPE_2__ dsl_dataset_t ;
struct TYPE_12__ {int ds_prev_snap_obj; } ;
struct TYPE_10__ {int * dd_pool; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,TYPE_2__**) ;
 TYPE_7__* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*,TYPE_2__*,int *,int *,int *) ;

int
FUNC_4(dsl_dataset_t *VAR_1, uint64_t *VAR_2)
{
 dsl_pool_t *VAR_3 = VAR_1->ds_dir->dd_pool;
 dsl_dataset_t *VAR_4;
 int VAR_5 = FUNC_0(VAR_3,
     FUNC_1(VAR_1)->ds_prev_snap_obj, VAR_0, &VAR_4);
 if (VAR_5 == 0) {
  uint64_t VAR_6, VAR_7;
  VAR_5 = FUNC_3(VAR_4, VAR_1, VAR_2,
      &VAR_6, &VAR_7);
  FUNC_2(VAR_4, VAR_0);
 }
 return (VAR_5);
}
