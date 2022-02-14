
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int dsl_scan_t ;
struct TYPE_10__ {int * dp_scan; } ;
typedef TYPE_1__ dsl_pool_t ;
struct TYPE_11__ {scalar_t__ ds_object; } ;
typedef TYPE_2__ dsl_dataset_t ;
struct TYPE_12__ {scalar_t__ ds_prev_snap_obj; scalar_t__ ds_next_snap_obj; int ds_prev_snap_txg; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,scalar_t__,int ,TYPE_2__**) ;
 TYPE_6__* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (int *,scalar_t__,int ) ;

__attribute__((used)) static int
FUNC_4(dsl_pool_t *VAR_1, dsl_dataset_t *VAR_2, void *VAR_3)
{
 dsl_dataset_t *VAR_4;
 int VAR_5;
 dsl_scan_t *VAR_6 = VAR_1->dp_scan;

 VAR_5 = FUNC_0(VAR_1, VAR_2->ds_object, VAR_0, &VAR_4);
 if (VAR_5)
  return (VAR_5);

 while (FUNC_1(VAR_4)->ds_prev_snap_obj != 0) {
  dsl_dataset_t *VAR_7;
  VAR_5 = FUNC_0(VAR_1,
      FUNC_1(VAR_4)->ds_prev_snap_obj, VAR_0, &VAR_7);
  if (VAR_5) {
   FUNC_2(VAR_4, VAR_0);
   return (VAR_5);
  }




  if (FUNC_1(VAR_7)->ds_next_snap_obj != VAR_4->ds_object) {
   FUNC_2(VAR_4, VAR_0);
   FUNC_2(VAR_7, VAR_0);
   return (0);
  }
  FUNC_2(VAR_4, VAR_0);
  VAR_4 = VAR_7;
 }

 FUNC_3(VAR_6, VAR_4->ds_object,
     FUNC_1(VAR_4)->ds_prev_snap_txg);
 FUNC_2(VAR_4, VAR_0);
 return (0);
}
