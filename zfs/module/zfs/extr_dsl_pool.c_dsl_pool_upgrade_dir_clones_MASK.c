
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_6__ {int dp_root_dir_obj; int dp_meta_objset; int dp_free_bpobj; int dp_free_dir; int dp_root_dir; } ;
typedef TYPE_1__ dsl_pool_t ;
typedef int dmu_tx_t ;
typedef int bpobj_phys_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ,int,int *) ;
 int FUNC_4 (TYPE_1__*,int ,int ,int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*,int ,int ,int *) ;
 int FUNC_7 (TYPE_1__*,int ,int *) ;
 int VAR_8 ;
 int FUNC_8 (int ,int ,int ,int,int,int *,int *) ;

void
FUNC_9(dsl_pool_t *VAR_9, dmu_tx_t *VAR_10)
{
 uint64_t VAR_11;

 FUNC_0(FUNC_5(VAR_10));

 (void) FUNC_6(VAR_9, VAR_9->dp_root_dir, VAR_6, VAR_10);
 FUNC_1(FUNC_7(VAR_9,
     VAR_6, &VAR_9->dp_free_dir));






 VAR_11 = FUNC_3(VAR_9->dp_meta_objset, VAR_0,
     VAR_7, VAR_1, sizeof (bpobj_phys_t), VAR_10);
 FUNC_1(FUNC_8(VAR_9->dp_meta_objset, VAR_2,
     VAR_3, sizeof (uint64_t), 1, &VAR_11, VAR_10));
 FUNC_1(FUNC_2(&VAR_9->dp_free_bpobj, VAR_9->dp_meta_objset, VAR_11));

 FUNC_1(FUNC_4(VAR_9, VAR_9->dp_root_dir_obj,
     VAR_8, VAR_10, VAR_4 | VAR_5));
}
