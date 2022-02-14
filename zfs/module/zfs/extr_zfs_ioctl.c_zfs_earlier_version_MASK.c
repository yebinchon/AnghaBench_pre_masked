
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int spa_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (char const*,int **,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_1, int VAR_2)
{
 spa_t *VAR_3;

 if (FUNC_1(VAR_1, &VAR_3, VAR_0) == 0) {
  if (FUNC_2(VAR_3) < VAR_2) {
   FUNC_0(VAR_3, VAR_0);
   return (1);
  }
  FUNC_0(VAR_3, VAR_0);
 }
 return (0);
}
