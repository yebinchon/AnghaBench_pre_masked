
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint64_t ;
typedef int objset_t ;
struct TYPE_11__ {int dp_spa; int dp_config_rwlock; int * dp_meta_objset; } ;
typedef TYPE_1__ dsl_pool_t ;
struct TYPE_12__ {scalar_t__ dd_crypto_obj; int dd_myname; struct TYPE_12__* dd_parent; int dd_object; } ;
typedef TYPE_2__ dsl_dir_t ;
typedef int dmu_tx_t ;
typedef size_t dd_used_t ;
struct TYPE_13__ {scalar_t__ dd_child_dir_zapobj; scalar_t__ dd_props_zapobj; scalar_t__ dd_clones; int dd_deleg_zapobj; int * dd_used_breakdown; int dd_reserved; int dd_used_bytes; int dd_head_dataset_obj; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int *) ;
 TYPE_1__* FUNC_5 (int *) ;
 int FUNC_6 (scalar_t__,int *) ;
 int FUNC_7 (int *,int ,int *) ;
 int FUNC_8 (TYPE_1__*,int ,int *,int ,TYPE_2__**) ;
 TYPE_6__* FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*,int ) ;
 int FUNC_11 (TYPE_2__*,int ,int *) ;
 int FUNC_12 (TYPE_2__*,int,int ,int *) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int *,scalar_t__,int *) ;
 int FUNC_15 (int *,scalar_t__,int ,int *) ;

__attribute__((used)) static void
FUNC_16(uint64_t VAR_3, dmu_tx_t *VAR_4)
{
 dsl_dir_t *VAR_5;
 dsl_pool_t *VAR_6 = FUNC_5(VAR_4);
 objset_t *VAR_7 = VAR_6->dp_meta_objset;
 dd_used_t VAR_8;

 FUNC_0(FUNC_2(&FUNC_5(VAR_4)->dp_config_rwlock));

 FUNC_3(FUNC_8(VAR_6, VAR_3, ((void*)0), VAR_2, &VAR_5));

 FUNC_1(FUNC_9(VAR_5)->dd_head_dataset_obj);


 if (VAR_5->dd_parent != ((void*)0))
  FUNC_12(VAR_5->dd_parent, -1,
      VAR_0, VAR_4);





 FUNC_11(VAR_5, 0, VAR_4);

 FUNC_1(FUNC_9(VAR_5)->dd_used_bytes);
 FUNC_1(FUNC_9(VAR_5)->dd_reserved);
 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++)
  FUNC_1(FUNC_9(VAR_5)->dd_used_breakdown[VAR_8]);

 if (VAR_5->dd_crypto_obj != 0) {
  FUNC_6(VAR_5->dd_crypto_obj, VAR_4);
  (void) FUNC_13(VAR_6->dp_spa, VAR_5->dd_object);
 }

 FUNC_3(FUNC_14(VAR_7, FUNC_9(VAR_5)->dd_child_dir_zapobj, VAR_4));
 FUNC_3(FUNC_14(VAR_7, FUNC_9(VAR_5)->dd_props_zapobj, VAR_4));
 if (FUNC_9(VAR_5)->dd_clones != 0)
  FUNC_3(FUNC_14(VAR_7, FUNC_9(VAR_5)->dd_clones, VAR_4));
 FUNC_3(FUNC_7(VAR_7, FUNC_9(VAR_5)->dd_deleg_zapobj, VAR_4));
 FUNC_3(FUNC_15(VAR_7,
     FUNC_9(VAR_5->dd_parent)->dd_child_dir_zapobj,
     VAR_5->dd_myname, VAR_4));

 FUNC_10(VAR_5, VAR_2);
 FUNC_4(VAR_7, VAR_3, VAR_4);
}
