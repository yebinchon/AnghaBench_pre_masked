
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zpool_handle_t ;
typedef int uint64_t ;
struct TYPE_3__ {void* fullpool; int rate; void* secure; } ;
typedef TYPE_1__ trimflags_t ;
struct option {char* member_0; char member_3; int * member_2; int member_1; } ;
typedef int pool_trim_func_t ;
typedef int nvlist_t ;
typedef void* boolean_t ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
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
 int VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_7 (void*) ;
 int FUNC_8 (int *,int ,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int *,int *) ;
 int * FUNC_11 (int *,int *) ;
 int * FUNC_12 (int ,char*) ;
 int FUNC_13 (int *,int ,int *,TYPE_1__*) ;

int
FUNC_14(int VAR_13, char **VAR_14)
{
 struct option VAR_15[] = {
  {"cancel", VAR_7, ((void*)0), 'c'},
  {"secure", VAR_7, ((void*)0), 'd'},
  {"rate", VAR_11, ((void*)0), 'r'},
  {"suspend", VAR_7, ((void*)0), 's'},
  {0, 0, 0, 0}
 };

 pool_trim_func_t VAR_16 = VAR_3;
 uint64_t VAR_17 = 0;
 boolean_t VAR_18 = VAR_0;

 int VAR_19;
 while ((VAR_19 = FUNC_5(VAR_13, VAR_14, "cdr:s", VAR_15, ((void*)0)))
     != -1) {
  switch (VAR_19) {
  case 'c':
   if (VAR_16 != VAR_3 &&
       VAR_16 != VAR_2) {
    (void) FUNC_4(VAR_12, "%s", FUNC_6("-c cannot be "
        "combined with other options\n"));
    FUNC_7(VAR_0);
   }
   VAR_16 = VAR_2;
   break;
  case 'd':
   if (VAR_16 != VAR_3) {
    (void) FUNC_4(VAR_12, "%s", FUNC_6("-d cannot be "
        "combined with the -c or -s options\n"));
    FUNC_7(VAR_0);
   }
   VAR_18 = VAR_1;
   break;
  case 'r':
   if (VAR_16 != VAR_3) {
    (void) FUNC_4(VAR_12, "%s", FUNC_6("-r cannot be "
        "combined with the -c or -s options\n"));
    FUNC_7(VAR_0);
   }
   if (FUNC_8(((void*)0), VAR_8, &VAR_17) == -1) {
    (void) FUNC_4(VAR_12,
        "%s", FUNC_6("invalid value for rate\n"));
    FUNC_7(VAR_0);
   }
   break;
  case 's':
   if (VAR_16 != VAR_3 &&
       VAR_16 != VAR_4) {
    (void) FUNC_4(VAR_12, "%s", FUNC_6("-s cannot be "
        "combined with other options\n"));
    FUNC_7(VAR_0);
   }
   VAR_16 = VAR_4;
   break;
  case '?':
   if (VAR_10 != 0) {
    (void) FUNC_4(VAR_12,
        FUNC_6("invalid option '%c'\n"), VAR_10);
   } else {
    (void) FUNC_4(VAR_12,
        FUNC_6("invalid option '%s'\n"),
        VAR_14[VAR_9 - 1]);
   }
   FUNC_7(VAR_0);
  }
 }

 VAR_13 -= VAR_9;
 VAR_14 += VAR_9;

 if (VAR_13 < 1) {
  (void) FUNC_4(VAR_12, "%s", FUNC_6("missing pool name argument\n"));
  FUNC_7(VAR_0);
  return (-1);
 }

 char *VAR_20 = VAR_14[0];
 zpool_handle_t *VAR_21 = FUNC_12(VAR_6, VAR_20);
 if (VAR_21 == ((void*)0))
  return (-1);

 trimflags_t VAR_22 = {
  .secure = VAR_18,
  .rate = VAR_17,
 };

 nvlist_t *VAR_23 = FUNC_1();
 if (VAR_13 == 1) {

  nvlist_t *VAR_24 = FUNC_11(VAR_21, ((void*)0));
  nvlist_t *VAR_25 = FUNC_3(VAR_24,
      VAR_5);
  FUNC_10(VAR_21, VAR_25, VAR_23);
  VAR_22.fullpool = VAR_1;
 } else {
  VAR_22.fullpool = VAR_0;
  for (int VAR_26 = 1; VAR_26 < VAR_13; VAR_26++) {
   FUNC_0(VAR_23, VAR_14[VAR_26]);
  }
 }

 int VAR_27 = FUNC_13(VAR_21, VAR_16, VAR_23, &VAR_22);

 FUNC_2(VAR_23);
 FUNC_9(VAR_21);

 return (VAR_27);
}
