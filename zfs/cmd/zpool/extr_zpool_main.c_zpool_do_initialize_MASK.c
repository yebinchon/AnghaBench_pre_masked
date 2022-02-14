
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zpool_handle_t ;
struct option {char* member_0; char member_3; int * member_2; int member_1; } ;
typedef scalar_t__ pool_initialize_func_t ;
typedef int nvlist_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,int ) ;
 int FUNC_4 (int ,char*,...) ;
 int VAR_6 ;
 int FUNC_5 (int,char**,char*,struct option*,int *) ;
 char* FUNC_6 (char*) ;
 int VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *,int *) ;
 int * FUNC_10 (int *,int *) ;
 int FUNC_11 (int *,scalar_t__,int *) ;
 int FUNC_12 (int *,scalar_t__,int *) ;
 int * FUNC_13 (int ,char*) ;

int
FUNC_14(int VAR_11, char **VAR_12)
{
 int VAR_13;
 char *VAR_14;
 zpool_handle_t *VAR_15;
 nvlist_t *VAR_16;
 int VAR_17 = 0;
 boolean_t VAR_18 = VAR_0;

 struct option VAR_19[] = {
  {"cancel", VAR_7, ((void*)0), 'c'},
  {"suspend", VAR_7, ((void*)0), 's'},
  {"wait", VAR_7, ((void*)0), 'w'},
  {0, 0, 0, 0}
 };

 pool_initialize_func_t VAR_20 = VAR_3;
 while ((VAR_13 = FUNC_5(VAR_11, VAR_12, "csw", VAR_19, ((void*)0))) != -1) {
  switch (VAR_13) {
  case 'c':
   if (VAR_20 != VAR_3 &&
       VAR_20 != VAR_2) {
    (void) FUNC_4(VAR_10, "%s", FUNC_6("-c cannot be "
        "combined with other options\n"));
    FUNC_7(VAR_0);
   }
   VAR_20 = VAR_2;
   break;
  case 's':
   if (VAR_20 != VAR_3 &&
       VAR_20 != VAR_4) {
    (void) FUNC_4(VAR_10, "%s", FUNC_6("-s cannot be "
        "combined with other options\n"));
    FUNC_7(VAR_0);
   }
   VAR_20 = VAR_4;
   break;
  case 'w':
   VAR_18 = VAR_1;
   break;
  case '?':
   if (VAR_9 != 0) {
    (void) FUNC_4(VAR_10,
        FUNC_6("invalid option '%c'\n"), VAR_9);
   } else {
    (void) FUNC_4(VAR_10,
        FUNC_6("invalid option '%s'\n"),
        VAR_12[VAR_8 - 1]);
   }
   FUNC_7(VAR_0);
  }
 }

 VAR_11 -= VAR_8;
 VAR_12 += VAR_8;

 if (VAR_11 < 1) {
  (void) FUNC_4(VAR_10, "%s", FUNC_6("missing pool name argument\n"));
  FUNC_7(VAR_0);
  return (-1);
 }

 if (VAR_18 && (VAR_20 != VAR_3)) {
  (void) FUNC_4(VAR_10, "%s", FUNC_6("-w cannot be used with -c or "
      "-s\n"));
  FUNC_7(VAR_0);
 }

 VAR_14 = VAR_12[0];
 VAR_15 = FUNC_13(VAR_6, VAR_14);
 if (VAR_15 == ((void*)0))
  return (-1);

 VAR_16 = FUNC_1();
 if (VAR_11 == 1) {

  nvlist_t *VAR_21 = FUNC_10(VAR_15, ((void*)0));
  nvlist_t *VAR_22 = FUNC_3(VAR_21,
      VAR_5);
  FUNC_9(VAR_15, VAR_22, VAR_16);
 } else {
  for (int VAR_23 = 1; VAR_23 < VAR_11; VAR_23++) {
   FUNC_0(VAR_16, VAR_12[VAR_23]);
  }
 }

 if (VAR_18)
  VAR_17 = FUNC_12(VAR_15, VAR_20, VAR_16);
 else
  VAR_17 = FUNC_11(VAR_15, VAR_20, VAR_16);

 FUNC_2(VAR_16);
 FUNC_8(VAR_15);

 return (VAR_17);
}
