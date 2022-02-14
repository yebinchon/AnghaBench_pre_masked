
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct send_thread_arg {int resume; } ;
struct send_merge_thread_arg {int bookmark_before; } ;
struct redact_list_thread_arg {int resume; } ;
struct TYPE_5__ {int zbm_redaction_obj; } ;
struct dmu_send_params {int resumeobj; int resumeoff; TYPE_1__ ancestor_zb; TYPE_2__* to_ds; } ;
typedef int redaction_list_t ;
typedef int objset_t ;
typedef int nvlist_t ;
struct TYPE_6__ {int ds_object; } ;
typedef TYPE_2__ dsl_dataset_t ;
struct TYPE_7__ {int doi_data_block_size; } ;
typedef TYPE_3__ dmu_object_info_t ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int,int,int ,int) ;
 int FUNC_1 (int *,int,TYPE_3__*) ;
 int FUNC_2 (int *,int ,int) ;
 scalar_t__ FUNC_3 (int *,int ) ;

__attribute__((used)) static int
FUNC_4(struct dmu_send_params *VAR_4,
    struct send_thread_arg *VAR_5, struct redact_list_thread_arg *VAR_6,
    struct redact_list_thread_arg *VAR_7,
    struct send_merge_thread_arg *VAR_8, boolean_t VAR_9, objset_t *VAR_10,
    redaction_list_t *VAR_11, nvlist_t *VAR_12)
{
 dsl_dataset_t *VAR_13 = VAR_4->to_ds;
 int VAR_14 = 0;

 uint64_t VAR_15 = 0;
 uint64_t VAR_16 = 0;
 if (VAR_9) {
  VAR_15 = VAR_4->resumeobj;
  dmu_object_info_t VAR_17;
  VAR_14 = FUNC_1(VAR_10, VAR_15, &VAR_17);
  if (VAR_14 != 0)
   return (VAR_14);

  VAR_16 = VAR_4->resumeoff / VAR_17.doi_data_block_size;
 }




 VAR_8->bookmark_before = VAR_3;
 if (VAR_11 != ((void*)0)) {
  FUNC_0(&VAR_7->resume, VAR_13->ds_object, VAR_15, 0, VAR_16);
 }

 FUNC_0(&VAR_5->resume, VAR_13->ds_object, VAR_15, 0, VAR_16);
 if (FUNC_3(VAR_12, VAR_0)) {
  uint64_t VAR_18 = VAR_4->ancestor_zb.zbm_redaction_obj;
  FUNC_0(&VAR_6->resume, VAR_18, VAR_15, 0, VAR_16);
 }
 if (VAR_9) {
  FUNC_2(VAR_12, VAR_1, VAR_4->resumeobj);
  FUNC_2(VAR_12, VAR_2, VAR_4->resumeoff);
 }
 return (0);
}
