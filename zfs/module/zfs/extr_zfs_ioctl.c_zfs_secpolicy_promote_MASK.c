
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {char* zc_name; } ;
typedef TYPE_1__ zfs_cmd_t ;
typedef int nvlist_t ;
typedef int dsl_pool_t ;
struct TYPE_13__ {int dd_pool; } ;
typedef TYPE_2__ dsl_dir_t ;
struct TYPE_14__ {TYPE_2__* ds_dir; } ;
typedef TYPE_3__ dsl_dataset_t ;
typedef int cred_t ;
struct TYPE_15__ {int dd_origin_obj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int ,TYPE_3__**) ;
 int FUNC_1 (int ,int ,int ,TYPE_3__**) ;
 int FUNC_2 (TYPE_3__*,char*) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 TYPE_6__* FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (char*,int ,int **) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (char*,int ,int *) ;
 int FUNC_8 (char*,TYPE_3__*,int ,int *) ;

__attribute__((used)) static int
FUNC_9(zfs_cmd_t *VAR_4, nvlist_t *VAR_5, cred_t *VAR_6)
{
 dsl_pool_t *VAR_7;
 dsl_dataset_t *VAR_8;
 int VAR_9;

 VAR_9 = FUNC_7(VAR_4->zc_name,
     VAR_2, VAR_6);
 if (VAR_9 != 0)
  return (VAR_9);

 VAR_9 = FUNC_5(VAR_4->zc_name, VAR_0, &VAR_7);
 if (VAR_9 != 0)
  return (VAR_9);

 VAR_9 = FUNC_0(VAR_7, VAR_4->zc_name, VAR_0, &VAR_8);

 if (VAR_9 == 0) {
  char VAR_10[VAR_3];
  dsl_dataset_t *VAR_11 = ((void*)0);
  dsl_dir_t *VAR_12;
  VAR_12 = VAR_8->ds_dir;

  VAR_9 = FUNC_1(VAR_12->dd_pool,
      FUNC_4(VAR_12)->dd_origin_obj, VAR_0, &VAR_11);
  if (VAR_9 != 0) {
   FUNC_3(VAR_8, VAR_0);
   FUNC_6(VAR_7, VAR_0);
   return (VAR_9);
  }

  VAR_9 = FUNC_8(VAR_4->zc_name, VAR_8,
      VAR_1, VAR_6);

  FUNC_2(VAR_11, VAR_10);
  if (VAR_9 == 0) {
   VAR_9 = FUNC_8(VAR_10, VAR_11,
       VAR_2, VAR_6);
  }
  FUNC_3(VAR_8, VAR_0);
  FUNC_3(VAR_11, VAR_0);
 }
 FUNC_6(VAR_7, VAR_0);
 return (VAR_9);
}
