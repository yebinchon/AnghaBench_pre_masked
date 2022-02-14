
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zfs_handle_t ;
typedef scalar_t__ uint64_t ;
typedef int nvlist_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_0 () ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_6 ;
 int FUNC_2 (int,char**,char*) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (int *,int ) ;
 int VAR_10 ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,scalar_t__,int *) ;
 int FUNC_10 (int *,int *,scalar_t__) ;
 int * FUNC_11 (int ,char*,int) ;
 scalar_t__ FUNC_12 (int *,int ) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int
FUNC_14(int VAR_11, char **VAR_12)
{
 int VAR_13, VAR_14;
 uint64_t VAR_15;
 boolean_t VAR_16 = VAR_0, VAR_17 = VAR_0;
 zfs_handle_t *VAR_18 = ((void*)0);
 nvlist_t *VAR_19 = FUNC_0();

 while ((VAR_13 = FUNC_2(VAR_11, VAR_12, "lio:")) != -1) {
  switch (VAR_13) {
  case 'l':
   VAR_16 = VAR_1;
   break;
  case 'i':
   VAR_17 = VAR_1;
   break;
  case 'o':
   if (!FUNC_6(VAR_19, VAR_7)) {
    FUNC_5(VAR_19);
    return (1);
   }
   break;
  default:
   (void) FUNC_1(VAR_10,
       FUNC_3("invalid option '%c'\n"), VAR_9);
   FUNC_7(VAR_0);
  }
 }

 if (VAR_17 && !FUNC_4(VAR_19)) {
  (void) FUNC_1(VAR_10,
      "%s", FUNC_3("Properties not allowed for inheriting\n"));
  FUNC_7(VAR_0);
 }

 VAR_11 -= VAR_8;
 VAR_12 += VAR_8;

 if (VAR_11 < 1) {
  (void) FUNC_1(VAR_10, "%s", FUNC_3("Missing dataset argument\n"));
  FUNC_7(VAR_0);
 }

 if (VAR_11 > 1) {
  (void) FUNC_1(VAR_10, "%s", FUNC_3("Too many arguments\n"));
  FUNC_7(VAR_0);
 }

 VAR_18 = FUNC_11(VAR_6, VAR_12[VAR_11 - 1],
     VAR_4 | VAR_5);
 if (VAR_18 == ((void*)0))
  FUNC_7(VAR_0);

 if (VAR_16) {
  VAR_15 = FUNC_12(VAR_18, VAR_3);
  if (VAR_15 != VAR_2) {
   VAR_14 = FUNC_9(VAR_18, VAR_0, ((void*)0));
   if (VAR_14 != 0) {
    FUNC_5(VAR_19);
    FUNC_8(VAR_18);
    return (-1);
   }
  }


  FUNC_13(VAR_18);
 }

 VAR_14 = FUNC_10(VAR_18, VAR_19, VAR_17);
 if (VAR_14 != 0) {
  FUNC_5(VAR_19);
  FUNC_8(VAR_18);
  return (-1);
 }

 FUNC_5(VAR_19);
 FUNC_8(VAR_18);
 return (0);
}
