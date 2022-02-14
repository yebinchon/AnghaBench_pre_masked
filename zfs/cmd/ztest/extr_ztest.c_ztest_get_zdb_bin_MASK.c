
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,char*,char*) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 () ;
 int * FUNC_4 (int ,char*) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,char*,int) ;
 char* FUNC_8 (char*,char*) ;
 scalar_t__ FUNC_9 (char*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_10(char *VAR_1, int VAR_2)
{
 char *VAR_3;




 if ((VAR_3 = FUNC_2("ZDB_PATH"))) {
  FUNC_7(VAR_1, VAR_3, VAR_2);
  if (!FUNC_9(VAR_1)) {
   VAR_0 = 0;
   FUNC_1(1, "invalid ZDB_PATH '%s'", VAR_1);
  }
  return;
 }

 FUNC_0(FUNC_4(FUNC_3(), VAR_1) != ((void*)0));
 if (FUNC_8(VAR_1, "/ztest/")) {
  FUNC_8(VAR_1, "/ztest/")[0] = '\0';
  FUNC_5(VAR_1, "/zdb/zdb");
  if (FUNC_9(VAR_1))
   return;
 }
 FUNC_6(VAR_1, "zdb");
}
