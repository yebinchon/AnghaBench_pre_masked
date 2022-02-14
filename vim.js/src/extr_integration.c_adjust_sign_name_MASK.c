
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;

void
FUNC_3(char *VAR_0)
{
 char *VAR_1;
 static int VAR_2 = -1;

 if (VAR_2 == -1)
  VAR_2 = FUNC_2();
 if (VAR_2 == 0)
  return;
 if (VAR_0[0] == '-')
  return;







 VAR_1 = VAR_0+FUNC_1(VAR_0)-5;
 if (VAR_2 <= 11)
  FUNC_0(VAR_1, "2.xpm");
 else if (VAR_2 <= 15)
  FUNC_0(VAR_1, "1.xpm");
 else
  FUNC_0(VAR_1, ".xpm");
}
