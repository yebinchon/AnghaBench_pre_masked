
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long uint64_t ;


 unsigned long FUNC_0 (unsigned long) ;
 int FUNC_1 (char*,char*,unsigned long*,unsigned long*) ;

__attribute__((used)) static int
FUNC_2(char *VAR_0, uint64_t *VAR_1, uint64_t *VAR_2)
{
 unsigned long VAR_3;
 unsigned long VAR_4;

 if (FUNC_1(VAR_0, "%lu:%lu", &VAR_3, &VAR_4) != 2)
  return (1);






 if (VAR_3 == 0)
  return (1);







 *VAR_1 = FUNC_0(VAR_3);
 *VAR_2 = VAR_4;

 return (0);
}
