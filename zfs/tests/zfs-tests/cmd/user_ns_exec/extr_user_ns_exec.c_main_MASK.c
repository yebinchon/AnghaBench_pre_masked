
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char**,int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (int,char*,int) ;
 scalar_t__ FUNC_8 (scalar_t__,char*) ;
 scalar_t__ FUNC_9 (int ,int ,int ,int*) ;
 scalar_t__ FUNC_10 (char*) ;
 scalar_t__ FUNC_11 (scalar_t__,int*,int ) ;
 int FUNC_12 (int,char*,int) ;

int
FUNC_13(int VAR_3, char *VAR_4[])
{
 char VAR_5;
 int VAR_6, VAR_7;
 int VAR_8[2];
 pid_t VAR_9;

 if (VAR_3 < 2 || FUNC_10(VAR_4[1]) == 0) {
  (void) FUNC_6("\tUsage: %s <commands> ...\n", VAR_4[0]);
  return (1);
 }

 if (FUNC_9(VAR_0, VAR_2, 0, VAR_8) != 0) {
  FUNC_5("socketpair");
  return (1);
 }

 VAR_9 = FUNC_3();
 if (VAR_9 == (pid_t)-1) {
  FUNC_5("fork");
  return (1);
 }

 if (VAR_9 == 0) {
  FUNC_2(VAR_8[0]);
  return (FUNC_1(VAR_3, VAR_4, VAR_8[1]));
 }

 FUNC_2(VAR_8[1]);

 VAR_6 = 0;

 if (FUNC_7(VAR_8[0], &VAR_5, 1) != 1) {
  FUNC_5("read");
  FUNC_4(VAR_9, VAR_1);
  VAR_6 = 1;
  goto reap;
 }


 if (FUNC_8(VAR_9, "uid_map") != 0 ||
     FUNC_8(VAR_9, "gid_map") != 0) {
  VAR_6 = 1;
  FUNC_4(VAR_9, VAR_1);
  goto reap;
 }


 if (FUNC_12(VAR_8[0], "1", 1) != 1) {
  FUNC_5("write");
  FUNC_4(VAR_9, VAR_1);
  VAR_6 = 1;
  goto reap;
 }
 FUNC_2(VAR_8[0]);

reap:
 while (FUNC_11(VAR_9, &VAR_7, 0) != VAR_9)
  FUNC_4(VAR_9, VAR_1);
 if (VAR_6 == 0)
  VAR_6 = FUNC_0(VAR_7);

 return (VAR_6);
}
