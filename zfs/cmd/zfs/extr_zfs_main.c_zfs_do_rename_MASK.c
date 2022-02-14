
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zfs_handle_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_5 ;
 int FUNC_1 (int,char**,char*) ;
 char* FUNC_2 (char*) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_3 (char*,char) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ,char*) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (char*,int ) ;
 int * FUNC_9 (int ,char*,int) ;
 scalar_t__ FUNC_10 (int *,char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int
FUNC_11(int VAR_9, char **VAR_10)
{
 zfs_handle_t *VAR_11;
 int VAR_12;
 int VAR_13 = 0;
 boolean_t VAR_14 = VAR_0;
 boolean_t VAR_15 = VAR_0;
 boolean_t VAR_16 = VAR_0;


 while ((VAR_12 = FUNC_1(VAR_9, VAR_10, "prf")) != -1) {
  switch (VAR_12) {
  case 'p':
   VAR_15 = VAR_1;
   break;
  case 'r':
   VAR_14 = VAR_1;
   break;
  case 'f':
   VAR_16 = VAR_1;
   break;
  case '?':
  default:
   (void) FUNC_0(VAR_8, FUNC_2("invalid option '%c'\n"),
       VAR_7);
   FUNC_4(VAR_0);
  }
 }

 VAR_9 -= VAR_6;
 VAR_10 += VAR_6;


 if (VAR_9 < 1) {
  (void) FUNC_0(VAR_8, "%s", FUNC_2("missing source dataset "
      "argument\n"));
  FUNC_4(VAR_0);
 }
 if (VAR_9 < 2) {
  (void) FUNC_0(VAR_8, "%s", FUNC_2("missing target dataset "
      "argument\n"));
  FUNC_4(VAR_0);
 }
 if (VAR_9 > 2) {
  (void) FUNC_0(VAR_8, "%s", FUNC_2("too many arguments\n"));
  FUNC_4(VAR_0);
 }

 if (VAR_14 && VAR_15) {
  (void) FUNC_0(VAR_8, "%s", FUNC_2("-p and -r options are mutually "
      "exclusive\n"));
  FUNC_4(VAR_0);
 }

 if (VAR_14 && FUNC_3(VAR_10[0], '@') == 0) {
  (void) FUNC_0(VAR_8, "%s", FUNC_2("source dataset for recursive "
      "rename must be a snapshot\n"));
  FUNC_4(VAR_0);
 }

 if ((VAR_11 = FUNC_9(VAR_5, VAR_10[0], VAR_15 ? VAR_3 |
     VAR_4 : VAR_2)) == ((void*)0))
  return (1);


 if (VAR_15 && FUNC_8(VAR_10[1], FUNC_7(VAR_11)) &&
     FUNC_6(VAR_5, VAR_10[1]) != 0) {
  FUNC_5(VAR_11);
  return (1);
 }

 VAR_13 = (FUNC_10(VAR_11, VAR_10[1], VAR_14, VAR_16) != 0);

 FUNC_5(VAR_11);
 return (VAR_13);
}
