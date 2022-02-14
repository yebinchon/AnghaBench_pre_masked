
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ spa_feature_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ const VAR_2 ;

__attribute__((used)) static boolean_t
FUNC_0(const spa_feature_t *VAR_3, const spa_feature_t VAR_4)
{
 for (int VAR_5 = 0; VAR_3[VAR_5] != VAR_2; VAR_5++)
  if (VAR_3[VAR_5] == VAR_4)
   return (VAR_1);

 return (VAR_0);
}
