
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*) ;
 char* FUNC_4 (char*,char*) ;
 char* FUNC_5 () ;

__attribute__((used)) static void
FUNC_6(char *VAR_0)
{
 char *VAR_1, *VAR_2;

 FUNC_3(FUNC_1("Available 'zpool %s -c' commands:\n"), VAR_0);

 VAR_2 = FUNC_5();
 if (VAR_2 == ((void*)0))
  return;

 VAR_1 = FUNC_4(VAR_2, ":");
 while (VAR_1 != ((void*)0)) {
  FUNC_2(VAR_1);
  VAR_1 = FUNC_4(((void*)0), ":");
 }

 FUNC_0(VAR_2);
}
