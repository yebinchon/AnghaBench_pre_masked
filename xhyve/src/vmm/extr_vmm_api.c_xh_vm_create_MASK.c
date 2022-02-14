
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned long long VAR_1 ;
 scalar_t__ VAR_2 ;
 int * VAR_3 ;
 int FUNC_0 (int **) ;
 int FUNC_1 () ;

int
FUNC_2(void)
{
 int VAR_4;

 if (VAR_3 != ((void*)0)) {
  return (VAR_0);
 }

 VAR_4 = FUNC_1();

 if (VAR_4 != 0) {
  return (VAR_4);
 }

 VAR_2 = 0;
 VAR_1 = (3ull << 30);

 return (FUNC_0(&VAR_3));
}
