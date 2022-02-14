
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
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,...) ;
 char* FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int ,char*,int ,char*,int ) ;
 int FUNC_6 (char*,int,int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,int,char*,...) ;
 scalar_t__ FUNC_9 (char*,struct stat*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*) ;

int
FUNC_12(int VAR_6, char *VAR_7[])
{
 int VAR_8, VAR_9, VAR_10;
 char VAR_11[1024], VAR_12[1024];
 char *VAR_13[] = {"TESTDIR", "TESTFILE0"};
 struct stat VAR_14;

 (void) FUNC_3(VAR_5, "Verify O_TMPFILE file can be linked.\n");




 for (VAR_8 = 0; VAR_8 < sizeof (VAR_13) / sizeof (char *); VAR_8++) {
  if ((VAR_13[VAR_8] = FUNC_4(VAR_13[VAR_8])) == ((void*)0)) {
   (void) FUNC_3(VAR_4, "getenv(penv[%d])\n", VAR_8);
   FUNC_2(1);
  }
 }

 VAR_9 = FUNC_6(VAR_13[0], VAR_2|VAR_3, 0666);
 if (VAR_9 < 0) {
  FUNC_7("open");
  FUNC_2(2);
 }

 FUNC_8(VAR_11, 1024, "/proc/self/fd/%d", VAR_9);
 FUNC_8(VAR_12, 1024, "%s/%s", VAR_13[0], VAR_13[1]);
 if (FUNC_5(VAR_0, VAR_11, VAR_0, VAR_12, VAR_1) < 0) {
  FUNC_7("linkat");
  FUNC_1(VAR_9);
  FUNC_2(3);
 }

 if ((VAR_10 = FUNC_10("sudo zpool freeze $TESTPOOL"))) {
  if (VAR_10 == -1)
   FUNC_7("system \"zpool freeze\"");
  else
   FUNC_3(VAR_4, "zpool freeze exits with %d\n",
       FUNC_0(VAR_10));
  FUNC_2(4);
 }

 FUNC_1(VAR_9);

 if ((VAR_10 = FUNC_10("sudo zpool export $TESTPOOL"))) {
  if (VAR_10 == -1)
   FUNC_7("system \"zpool export\"");
  else
   FUNC_3(VAR_4, "zpool export exits with %d\n",
       FUNC_0(VAR_10));
  FUNC_2(4);
 }

 if ((VAR_10 = FUNC_10("sudo zpool import $TESTPOOL"))) {
  if (VAR_10 == -1)
   FUNC_7("system \"zpool import\"");
  else
   FUNC_3(VAR_4, "zpool import exits with %d\n",
       FUNC_0(VAR_10));
  FUNC_2(4);
 }

 if (FUNC_9(VAR_12, &VAR_14) < 0) {
  FUNC_7("stat");
  FUNC_11(VAR_12);
  FUNC_2(5);
 }
 FUNC_11(VAR_12);

 return (0);
}
