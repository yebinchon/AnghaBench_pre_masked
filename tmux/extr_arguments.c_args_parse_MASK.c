
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct args {int argc; int argv; } ;


 int FUNC_0 (struct args*) ;
 int FUNC_1 (struct args*,int,int ) ;
 int FUNC_2 (int,char**) ;
 int FUNC_3 (int,char**,char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_4 (char const*,int) ;
 struct args* FUNC_5 (int,int) ;

struct args *
FUNC_6(const char *VAR_3, int VAR_4, char **VAR_5)
{
 struct args *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_5(1, sizeof *VAR_6);

 VAR_2 = 1;
 VAR_1 = 1;

 while ((VAR_7 = FUNC_3(VAR_4, VAR_5, VAR_3)) != -1) {
  if (VAR_7 < 0)
   continue;
  if (VAR_7 == '?' || FUNC_4(VAR_3, VAR_7) == ((void*)0)) {
   FUNC_0(VAR_6);
   return (((void*)0));
  }
  FUNC_1(VAR_6, VAR_7, VAR_0);
 }
 VAR_4 -= VAR_1;
 VAR_5 += VAR_1;

 VAR_6->argc = VAR_4;
 VAR_6->argv = FUNC_2(VAR_4, VAR_5);

 return (VAR_6);
}
