
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int) ;
 int ** VAR_0 ;

__attribute__((used)) static void
FUNC_1(void)
{
 int VAR_1, VAR_2;
 for (VAR_1 = 0; VAR_1 < 256; VAR_1++)
  for (VAR_2 = 0; VAR_2 < 256; VAR_2++)
   VAR_0[VAR_1][VAR_2] = FUNC_0(VAR_1, VAR_2);

}
