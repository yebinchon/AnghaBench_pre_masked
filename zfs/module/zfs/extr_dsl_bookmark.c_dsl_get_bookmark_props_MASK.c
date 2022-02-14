
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int member_0; } ;
typedef TYPE_1__ zfs_bookmark_phys_t ;
typedef int nvlist_t ;
typedef int dsl_pool_t ;
typedef int dsl_dataset_t ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*,int *,int *) ;
 int FUNC_1 (int *,char const*,TYPE_1__*) ;
 int FUNC_2 (int *,char const*,int ,int **) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (char const*,int ,int **) ;
 int FUNC_5 (int *,int ) ;

int
FUNC_6(const char *VAR_1, const char *VAR_2, nvlist_t *VAR_3)
{
 dsl_pool_t *VAR_4;
 dsl_dataset_t *VAR_5;
 zfs_bookmark_phys_t VAR_6 = { 0 };
 int VAR_7;

 VAR_7 = FUNC_4(VAR_1, VAR_0, &VAR_4);
 if (VAR_7 != 0)
  return (VAR_7);
 VAR_7 = FUNC_2(VAR_4, VAR_1, VAR_0, &VAR_5);
 if (VAR_7 != 0) {
  FUNC_5(VAR_4, VAR_0);
  return (VAR_7);
 }

 VAR_7 = FUNC_1(VAR_5, VAR_2, &VAR_6);
 if (VAR_7 != 0)
  goto out;

 FUNC_0(VAR_4, &VAR_6, ((void*)0), VAR_3);
out:
 FUNC_3(VAR_5, VAR_0);
 FUNC_5(VAR_4, VAR_0);
 return (VAR_7);
}
