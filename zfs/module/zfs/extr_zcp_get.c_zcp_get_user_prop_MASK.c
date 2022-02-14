
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int dsl_pool_t ;
typedef int dsl_dataset_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,char const*,int,int ,char*,char*) ;
 char* FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int *,char*) ;
 int * FUNC_5 (int *,int *,char const*,int ) ;
 int FUNC_6 (int *,char const*,char const*,int) ;

__attribute__((used)) static int
FUNC_7(lua_State *VAR_4, dsl_pool_t *VAR_5, const char *VAR_6,
    const char *VAR_7)
{
 int VAR_8;
 char *VAR_9;
 char VAR_10[VAR_3];





 dsl_dataset_t *VAR_11 = FUNC_5(VAR_4, VAR_5, VAR_6, VAR_0);
 if (VAR_11 == ((void*)0))
  return (1);

 VAR_9 = FUNC_2(VAR_2, VAR_1);
 VAR_8 = FUNC_1(VAR_11, VAR_7, 1, VAR_2,
     VAR_9, VAR_10);
 FUNC_0(VAR_11, VAR_0);

 if (VAR_8 != 0) {
  FUNC_3(VAR_9, VAR_2);
  return (FUNC_6(VAR_4, VAR_6, VAR_7,
      VAR_8));
 }
 (void) FUNC_4(VAR_4, VAR_9);
 (void) FUNC_4(VAR_4, VAR_10);
 FUNC_3(VAR_9, VAR_2);
 return (2);
}
