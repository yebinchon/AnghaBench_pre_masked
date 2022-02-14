
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vdev ;
struct stat {int dummy; } ;
typedef int pool_state_t ;
typedef int nvlist_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;






 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (char*) ;
 int VAR_7 ;
 int FUNC_4 (int,char**,char*) ;
 char* FUNC_5 (char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,int ) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_8 (char*,struct stat*) ;
 int VAR_10 ;
 char* FUNC_9 (scalar_t__) ;
 int FUNC_10 (char*,char*,int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (char*,int) ;
 scalar_t__ FUNC_13 (int) ;
 scalar_t__ FUNC_14 (char*) ;
 int FUNC_15 (char*,char*,int) ;
 int FUNC_16 (int) ;
 int FUNC_17 (int ,int,int*,char**,int *) ;
 char* FUNC_18 (int) ;
 scalar_t__ FUNC_19 (int,int **,int *) ;

int
FUNC_20(int VAR_11, char **VAR_12)
{
 char VAR_13[VAR_4];
 char *VAR_14 = ((void*)0);
 struct stat VAR_15;
 int VAR_16, VAR_17 = -1, VAR_18 = 0;
 nvlist_t *VAR_19;
 pool_state_t VAR_20;
 boolean_t VAR_21 = VAR_0;
 boolean_t VAR_22 = VAR_0;


 while ((VAR_16 = FUNC_4(VAR_11, VAR_12, "f")) != -1) {
  switch (VAR_16) {
  case 'f':
   VAR_22 = VAR_1;
   break;
  default:
   (void) FUNC_2(VAR_10, FUNC_5("invalid option '%c'\n"),
       VAR_9);
   FUNC_11(VAR_0);
  }
 }

 VAR_11 -= VAR_8;
 VAR_12 += VAR_8;


 if (VAR_11 < 1) {
  (void) FUNC_2(VAR_10, "%s", FUNC_5("missing vdev name\n"));
  FUNC_11(VAR_0);
 }
 if (VAR_11 > 1) {
  (void) FUNC_2(VAR_10, "%s", FUNC_5("too many arguments\n"));
  FUNC_11(VAR_0);
 }






 (void) FUNC_10(VAR_13, VAR_12[0], sizeof (VAR_13));
 if (VAR_13[0] != '/' && FUNC_8(VAR_13, &VAR_15) != 0) {
  int VAR_23;

  VAR_23 = FUNC_15(VAR_12[0], VAR_13, VAR_4);
  if (VAR_23 == 0 && FUNC_14(VAR_13)) {
   if (FUNC_12(VAR_13, VAR_4) == -1)
    VAR_23 = VAR_2;
  }

  if (VAR_23 || (FUNC_8(VAR_13, &VAR_15) != 0)) {
   (void) FUNC_2(VAR_10, FUNC_5(
       "failed to find device %s, try specifying absolute "
       "path instead\n"), VAR_12[0]);
   return (1);
  }
 }

 if ((VAR_17 = FUNC_7(VAR_13, VAR_5)) < 0) {
  (void) FUNC_2(VAR_10, FUNC_5("failed to open %s: %s\n"),
      VAR_13, FUNC_9(VAR_6));
  return (1);
 }






 if ((FUNC_13(VAR_17) != 0) && (VAR_6 != VAR_3))
  (void) FUNC_2(VAR_10, FUNC_5("failed to invalidate "
      "cache for %s: %s\n"), VAR_13, FUNC_9(VAR_6));

 if (FUNC_19(VAR_17, &VAR_19, ((void*)0)) != 0) {
  (void) FUNC_2(VAR_10,
      FUNC_5("failed to read label from %s\n"), VAR_13);
  VAR_18 = 1;
  goto errout;
 }
 FUNC_6(VAR_19);

 VAR_18 = FUNC_17(VAR_7, VAR_17, &VAR_20, &VAR_14, &VAR_21);
 if (VAR_18 != 0) {
  (void) FUNC_2(VAR_10,
      FUNC_5("failed to check state for %s\n"), VAR_13);
  VAR_18 = 1;
  goto errout;
 }

 if (!VAR_21)
  goto wipe_label;

 switch (VAR_20) {
 default:
 case 133:
 case 128:
 case 130:
  (void) FUNC_2(VAR_10, FUNC_5(
      "%s is a member (%s) of pool \"%s\"\n"),
      VAR_13, FUNC_18(VAR_20), VAR_14);
  VAR_18 = 1;
  goto errout;

 case 131:
  if (VAR_22)
   break;
  (void) FUNC_2(VAR_10, FUNC_5(
      "use '-f' to override the following error:\n"
      "%s is a member of exported pool \"%s\"\n"),
      VAR_13, VAR_14);
  VAR_18 = 1;
  goto errout;

 case 129:
  if (VAR_22)
   break;
  (void) FUNC_2(VAR_10, FUNC_5(
      "use '-f' to override the following error:\n"
      "%s is a member of potentially active pool \"%s\"\n"),
      VAR_13, VAR_14);
  VAR_18 = 1;
  goto errout;

 case 132:

  FUNC_0(0);
  break;
 }

wipe_label:
 VAR_18 = FUNC_16(VAR_17);
 if (VAR_18 != 0) {
  (void) FUNC_2(VAR_10,
      FUNC_5("failed to clear label for %s\n"), VAR_13);
 }

errout:
 FUNC_3(VAR_14);
 (void) FUNC_1(VAR_17);

 return (VAR_18);
}
