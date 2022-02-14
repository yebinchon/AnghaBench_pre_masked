
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int objset_t ;
typedef int dsl_pool_t ;
struct TYPE_9__ {int dd_pool; } ;
typedef TYPE_1__ dsl_dir_t ;
typedef int dsl_dataset_t ;
typedef int dmu_tx_t ;
struct TYPE_10__ {int doca_cred; int doca_dcp; int doca_name; } ;
typedef TYPE_2__ dmu_objset_create_arg_t ;
struct TYPE_11__ {int dd_head_dataset_obj; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int ,int *) ;
 int FUNC_3 (int *,int **) ;
 scalar_t__ FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int ,int ,int ,int **) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ,int ,TYPE_1__**,char const**) ;
 TYPE_5__* FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*,int ) ;
 int FUNC_11 (TYPE_1__*,int,int ,int *,int ) ;
 int * FUNC_12 (int ,char) ;
 scalar_t__ FUNC_13 (int ) ;

__attribute__((used)) static int
FUNC_14(void *VAR_8, dmu_tx_t *VAR_9)
{
 dmu_objset_create_arg_t *VAR_10 = VAR_8;
 dsl_pool_t *VAR_11 = FUNC_5(VAR_9);
 dsl_dir_t *VAR_12;
 dsl_dataset_t *VAR_13;
 objset_t *VAR_14;
 const char *VAR_15;
 int VAR_16;

 if (FUNC_12(VAR_10->doca_name, '@') != ((void*)0))
  return (FUNC_0(VAR_2));

 if (FUNC_13(VAR_10->doca_name) >= VAR_6)
  return (FUNC_0(VAR_3));

 if (FUNC_1(VAR_10->doca_name) != 0)
  return (FUNC_0(VAR_3));

 VAR_16 = FUNC_8(VAR_11, VAR_10->doca_name, VAR_4, &VAR_12, &VAR_15);
 if (VAR_16 != 0)
  return (VAR_16);
 if (VAR_15 == ((void*)0)) {
  FUNC_10(VAR_12, VAR_4);
  return (FUNC_0(VAR_1));
 }

 VAR_16 = FUNC_2(VAR_12, VAR_10->doca_dcp, ((void*)0));
 if (VAR_16 != 0) {
  FUNC_10(VAR_12, VAR_4);
  return (VAR_16);
 }

 VAR_16 = FUNC_11(VAR_12, 1, VAR_7, ((void*)0),
     VAR_10->doca_cred);
 if (VAR_16 != 0) {
  FUNC_10(VAR_12, VAR_4);
  return (VAR_16);
 }


 VAR_16 = FUNC_6(VAR_12->dd_pool,
     FUNC_9(VAR_12)->dd_head_dataset_obj, VAR_4, &VAR_13);
 if (VAR_16 != 0) {
  FUNC_10(VAR_12, VAR_4);
  return (VAR_16);
 }
 VAR_16 = FUNC_3(VAR_13, &VAR_14);
 if (VAR_16 != 0) {
  FUNC_7(VAR_13, VAR_4);
  FUNC_10(VAR_12, VAR_4);
  return (VAR_16);
 }
 if (FUNC_4(VAR_14) != VAR_0) {
  FUNC_7(VAR_13, VAR_4);
  FUNC_10(VAR_12, VAR_4);
  return (FUNC_0(VAR_5));
 }
 FUNC_7(VAR_13, VAR_4);
 FUNC_10(VAR_12, VAR_4);

 return (VAR_16);
}
