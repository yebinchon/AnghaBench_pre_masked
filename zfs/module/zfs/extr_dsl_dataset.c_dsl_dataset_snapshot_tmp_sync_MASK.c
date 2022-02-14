
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int dsl_pool_t ;
struct TYPE_6__ {int ds_prev; } ;
typedef TYPE_1__ dsl_dataset_t ;
struct TYPE_7__ {int ddsta_cleanup_minor; int ddsta_htag; int ddsta_snapname; int ddsta_fsname; } ;
typedef TYPE_2__ dsl_dataset_snapshot_tmp_arg_t ;
typedef int dmu_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ,TYPE_1__**) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,int ,int *) ;
 int FUNC_5 (int ,int ,int ,int ,int *) ;
 int FUNC_6 (int ,int ,int *) ;
 int FUNC_7 () ;

__attribute__((used)) static void
FUNC_8(void *VAR_2, dmu_tx_t *VAR_3)
{
 dsl_dataset_snapshot_tmp_arg_t *VAR_4 = VAR_2;
 dsl_pool_t *VAR_5 = FUNC_1(VAR_3);
 dsl_dataset_t *VAR_6 = ((void*)0);

 FUNC_0(FUNC_2(VAR_5, VAR_4->ddsta_fsname, VAR_1, &VAR_6));

 FUNC_4(VAR_6, VAR_4->ddsta_snapname, VAR_3);
 FUNC_5(VAR_6->ds_prev, VAR_4->ddsta_htag,
     VAR_4->ddsta_cleanup_minor, FUNC_7(), VAR_3);
 FUNC_6(VAR_6->ds_prev, VAR_0, VAR_3);

 FUNC_3(VAR_6, VAR_1);
}
