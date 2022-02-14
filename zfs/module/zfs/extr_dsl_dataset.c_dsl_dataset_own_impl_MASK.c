
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dsl_pool_t ;
typedef int dsl_dataset_t ;
typedef int ds_hold_flags_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char const*,int ,void*,int **) ;
 int FUNC_2 (int *,int ,void*) ;
 int FUNC_3 (int *,void*,int ) ;

__attribute__((used)) static int
FUNC_4(dsl_pool_t *VAR_1, const char *VAR_2, ds_hold_flags_t VAR_3,
    void *VAR_4, boolean_t VAR_5, dsl_dataset_t **VAR_6)
{
 int VAR_7 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_6);
 if (VAR_7 != 0)
  return (VAR_7);
 if (!FUNC_3(*VAR_6, VAR_4, VAR_5)) {
  FUNC_2(*VAR_6, VAR_3, VAR_4);
  return (FUNC_0(VAR_0));
 }
 return (0);
}
