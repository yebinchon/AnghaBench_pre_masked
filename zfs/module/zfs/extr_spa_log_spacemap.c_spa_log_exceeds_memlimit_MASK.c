
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int spa_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static boolean_t
FUNC_1(spa_t *VAR_6)
{
 if (FUNC_0(VAR_6) > VAR_4)
  return (VAR_1);

 uint64_t VAR_7 = ((VAR_3 * VAR_2) *
     VAR_5) / 1000000;
 if (FUNC_0(VAR_6) > VAR_7)
  return (VAR_1);

 return (VAR_0);
}
