
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
typedef int penv ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,...) ;
 char* FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int ,char*,int ,char*,int ) ;
 int FUNC_5 (char*,int,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,int,char*,...) ;
 scalar_t__ FUNC_8 (char*,struct stat*) ;
 int VAR_5 ;
 int VAR_6 ;

int
FUNC_9(int VAR_7, char *VAR_8[])
{
 int VAR_9, VAR_10;
 char VAR_11[1024], VAR_12[1024];
 char *VAR_13[] = {"TESTDIR", "TESTFILE0"};
 struct stat VAR_14;

 (void) FUNC_2(VAR_6, "Verify O_EXCL tmpfile cannot be linked.\n");




 for (VAR_9 = 0; VAR_9 < sizeof (VAR_13) / sizeof (char *); VAR_9++) {
  if ((VAR_13[VAR_9] = FUNC_3(VAR_13[VAR_9])) == ((void*)0)) {
   (void) FUNC_2(VAR_5, "getenv(penv[%d])\n", VAR_9);
   FUNC_1(1);
  }
 }

 VAR_10 = FUNC_5(VAR_13[0], VAR_3|VAR_4|VAR_2, 0666);
 if (VAR_10 < 0) {
  FUNC_6("open");
  FUNC_1(2);
 }

 FUNC_7(VAR_11, 1024, "/proc/self/fd/%d", VAR_10);
 FUNC_7(VAR_12, 1024, "%s/%s", VAR_13[0], VAR_13[1]);
 if (FUNC_4(VAR_0, VAR_11, VAR_0, VAR_12, VAR_1) == 0) {
  FUNC_2(VAR_5, "linkat returns successfully\n");
  FUNC_0(VAR_10);
  FUNC_1(3);
 }

 if (FUNC_8(VAR_12, &VAR_14) == 0) {
  FUNC_2(VAR_5, "stat returns successfully\n");
  FUNC_0(VAR_10);
  FUNC_1(4);
 }
 FUNC_0(VAR_10);

 return (0);
}
