
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int dsl_pool_t ;
typedef int dsl_dataset_t ;


 int FUNC_0 (int *,char const*,void*,int **) ;
 int FUNC_1 (int *,int *,char const*,int) ;

dsl_dataset_t *
FUNC_2(lua_State *VAR_0, dsl_pool_t *VAR_1, const char *VAR_2,
    void *VAR_3)
{
 dsl_dataset_t *VAR_4;
 int VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3, &VAR_4);
 (void) FUNC_1(VAR_0, VAR_1, VAR_2, VAR_5);
 return (VAR_4);
}
