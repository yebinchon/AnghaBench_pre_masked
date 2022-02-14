
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint64_t ;
struct drr_begin {int drr_toname; int drr_flags; int drr_versioninfo; int drr_fromguid; int drr_toguid; int drr_type; int drr_creation_time; int drr_magic; } ;
struct TYPE_10__ {int zbm_guid; } ;
struct dmu_send_params {TYPE_3__* to_ds; scalar_t__ is_clone; TYPE_1__ ancestor_zb; } ;
typedef int objset_t ;
struct TYPE_12__ {int ds_is_snapshot; } ;
typedef TYPE_3__ dsl_dataset_t ;
struct TYPE_11__ {struct drr_begin drr_begin; } ;
struct TYPE_13__ {TYPE_2__ drr_u; int drr_type; } ;
typedef TYPE_4__ dmu_replay_record_t ;
struct TYPE_14__ {int ds_flags; int ds_guid; int ds_creation_time; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 TYPE_6__* FUNC_4 (TYPE_3__*) ;
 TYPE_4__* FUNC_5 (int,int ) ;
 int FUNC_6 (int ,char*,int) ;
 scalar_t__ VAR_9 ;

__attribute__((used)) static dmu_replay_record_t *
FUNC_7(struct dmu_send_params *VAR_10, objset_t *VAR_11,
    uint64_t VAR_12)
{
 dmu_replay_record_t *VAR_13 = FUNC_5(sizeof (dmu_replay_record_t),
     VAR_8);
 VAR_13->drr_type = VAR_2;

 struct drr_begin *VAR_14 = &VAR_13->drr_u.drr_begin;
 dsl_dataset_t *VAR_15 = VAR_10->to_ds;

 VAR_14->drr_magic = VAR_0;
 VAR_14->drr_creation_time = FUNC_4(VAR_15)->ds_creation_time;
 VAR_14->drr_type = FUNC_2(VAR_11);
 VAR_14->drr_toguid = FUNC_4(VAR_15)->ds_guid;
 VAR_14->drr_fromguid = VAR_10->ancestor_zb.zbm_guid;

 FUNC_1(VAR_14->drr_versioninfo, VAR_1);
 FUNC_0(VAR_14->drr_versioninfo, VAR_12);

 if (VAR_10->is_clone)
  VAR_14->drr_flags |= VAR_4;
 if (FUNC_4(VAR_10->to_ds)->ds_flags & VAR_7)
  VAR_14->drr_flags |= VAR_3;
 if (VAR_9)
  VAR_14->drr_flags |= VAR_5;
 VAR_13->drr_u.drr_begin.drr_flags |= VAR_6;

 FUNC_3(VAR_15, VAR_14->drr_toname);
 if (!VAR_15->ds_is_snapshot) {
  (void) FUNC_6(VAR_14->drr_toname, "@--head--",
      sizeof (VAR_14->drr_toname));
 }
 return (VAR_13);
}
