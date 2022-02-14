
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int spa_t ;
typedef int dsl_pool_t ;


 int FUNC_0 (int *,void*) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (char const*,int **,void*) ;

int
FUNC_3(const char *VAR_0, void *VAR_1, dsl_pool_t **VAR_2)
{
 spa_t *VAR_3;
 int VAR_4;

 VAR_4 = FUNC_2(VAR_0, &VAR_3, VAR_1);
 if (VAR_4 == 0) {
  *VAR_2 = FUNC_1(VAR_3);
  FUNC_0(*VAR_2, VAR_1);
 }
 return (VAR_4);
}
