
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zpool_handle_t ;
typedef void* boolean_t ;


 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_2 ;
 int FUNC_1 (int,char**,char*) ;
 char* FUNC_2 (char*) ;
 int VAR_3 ;
 void* VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * FUNC_3 (char*,char) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int ) ;
 scalar_t__ FUNC_7 (int *,void*) ;
 char* FUNC_8 (int *) ;
 int * FUNC_9 (int ,char*) ;

int
FUNC_10(int VAR_8, char **VAR_9)
{
 boolean_t VAR_10 = VAR_0;
 int VAR_11;
 char *VAR_12;
 zpool_handle_t *VAR_13;
 int VAR_14;


 while ((VAR_11 = FUNC_1(VAR_8, VAR_9, "f")) != -1) {
  switch (VAR_11) {
  case 'f':
   VAR_10 = VAR_1;
   break;
  case '?':
   (void) FUNC_0(VAR_7, FUNC_2("invalid option '%c'\n"),
       VAR_6);
   FUNC_4(VAR_0);
  }
 }

 VAR_8 -= VAR_5;
 VAR_9 += VAR_5;


 if (VAR_8 < 1) {
  (void) FUNC_0(VAR_7, "%s", FUNC_2("missing pool argument\n"));
  FUNC_4(VAR_0);
 }
 if (VAR_8 > 1) {
  (void) FUNC_0(VAR_7, "%s", FUNC_2("too many arguments\n"));
  FUNC_4(VAR_0);
 }

 VAR_12 = VAR_9[0];

 if ((VAR_13 = FUNC_9(VAR_2, VAR_12)) == ((void*)0)) {




  if (FUNC_3(VAR_12, '/') != ((void*)0))
   (void) FUNC_0(VAR_7, "%s", FUNC_2("use 'zfs destroy' to "
       "destroy a dataset\n"));
  return (1);
 }

 if (FUNC_7(VAR_13, VAR_10) != 0) {
  (void) FUNC_0(VAR_7, FUNC_2("could not destroy '%s': "
      "could not unmount datasets\n"), FUNC_8(VAR_13));
  FUNC_5(VAR_13);
  return (1);
 }


 VAR_4 = VAR_0;

 VAR_14 = (FUNC_6(VAR_13, VAR_3) != 0);

 FUNC_5(VAR_13);

 return (VAR_14);
}
