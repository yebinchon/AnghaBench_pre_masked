
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zpool_handle_t ;
typedef int vdev_aux_t ;
typedef scalar_t__ uint64_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_4 ;
 int FUNC_1 (int,char**,char*) ;
 char* FUNC_2 (char*) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int ,char*) ;
 scalar_t__ FUNC_6 (int *,scalar_t__,int ) ;
 scalar_t__ FUNC_7 (int *,char*,scalar_t__) ;
 scalar_t__ FUNC_8 (int *,char*) ;

int
FUNC_9(int VAR_8, char **VAR_9)
{
 int VAR_10, VAR_11;
 char *VAR_12;
 zpool_handle_t *VAR_13;
 int VAR_14 = 0;
 boolean_t VAR_15 = VAR_0;
 boolean_t VAR_16 = VAR_0;


 while ((VAR_10 = FUNC_1(VAR_8, VAR_9, "ft")) != -1) {
  switch (VAR_10) {
  case 'f':
   VAR_16 = VAR_1;
   break;
  case 't':
   VAR_15 = VAR_1;
   break;
  case '?':
   (void) FUNC_0(VAR_7, FUNC_2("invalid option '%c'\n"),
       VAR_6);
   FUNC_3(VAR_0);
  }
 }

 VAR_8 -= VAR_5;
 VAR_9 += VAR_5;


 if (VAR_8 < 1) {
  (void) FUNC_0(VAR_7, "%s", FUNC_2("missing pool name\n"));
  FUNC_3(VAR_0);
 }
 if (VAR_8 < 2) {
  (void) FUNC_0(VAR_7, "%s", FUNC_2("missing device name\n"));
  FUNC_3(VAR_0);
 }

 VAR_12 = VAR_9[0];

 if ((VAR_13 = FUNC_5(VAR_4, VAR_12)) == ((void*)0))
  return (1);

 for (VAR_11 = 1; VAR_11 < VAR_8; VAR_11++) {
  if (VAR_16) {
   uint64_t VAR_17 = FUNC_8(VAR_13, VAR_9[VAR_11]);
   vdev_aux_t VAR_18;
   if (VAR_15 == VAR_0) {

    VAR_18 = VAR_3;
   } else {
    VAR_18 = VAR_2;
   }

   if (VAR_17 == 0 || FUNC_6(VAR_13, VAR_17, VAR_18) != 0)
    VAR_14 = 1;
  } else {
   if (FUNC_7(VAR_13, VAR_9[VAR_11], VAR_15) != 0)
    VAR_14 = 1;
  }
 }

 FUNC_4(VAR_13);

 return (VAR_14);
}
