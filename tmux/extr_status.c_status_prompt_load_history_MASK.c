
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 char* FUNC_1 (int *,size_t*) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,...) ;
 int FUNC_5 (char*,char*,size_t) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 () ;
 int FUNC_8 (int ) ;
 char* FUNC_9 (size_t) ;

void
FUNC_10(void)
{
 FILE *VAR_1;
 char *VAR_2, *VAR_3, *VAR_4;
 size_t VAR_5;

 if ((VAR_2 = FUNC_7()) == ((void*)0))
  return;
 FUNC_4("loading history from %s", VAR_2);

 VAR_1 = FUNC_2(VAR_2, "r");
 if (VAR_1 == ((void*)0)) {
  FUNC_4("%s: %s", VAR_2, FUNC_8(VAR_0));
  FUNC_3(VAR_2);
  return;
 }
 FUNC_3(VAR_2);

 for (;;) {
  if ((VAR_3 = FUNC_1(VAR_1, &VAR_5)) == ((void*)0))
   break;

  if (VAR_5 > 0) {
   if (VAR_3[VAR_5 - 1] == '\n') {
    VAR_3[VAR_5 - 1] = '\0';
    FUNC_6(VAR_3);
   } else {
    VAR_4 = FUNC_9(VAR_5 + 1);
    FUNC_5(VAR_4, VAR_3, VAR_5);
    VAR_4[VAR_5] = '\0';
    FUNC_6(VAR_4);
    FUNC_3(VAR_4);
   }
  }
 }
 FUNC_0(VAR_1);
}
