
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int objset_t ;
typedef int dsl_pool_t ;
typedef int dsl_dataset_t ;
typedef int ds_hold_flags_t ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int **) ;
 int FUNC_1 (int *,char const*,int ,void*,int **) ;
 int FUNC_2 (int *,void*) ;
 int FUNC_3 (char const*,void*,int **) ;
 int FUNC_4 (int *,void*) ;

int
FUNC_5(const char *VAR_1, boolean_t VAR_2, void *VAR_3,
    objset_t **VAR_4)
{
 dsl_pool_t *VAR_5;
 dsl_dataset_t *VAR_6;
 int VAR_7;
 ds_hold_flags_t VAR_8 = (VAR_2) ? VAR_0 : 0;

 VAR_7 = FUNC_3(VAR_1, VAR_3, &VAR_5);
 if (VAR_7 != 0)
  return (VAR_7);
 VAR_7 = FUNC_1(VAR_5, VAR_1, VAR_8, VAR_3, &VAR_6);
 if (VAR_7 != 0) {
  FUNC_4(VAR_5, VAR_3);
  return (VAR_7);
 }

 VAR_7 = FUNC_0(VAR_6, VAR_4);
 if (VAR_7 != 0) {
  FUNC_2(VAR_6, VAR_3);
  FUNC_4(VAR_5, VAR_3);
 }

 return (VAR_7);
}
