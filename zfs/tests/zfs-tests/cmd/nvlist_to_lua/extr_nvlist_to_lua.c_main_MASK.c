
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 char const* VAR_0 ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 () ;
 int VAR_1 ;

int
FUNC_5(int VAR_2, const char *VAR_3[])
{
 (void) FUNC_2();

 if (VAR_2 != 2) {
  (void) FUNC_3("usage: %s <pool>\n",
      VAR_3[0]);
  FUNC_0(2);
 }
 VAR_0 = VAR_3[1];

 FUNC_4();

 FUNC_1();
 return (VAR_1);
}
