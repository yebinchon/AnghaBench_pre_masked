
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zpool_handle_t ;
typedef int pool ;
typedef int nvpair_t ;
typedef int nvlist_t ;
typedef int libzfs_handle_t ;
typedef int errbuf ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char* FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int **) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *,int *) ;
 char const* FUNC_5 (int *) ;
 int FUNC_6 (char*,int,char*,...) ;
 size_t FUNC_7 (char*,char*) ;
 int FUNC_8 (char*,char const*,int) ;
 int FUNC_9 (int *,int ,char*) ;
 int FUNC_10 (int *,char*) ;
 int FUNC_11 (int *,int,char*) ;
 int * FUNC_12 (int *,int ,int *,int ,int *,int *,int ,char*) ;
 int FUNC_13 (int *,char const*,int ,int ) ;
 int FUNC_14 (int *) ;
 int * FUNC_15 (int *,char*) ;

int
FUNC_16(libzfs_handle_t *VAR_7, nvlist_t *VAR_8, nvlist_t *VAR_9)
{
 int VAR_10;
 char VAR_11[1024];
 nvpair_t *VAR_12;
 nvlist_t *VAR_13;
 zpool_handle_t *VAR_14;
 char VAR_15[VAR_5];

 (void) FUNC_6(VAR_11, sizeof (VAR_11), FUNC_0(VAR_4,
     "cannot create snapshots "));

 VAR_12 = ((void*)0);
 while ((VAR_12 = FUNC_4(VAR_8, VAR_12)) != ((void*)0)) {
  const char *VAR_16 = FUNC_5(VAR_12);


  if (!FUNC_13(VAR_7, VAR_16, VAR_6,
      VAR_1)) {
   (void) FUNC_6(VAR_11, sizeof (VAR_11),
       FUNC_0(VAR_4,
       "cannot create snapshot '%s'"), VAR_16);
   return (FUNC_9(VAR_7, VAR_3, VAR_11));
  }
 }





 VAR_12 = FUNC_4(VAR_8, ((void*)0));
 (void) FUNC_8(VAR_15, FUNC_5(VAR_12), sizeof (VAR_15));
 VAR_15[FUNC_7(VAR_15, "/@")] = '\0';
 VAR_14 = FUNC_15(VAR_7, VAR_15);
 if (VAR_14 == ((void*)0))
  return (-1);

 if (VAR_9 != ((void*)0) &&
     (VAR_9 = FUNC_12(VAR_7, VAR_6,
     VAR_9, VAR_0, ((void*)0), VAR_14, VAR_0, VAR_11)) == ((void*)0)) {
  FUNC_14(VAR_14);
  return (-1);
 }
 FUNC_14(VAR_14);

 VAR_10 = FUNC_2(VAR_8, VAR_9, &VAR_13);

 if (VAR_10 != 0) {
  boolean_t VAR_17 = VAR_0;
  for (VAR_12 = FUNC_4(VAR_13, ((void*)0));
      VAR_12 != ((void*)0);
      VAR_12 = FUNC_4(VAR_13, VAR_12)) {
   (void) FUNC_6(VAR_11, sizeof (VAR_11),
       FUNC_0(VAR_4,
       "cannot create snapshot '%s'"), FUNC_5(VAR_12));
   (void) FUNC_11(VAR_7,
       FUNC_1(VAR_12), VAR_11);
   VAR_17 = VAR_1;
  }
  if (!VAR_17) {
   switch (VAR_10) {
   case 128:
    FUNC_10(VAR_7, FUNC_0(VAR_4,
        "multiple snapshots of same "
        "fs not allowed"));
    (void) FUNC_9(VAR_7, VAR_2, VAR_11);

    break;
   default:
    (void) FUNC_11(VAR_7, VAR_10, VAR_11);
   }
  }
 }

 FUNC_3(VAR_9);
 FUNC_3(VAR_13);
 return (VAR_10);
}
