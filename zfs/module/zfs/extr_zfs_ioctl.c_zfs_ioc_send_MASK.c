
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ zc_guid; int zc_flags; scalar_t__ zc_obj; int zc_cookie; int zc_fromobj; int zc_sendobj; int zc_name; int zc_objset_type; } ;
typedef TYPE_1__ zfs_cmd_t ;
typedef int offset_t ;
struct TYPE_14__ {int f_offset; int f_vnode; } ;
typedef TYPE_2__ file_t ;
typedef int dsl_pool_t ;
struct TYPE_15__ {int ds_dir; } ;
typedef TYPE_3__ dsl_dataset_t ;
struct TYPE_16__ {int dso_dryrun; int dso_arg; int dso_outfunc; int member_0; } ;
typedef TYPE_4__ dmu_send_outparams_t ;
typedef int boolean_t ;
struct TYPE_17__ {int dd_origin_obj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,int *,int *) ;
 int FUNC_2 (TYPE_3__*,TYPE_3__*,int *,int,int *) ;
 int FUNC_3 (int ,int ,int ,int,int,int,int,int ,int *,TYPE_4__*) ;
 int FUNC_4 (int *,int ,int ,TYPE_3__**) ;
 int FUNC_5 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 TYPE_7__* FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int **) ;
 int FUNC_9 (int *,int ) ;
 int VAR_3 ;
 TYPE_2__* FUNC_10 (int ) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static int
FUNC_12(zfs_cmd_t *VAR_4)
{
 int VAR_5;
 offset_t VAR_6;
 boolean_t VAR_7 = (VAR_4->zc_guid != 0);
 boolean_t VAR_8 = (VAR_4->zc_flags & 0x1);
 boolean_t VAR_9 = (VAR_4->zc_flags & 0x2);
 boolean_t VAR_10 = (VAR_4->zc_flags & 0x4);
 boolean_t VAR_11 = (VAR_4->zc_flags & 0x8);

 if (VAR_4->zc_obj != 0) {
  dsl_pool_t *VAR_12;
  dsl_dataset_t *VAR_13;

  VAR_5 = FUNC_8(VAR_4->zc_name, VAR_2, &VAR_12);
  if (VAR_5 != 0)
   return (VAR_5);

  VAR_5 = FUNC_4(VAR_12, VAR_4->zc_sendobj, VAR_2, &VAR_13);
  if (VAR_5 != 0) {
   FUNC_9(VAR_12, VAR_2);
   return (VAR_5);
  }

  if (FUNC_6(VAR_13->ds_dir))
   VAR_4->zc_fromobj =
       FUNC_7(VAR_13->ds_dir)->dd_origin_obj;
  FUNC_5(VAR_13, VAR_2);
  FUNC_9(VAR_12, VAR_2);
 }

 if (VAR_7) {
  dsl_pool_t *VAR_14;
  dsl_dataset_t *VAR_15;
  dsl_dataset_t *VAR_16 = ((void*)0);

  VAR_5 = FUNC_8(VAR_4->zc_name, VAR_2, &VAR_14);
  if (VAR_5 != 0)
   return (VAR_5);

  VAR_5 = FUNC_4(VAR_14, VAR_4->zc_sendobj,
      VAR_2, &VAR_15);
  if (VAR_5 != 0) {
   FUNC_9(VAR_14, VAR_2);
   return (VAR_5);
  }

  if (VAR_4->zc_fromobj != 0) {
   VAR_5 = FUNC_4(VAR_14, VAR_4->zc_fromobj,
       VAR_2, &VAR_16);
   if (VAR_5 != 0) {
    FUNC_5(VAR_15, VAR_2);
    FUNC_9(VAR_14, VAR_2);
    return (VAR_5);
   }
  }

  VAR_5 = FUNC_2(VAR_15, VAR_16, ((void*)0),
      VAR_10 || VAR_11, &VAR_4->zc_objset_type);

  if (VAR_16 != ((void*)0))
   FUNC_5(VAR_16, VAR_2);
  FUNC_5(VAR_15, VAR_2);
  FUNC_9(VAR_14, VAR_2);
 } else {
  file_t *VAR_17 = FUNC_10(VAR_4->zc_cookie);
  if (VAR_17 == ((void*)0))
   return (FUNC_0(VAR_1));

  VAR_6 = VAR_17->f_offset;
  dmu_send_outparams_t VAR_18 = {0};
  VAR_18.dso_outfunc = VAR_3;
  VAR_18.dso_arg = VAR_17->f_vnode;
  VAR_18.dso_dryrun = VAR_0;
  VAR_5 = FUNC_3(VAR_4->zc_name, VAR_4->zc_sendobj,
      VAR_4->zc_fromobj, VAR_8, VAR_9, VAR_10, VAR_11,
      VAR_4->zc_cookie, &VAR_6, &VAR_18);

  if (FUNC_1(VAR_17->f_vnode, VAR_17->f_offset, &VAR_6, ((void*)0)) == 0)
   VAR_17->f_offset = VAR_6;
  FUNC_11(VAR_4->zc_cookie);
 }
 return (VAR_5);
}
