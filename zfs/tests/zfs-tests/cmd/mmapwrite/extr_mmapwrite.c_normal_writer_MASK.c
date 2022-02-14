
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 (int,int,int ) ;
 char* FUNC_4 (int) ;
 int FUNC_5 (char*,int,int) ;
 scalar_t__ FUNC_6 (int,char*,int) ;

__attribute__((used)) static void *
FUNC_7(void *VAR_3)
{
 char *VAR_4 = VAR_3;
 int VAR_5 = -1;
 ssize_t VAR_6 = 0;
 int VAR_7 = FUNC_2();

 VAR_5 = FUNC_5(VAR_4, VAR_1 | VAR_0, 0777);
 if (VAR_5 == -1) {
  FUNC_0(1, "failed to open %s", VAR_4);
 }

 char *VAR_8 = FUNC_4(1);
 while (1) {
  VAR_6 = FUNC_6(VAR_5, VAR_8, 1);
  if (VAR_6 == 0) {
   FUNC_0(1, "write failed!");
   break;
  }
  FUNC_3(VAR_5, VAR_7, VAR_2);
 }

 if (VAR_8) {
  FUNC_1(VAR_8);
 }
}
