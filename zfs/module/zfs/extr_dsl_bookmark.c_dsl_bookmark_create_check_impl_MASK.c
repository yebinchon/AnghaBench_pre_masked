
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int member_0; } ;
typedef TYPE_1__ zfs_bookmark_phys_t ;
typedef int dsl_pool_t ;
struct TYPE_11__ {int ds_is_snapshot; } ;
typedef TYPE_2__ dsl_dataset_t ;
typedef int dmu_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *,char const*,TYPE_2__**,int ,char**) ;
 int FUNC_3 (TYPE_2__*,char*,TYPE_1__*) ;
 int FUNC_4 (TYPE_2__*,TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_2__*,int ) ;

__attribute__((used)) static int
FUNC_6(dsl_dataset_t *VAR_4, const char *VAR_5,
    dmu_tx_t *VAR_6)
{
 dsl_pool_t *VAR_7 = FUNC_1(VAR_6);
 dsl_dataset_t *VAR_8;
 char *VAR_9;
 int VAR_10;
 zfs_bookmark_phys_t VAR_11 = { 0 };

 if (!VAR_4->ds_is_snapshot)
  return (FUNC_0(VAR_1));

 VAR_10 = FUNC_2(VAR_7, VAR_5,
     &VAR_8, VAR_3, &VAR_9);
 if (VAR_10 != 0)
  return (VAR_10);

 if (!FUNC_4(VAR_8, VAR_4, 0)) {
  FUNC_5(VAR_8, VAR_3);
  return (FUNC_0(VAR_1));
 }

 VAR_10 = FUNC_3(VAR_8, VAR_9,
     &VAR_11);
 FUNC_5(VAR_8, VAR_3);
 if (VAR_10 == 0)
  return (FUNC_0(VAR_0));
 if (VAR_10 == VAR_2)
  return (0);
 return (VAR_10);
}
