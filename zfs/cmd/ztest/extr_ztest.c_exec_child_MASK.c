
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rlimit {int member_0; int member_1; } ;
typedef int pid_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (char*,char**) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int,char*,...) ;
 int FUNC_10 () ;
 int FUNC_11 (int ,char*,...) ;
 int FUNC_12 () ;
 scalar_t__ FUNC_13 (char*,char*,int) ;
 int FUNC_14 (int ,struct rlimit*) ;
 int FUNC_15 (char*,int,char*,int) ;
 int VAR_6 ;
 int FUNC_16 (char*,int ,int ) ;
 char* FUNC_17 (int ,int ) ;
 int FUNC_18 (char*,int ) ;
 int FUNC_19 (int,int*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static boolean_t
FUNC_20(char *VAR_10, char *VAR_11, boolean_t VAR_12, int *VAR_13)
{
 pid_t VAR_14;
 int VAR_15;
 char *VAR_16 = ((void*)0);

 VAR_14 = FUNC_10();

 if (VAR_10 == ((void*)0)) {
  VAR_16 = FUNC_17(VAR_2, VAR_5);
  (void) FUNC_16(VAR_16, FUNC_12(), VAR_2);
  VAR_10 = VAR_16;
 }

 if (VAR_14 == -1)
  FUNC_9(1, "fork failed");

 if (VAR_14 == 0) {
  char *VAR_17[2] = { VAR_10, ((void*)0) };
  char VAR_18[12];

  struct rlimit VAR_19 = { 1024, 1024 };
  (void) FUNC_14(VAR_3, &VAR_19);

  (void) FUNC_5(VAR_9);
  FUNC_0(11 >= FUNC_15(VAR_18, 12, "%d", VAR_8));
  FUNC_0(0 == FUNC_13("ZTEST_FD_DATA", VAR_18, 1));

  (void) FUNC_6(-1, -1);
  if (VAR_11 != ((void*)0))
   FUNC_0(0 == FUNC_13("LD_LIBRARY_PATH", VAR_11, 1));
  (void) FUNC_7(VAR_10, VAR_17);
  VAR_7 = VAR_0;
  FUNC_9(VAR_1, "exec failed: %s", VAR_10);
 }

 if (VAR_16 != ((void*)0)) {
  FUNC_18(VAR_16, VAR_2);
  VAR_10 = ((void*)0);
 }

 while (FUNC_19(VAR_14, &VAR_15, 0) != VAR_14)
  continue;
 if (VAR_13 != ((void*)0))
  *VAR_13 = VAR_15;

 if (FUNC_2(VAR_15)) {
  if (FUNC_1(VAR_15) != 0) {
   (void) FUNC_11(VAR_6, "child exited with code %d\n",
       FUNC_1(VAR_15));
   FUNC_8(2);
  }
  return (VAR_0);
 } else if (FUNC_3(VAR_15)) {
  if (!VAR_12 || FUNC_4(VAR_15) != VAR_4) {
   (void) FUNC_11(VAR_6, "child died with signal %d\n",
       FUNC_4(VAR_15));
   FUNC_8(3);
  }
  return (VAR_1);
 } else {
  (void) FUNC_11(VAR_6, "something strange happened to child\n");
  FUNC_8(4);

 }
}
