
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ zfs_prop_t ;
typedef scalar_t__ uint64_t ;
typedef int enforce_res_t ;
struct TYPE_5__ {int dd_pool; } ;
typedef TYPE_1__ dsl_dir_t ;
typedef int dsl_dataset_t ;
typedef int cred_t ;
struct TYPE_6__ {scalar_t__ dd_head_dataset_obj; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,scalar_t__,int ,int **) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int *,int ,int *) ;
 TYPE_3__* FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int *,char*,int,int,scalar_t__*,int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (scalar_t__) ;

__attribute__((used)) static enforce_res_t
FUNC_10(dsl_dir_t *VAR_7, zfs_prop_t VAR_8, cred_t *VAR_9)
{
 enforce_res_t VAR_10 = VAR_1;
 uint64_t VAR_11;
 dsl_dataset_t *VAR_12;
 uint64_t VAR_13;

 FUNC_0(VAR_8 == VAR_5 ||
     VAR_8 == VAR_6);
 if ((VAR_11 = FUNC_5(VAR_7)->dd_head_dataset_obj) == 0)
  return (VAR_1);

 FUNC_0(FUNC_6(VAR_7->dd_pool));

 if (FUNC_2(VAR_7->dd_pool, VAR_11, VAR_3, &VAR_12) != 0)
  return (VAR_1);

 if (FUNC_7(VAR_12, "zoned", 8, 1, &VAR_13, ((void*)0)) || VAR_13) {

  VAR_10 = VAR_1;
 } else {
  if (FUNC_4(VAR_12, FUNC_9(VAR_8), VAR_9) == 0)
   VAR_10 = VAR_0;
 }

 FUNC_3(VAR_12, VAR_3);
 return (VAR_10);
}
