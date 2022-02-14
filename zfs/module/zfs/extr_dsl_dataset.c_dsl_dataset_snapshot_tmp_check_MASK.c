
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int dp_spa; } ;
typedef TYPE_1__ dsl_pool_t ;
typedef int dsl_dataset_t ;
struct TYPE_6__ {int ddsta_htag; int ddsta_snapname; int ddsta_fsname; } ;
typedef TYPE_2__ dsl_dataset_snapshot_tmp_arg_t ;
typedef int dmu_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_4 ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int **) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ,int *,int ,int ,int *) ;
 int FUNC_5 (int *,int ,int ,int *) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(void *VAR_5, dmu_tx_t *VAR_6)
{
 dsl_dataset_snapshot_tmp_arg_t *VAR_7 = VAR_5;
 dsl_pool_t *VAR_8 = FUNC_1(VAR_6);
 dsl_dataset_t *VAR_9;
 int VAR_10;

 VAR_10 = FUNC_2(VAR_8, VAR_7->ddsta_fsname, VAR_3, &VAR_9);
 if (VAR_10 != 0)
  return (VAR_10);


 VAR_10 = FUNC_4(VAR_9, VAR_7->ddsta_snapname,
     VAR_6, VAR_0, 0, ((void*)0));
 if (VAR_10 != 0) {
  FUNC_3(VAR_9, VAR_3);
  return (VAR_10);
 }

 if (FUNC_6(VAR_8->dp_spa) < VAR_4) {
  FUNC_3(VAR_9, VAR_3);
  return (FUNC_0(VAR_2));
 }
 VAR_10 = FUNC_5(((void*)0), VAR_7->ddsta_htag,
     VAR_1, VAR_6);
 if (VAR_10 != 0) {
  FUNC_3(VAR_9, VAR_3);
  return (VAR_10);
 }

 FUNC_3(VAR_9, VAR_3);
 return (0);
}
