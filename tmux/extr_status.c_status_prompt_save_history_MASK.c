
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (char,int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char*,...) ;
 char* FUNC_6 () ;
 int * VAR_1 ;
 size_t VAR_2 ;
 int FUNC_7 (int ) ;

void
FUNC_8(void)
{
 FILE *VAR_3;
 u_int VAR_4;
 char *VAR_5;

 if ((VAR_5 = FUNC_6()) == ((void*)0))
  return;
 FUNC_5("saving history to %s", VAR_5);

 VAR_3 = FUNC_1(VAR_5, "w");
 if (VAR_3 == ((void*)0)) {
  FUNC_5("%s: %s", VAR_5, FUNC_7(VAR_0));
  FUNC_4(VAR_5);
  return;
 }
 FUNC_4(VAR_5);

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  FUNC_3(VAR_1[VAR_4], VAR_3);
  FUNC_2('\n', VAR_3);
 }
 FUNC_0(VAR_3);

}
