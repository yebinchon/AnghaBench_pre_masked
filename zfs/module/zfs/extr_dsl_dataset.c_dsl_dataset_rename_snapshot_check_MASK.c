
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int dsl_pool_t ;
struct TYPE_12__ {TYPE_1__* ds_dir; } ;
typedef TYPE_2__ dsl_dataset_t ;
struct TYPE_13__ {scalar_t__ ddrsa_recursive; int ddrsa_fsname; } ;
typedef TYPE_3__ dsl_dataset_rename_snapshot_arg_t ;
typedef int dmu_tx_t ;
struct TYPE_11__ {int dd_object; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int (*) (int *,TYPE_2__*,TYPE_3__*),TYPE_3__*,int ) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ,TYPE_2__**) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (int *,TYPE_2__*,TYPE_3__*) ;

__attribute__((used)) static int
FUNC_5(void *VAR_2, dmu_tx_t *VAR_3)
{
 dsl_dataset_rename_snapshot_arg_t *VAR_4 = VAR_2;
 dsl_pool_t *VAR_5 = FUNC_1(VAR_3);
 dsl_dataset_t *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_2(VAR_5, VAR_4->ddrsa_fsname, VAR_1, &VAR_6);
 if (VAR_7 != 0)
  return (VAR_7);

 if (VAR_4->ddrsa_recursive) {
  VAR_7 = FUNC_0(VAR_5, VAR_6->ds_dir->dd_object,
      FUNC_4, VAR_4,
      VAR_0);
 } else {
  VAR_7 = FUNC_4(VAR_5, VAR_6, VAR_4);
 }
 FUNC_3(VAR_6, VAR_1);
 return (VAR_7);
}
