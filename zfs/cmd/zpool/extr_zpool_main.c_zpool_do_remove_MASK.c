
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zpool_handle_t ;
typedef int valstr ;
typedef scalar_t__ uint64_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_3 ;
 int FUNC_1 (int,char**,char*) ;
 char* FUNC_2 (char*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (char*,char*,...) ;
 int VAR_6 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,char*,int) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int ,char*) ;
 scalar_t__ FUNC_8 (int *,char*,scalar_t__*) ;
 scalar_t__ FUNC_9 (int *,char*) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (int *,int ) ;

int
FUNC_12(int VAR_7, char **VAR_8)
{
 char *VAR_9;
 int VAR_10, VAR_11 = 0;
 zpool_handle_t *VAR_12 = ((void*)0);
 boolean_t VAR_13 = VAR_0;
 int VAR_14;
 boolean_t VAR_15 = VAR_0;
 boolean_t VAR_16 = VAR_0;
 boolean_t VAR_17 = VAR_0;


 while ((VAR_14 = FUNC_1(VAR_7, VAR_8, "npsw")) != -1) {
  switch (VAR_14) {
  case 'n':
   VAR_15 = VAR_1;
   break;
  case 'p':
   VAR_16 = VAR_1;
   break;
  case 's':
   VAR_13 = VAR_1;
   break;
  case 'w':
   VAR_17 = VAR_1;
   break;
  case '?':
   (void) FUNC_0(VAR_6, FUNC_2("invalid option '%c'\n"),
       VAR_5);
   FUNC_4(VAR_0);
  }
 }

 VAR_7 -= VAR_4;
 VAR_8 += VAR_4;


 if (VAR_7 < 1) {
  (void) FUNC_0(VAR_6, "%s", FUNC_2("missing pool name argument\n"));
  FUNC_4(VAR_0);
 }

 VAR_9 = VAR_8[0];

 if ((VAR_12 = FUNC_7(VAR_3, VAR_9)) == ((void*)0))
  return (1);

 if (VAR_13 && VAR_15) {
  (void) FUNC_0(VAR_6, "%s", FUNC_2("stop request ignored\n"));
  return (0);
 }

 if (VAR_13) {
  if (VAR_7 > 1) {
   (void) FUNC_0(VAR_6, "%s", FUNC_2("too many arguments\n"));
   FUNC_4(VAR_0);
  }
  if (FUNC_10(VAR_12) != 0)
   VAR_11 = 1;
  if (VAR_17) {
   (void) FUNC_0(VAR_6, "%s", FUNC_2("invalid option "
       "combination: -w cannot be used with -s\n"));
   FUNC_4(VAR_0);
  }
 } else {
  if (VAR_7 < 2) {
   (void) FUNC_0(VAR_6, "%s", FUNC_2("missing device\n"));
   FUNC_4(VAR_0);
  }

  for (VAR_10 = 1; VAR_10 < VAR_7; VAR_10++) {
   if (VAR_15) {
    uint64_t VAR_18;

    if (FUNC_8(VAR_12, VAR_8[VAR_10],
        &VAR_18) != 0) {
     VAR_11 = 1;
     break;
    }
    if (VAR_16) {
     (void) FUNC_3("%s %llu\n",
         VAR_8[VAR_10], (unsigned long long)VAR_18);
    } else {
     char VAR_19[32];
     FUNC_5(VAR_18, VAR_19,
         sizeof (VAR_19));
     (void) FUNC_3("Memory that will be "
         "used after removing %s: %s\n",
         VAR_8[VAR_10], VAR_19);
    }
   } else {
    if (FUNC_9(VAR_12, VAR_8[VAR_10]) != 0)
     VAR_11 = 1;
   }
  }

  if (VAR_11 == 0 && VAR_17)
   VAR_11 = FUNC_11(VAR_12, VAR_2);
 }
 FUNC_6(VAR_12);

 return (VAR_11);
}
