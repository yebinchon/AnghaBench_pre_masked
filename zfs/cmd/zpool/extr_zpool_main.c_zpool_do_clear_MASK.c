
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zpool_handle_t ;
typedef int uint32_t ;
typedef int nvlist_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_8 ;
 int FUNC_1 (int,char**,char*) ;
 char* FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int *,int ,int ) ;
 scalar_t__ FUNC_4 (int **,int ,int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (int *,char*,int *) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int ,char*) ;

int
FUNC_10(int VAR_12, char **VAR_13)
{
 int VAR_14;
 int VAR_15 = 0;
 boolean_t VAR_16 = VAR_0;
 boolean_t VAR_17 = VAR_0;
 boolean_t VAR_18 = VAR_0;
 uint32_t VAR_19 = VAR_6;
 nvlist_t *VAR_20 = ((void*)0);
 zpool_handle_t *VAR_21;
 char *VAR_22, *VAR_23;


 while ((VAR_14 = FUNC_1(VAR_12, VAR_13, "FnX")) != -1) {
  switch (VAR_14) {
  case 'F':
   VAR_17 = VAR_1;
   break;
  case 'n':
   VAR_16 = VAR_1;
   break;
  case 'X':
   VAR_18 = VAR_1;
   break;
  case '?':
   (void) FUNC_0(VAR_11, FUNC_2("invalid option '%c'\n"),
       VAR_10);
   FUNC_6(VAR_0);
  }
 }

 VAR_12 -= VAR_9;
 VAR_13 += VAR_9;

 if (VAR_12 < 1) {
  (void) FUNC_0(VAR_11, "%s", FUNC_2("missing pool name\n"));
  FUNC_6(VAR_0);
 }

 if (VAR_12 > 2) {
  (void) FUNC_0(VAR_11, "%s", FUNC_2("too many arguments\n"));
  FUNC_6(VAR_0);
 }

 if ((VAR_16 || VAR_18) && !VAR_17) {
  (void) FUNC_0(VAR_11,
      "%s", FUNC_2("-n or -X only meaningful with -F\n"));
  FUNC_6(VAR_0);
 }
 if (VAR_16)
  VAR_19 = VAR_7;
 else if (VAR_17)
  VAR_19 = VAR_3;
 if (VAR_18)
  VAR_19 |= VAR_4;


 if (FUNC_4(&VAR_20, VAR_2, 0) != 0 ||
     FUNC_3(VAR_20, VAR_5,
     VAR_19) != 0) {
  return (1);
 }

 VAR_22 = VAR_13[0];
 VAR_23 = VAR_12 == 2 ? VAR_13[1] : ((void*)0);

 if ((VAR_21 = FUNC_9(VAR_8, VAR_22)) == ((void*)0)) {
  FUNC_5(VAR_20);
  return (1);
 }

 if (FUNC_7(VAR_21, VAR_23, VAR_20) != 0)
  VAR_15 = 1;

 FUNC_8(VAR_21);

 FUNC_5(VAR_20);

 return (VAR_15);
}
