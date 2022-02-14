
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int spa_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (char const*,int **,int ) ;
 scalar_t__ VAR_7 ;

int
FUNC_5(const char *VAR_8, uint64_t VAR_9)
{

 if (VAR_9 > VAR_6) {
  spa_t *VAR_10;
  int VAR_11;

  if ((VAR_11 = FUNC_4(VAR_8, &VAR_10, VAR_2)) != 0)
   return (VAR_11);

  if (!FUNC_3(VAR_10, VAR_3)) {
   FUNC_2(VAR_10, VAR_2);
   return (FUNC_1(VAR_1));
  }





  if (VAR_9 > VAR_7)
   return (FUNC_1(VAR_0));

  FUNC_2(VAR_10, VAR_2);
 }

 if (VAR_9 < VAR_5 ||
     VAR_9 > VAR_4 ||
     !FUNC_0(VAR_9))
  return (FUNC_1(VAR_0));

 return (0);
}
