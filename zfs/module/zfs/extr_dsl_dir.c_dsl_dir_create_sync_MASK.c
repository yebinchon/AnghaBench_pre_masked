
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint64_t ;
typedef int objset_t ;
struct TYPE_13__ {int dp_spa; int * dp_meta_objset; } ;
typedef TYPE_1__ dsl_pool_t ;
struct TYPE_14__ {int dd_object; } ;
typedef TYPE_2__ dsl_dir_t ;
struct TYPE_15__ {int dd_flags; void* dd_child_dir_zapobj; void* dd_props_zapobj; int dd_parent_obj; int dd_creation_time; } ;
typedef TYPE_3__ dsl_dir_phys_t ;
typedef int dmu_tx_t ;
struct TYPE_16__ {TYPE_3__* db_data; } ;
typedef TYPE_4__ dmu_buf_t ;
struct TYPE_17__ {int dd_child_dir_zapobj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char const* VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ,TYPE_4__**) ;
 int FUNC_2 (TYPE_4__*,int ) ;
 int FUNC_3 (TYPE_4__*,int *) ;
 int FUNC_4 (int *,int ,int ,int ,int,int *) ;
 TYPE_6__* FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,int,int ,int *) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int *,int ,char const*,int,int,int *,int *) ;
 void* FUNC_10 (int *,int ,int ,int ,int *) ;

uint64_t
FUNC_11(dsl_pool_t *VAR_10, dsl_dir_t *VAR_11, const char *VAR_12,
    dmu_tx_t *VAR_13)
{
 objset_t *VAR_14 = VAR_10->dp_meta_objset;
 uint64_t VAR_15;
 dsl_dir_phys_t *VAR_16;
 dmu_buf_t *VAR_17;

 VAR_15 = FUNC_4(VAR_14, VAR_2, 0,
     VAR_2, sizeof (dsl_dir_phys_t), VAR_13);
 if (VAR_11) {
  FUNC_0(FUNC_9(VAR_14, FUNC_5(VAR_11)->dd_child_dir_zapobj,
      VAR_12, sizeof (uint64_t), 1, &VAR_15, VAR_13));
 } else {

  FUNC_0(FUNC_9(VAR_14, VAR_6,
      VAR_7, sizeof (uint64_t), 1, &VAR_15, VAR_13));
 }
 FUNC_0(FUNC_1(VAR_14, VAR_15, VAR_8, &VAR_17));
 FUNC_3(VAR_17, VAR_13);
 VAR_16 = VAR_17->db_data;

 VAR_16->dd_creation_time = FUNC_7();
 if (VAR_11) {
  VAR_16->dd_parent_obj = VAR_11->dd_object;


  FUNC_6(VAR_11, 1, VAR_0, VAR_13);
 }
 VAR_16->dd_props_zapobj = FUNC_10(VAR_14,
     VAR_4, VAR_5, 0, VAR_13);
 VAR_16->dd_child_dir_zapobj = FUNC_10(VAR_14,
     VAR_3, VAR_5, 0, VAR_13);
 if (FUNC_8(VAR_10->dp_spa) >= VAR_9)
  VAR_16->dd_flags |= VAR_1;

 FUNC_2(VAR_17, VAR_8);

 return (VAR_15);
}
