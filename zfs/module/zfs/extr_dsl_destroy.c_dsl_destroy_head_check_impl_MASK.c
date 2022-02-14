
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int objset_t ;
struct TYPE_11__ {scalar_t__ ds_object; TYPE_8__* ds_prev; TYPE_4__* ds_dir; int ds_longholds; scalar_t__ ds_is_snapshot; } ;
typedef TYPE_2__ dsl_dataset_t ;
struct TYPE_15__ {scalar_t__ ds_userrefs; int ds_longholds; } ;
struct TYPE_14__ {scalar_t__ ds_next_snap_obj; int ds_num_children; } ;
struct TYPE_13__ {TYPE_1__* dd_pool; } ;
struct TYPE_12__ {int dd_child_dir_zapobj; } ;
struct TYPE_10__ {int * dp_meta_objset; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_8__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 TYPE_7__* FUNC_3 (TYPE_8__*) ;
 scalar_t__ FUNC_4 (TYPE_4__*) ;
 TYPE_3__* FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (int *,int ,scalar_t__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int
FUNC_9(dsl_dataset_t *VAR_3, int VAR_4)
{
 int VAR_5;
 uint64_t VAR_6;
 objset_t *VAR_7;

 FUNC_0(!VAR_3->ds_is_snapshot);
 if (VAR_3->ds_is_snapshot)
  return (FUNC_2(VAR_2));

 if (FUNC_7(&VAR_3->ds_longholds) != VAR_4)
  return (FUNC_2(VAR_0));

 VAR_7 = VAR_3->ds_dir->dd_pool->dp_meta_objset;






 if (VAR_3->ds_prev != ((void*)0) &&
     FUNC_3(VAR_3->ds_prev)->ds_next_snap_obj == VAR_3->ds_object)
  return (FUNC_2(VAR_0));




 VAR_5 = FUNC_6(VAR_7,
     FUNC_5(VAR_3->ds_dir)->dd_child_dir_zapobj, &VAR_6);
 if (VAR_5 != 0)
  return (VAR_5);
 if (VAR_6 != 0)
  return (FUNC_2(VAR_1));

 if (FUNC_4(VAR_3->ds_dir) && FUNC_1(VAR_3->ds_prev) &&
     FUNC_3(VAR_3->ds_prev)->ds_num_children == 2 &&
     VAR_3->ds_prev->ds_userrefs == 0) {

  if (!FUNC_8(&VAR_3->ds_prev->ds_longholds))
   return (FUNC_2(VAR_0));
 }
 return (0);
}
