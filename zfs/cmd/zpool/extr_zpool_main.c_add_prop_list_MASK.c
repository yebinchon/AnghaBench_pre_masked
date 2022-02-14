
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ zpool_prop_t ;
typedef int zfs_prop_t ;
typedef int nvlist_t ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,char*,...) ;
 char* FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int *,char const*,char*) ;
 scalar_t__ FUNC_3 (int **,int ,int ) ;
 scalar_t__ FUNC_4 (int *,char const*) ;
 scalar_t__ FUNC_5 (int *,char const*,char**) ;
 scalar_t__ FUNC_6 (int *) ;
 int VAR_6 ;
 int FUNC_7 (char const*) ;
 char* FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (char const*) ;
 scalar_t__ FUNC_10 (char const*) ;
 scalar_t__ FUNC_11 (int ,int ,int ) ;
 scalar_t__ FUNC_12 (char const*) ;
 scalar_t__ FUNC_13 (char const*) ;
 char* FUNC_14 (scalar_t__) ;

__attribute__((used)) static int
FUNC_15(const char *VAR_7, char *VAR_8, nvlist_t **VAR_9,
    boolean_t VAR_10)
{
 zpool_prop_t VAR_11 = VAR_4;
 nvlist_t *VAR_12;
 const char *VAR_13;
 char *VAR_14;

 if (*VAR_9 == ((void*)0) &&
     FUNC_3(VAR_9, VAR_1, 0) != 0) {
  (void) FUNC_0(VAR_6,
      "%s", FUNC_1("internal error: out of memory\n"));
  return (1);
 }

 VAR_12 = *VAR_9;

 if (VAR_10) {
  const char *VAR_15 = FUNC_14(VAR_5);

  if ((VAR_11 = FUNC_12(VAR_7)) == VAR_4 &&
      !FUNC_13(VAR_7)) {
   (void) FUNC_0(VAR_6, FUNC_1("property '%s' is "
       "not a valid pool property\n"), VAR_7);
   return (2);
  }





  if ((VAR_11 == VAR_4 && FUNC_13(VAR_7) &&
      FUNC_4(VAR_12, VAR_15)) ||
      (VAR_11 == VAR_5 &&
      FUNC_6(VAR_12))) {
   (void) FUNC_0(VAR_6, "%s", FUNC_1("'feature@' and "
       "'version' properties cannot be specified "
       "together\n"));
   return (2);
  }


  if (FUNC_13(VAR_7))
   VAR_13 = VAR_7;
  else
   VAR_13 = FUNC_14(VAR_11);
 } else {
  zfs_prop_t VAR_16 = FUNC_7(VAR_7);

  if (FUNC_11(VAR_16, VAR_2,
      VAR_0)) {
   VAR_13 = FUNC_8(VAR_16);
  } else if (FUNC_9(VAR_7) ||
      FUNC_10(VAR_7)) {
   VAR_13 = VAR_7;
  } else {
   (void) FUNC_0(VAR_6, FUNC_1("property '%s' is "
       "not a valid filesystem property\n"), VAR_7);
   return (2);
  }
 }

 if (FUNC_5(VAR_12, VAR_13, &VAR_14) == 0 &&
     VAR_11 != VAR_3) {
  (void) FUNC_0(VAR_6, FUNC_1("property '%s' "
      "specified multiple times\n"), VAR_7);
  return (2);
 }

 if (FUNC_2(VAR_12, VAR_13, VAR_8) != 0) {
  (void) FUNC_0(VAR_6, "%s", FUNC_1("internal "
      "error: out of memory\n"));
  return (1);
 }

 return (0);
}
