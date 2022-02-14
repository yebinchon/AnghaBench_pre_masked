
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int objset_t ;
typedef int dsl_pool_t ;
typedef int dsl_dataset_t ;
typedef int ds_hold_flags_t ;
typedef int dmu_objset_type_t ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,scalar_t__,scalar_t__,void*,int **) ;
 int FUNC_1 (int *,int ,void*) ;
 int FUNC_2 (int *,int ,int ,void*,int **) ;

int
FUNC_3(dsl_pool_t *VAR_1, uint64_t VAR_2, dmu_objset_type_t VAR_3,
    boolean_t VAR_4, boolean_t VAR_5, void *VAR_6, objset_t **VAR_7)
{
 dsl_dataset_t *VAR_8;
 int VAR_9;
 ds_hold_flags_t VAR_10 = (VAR_5) ? VAR_0 : 0;

 VAR_9 = FUNC_2(VAR_1, VAR_2, VAR_10, VAR_6, &VAR_8);
 if (VAR_9 != 0)
  return (VAR_9);

 VAR_9 = FUNC_0(VAR_8, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
 if (VAR_9 != 0) {
  FUNC_1(VAR_8, VAR_10, VAR_6);
  return (VAR_9);
 }

 return (0);
}
