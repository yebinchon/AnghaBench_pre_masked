
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zpool_handle_t ;
typedef scalar_t__ uint64_t ;
typedef int u_longlong_t ;
typedef int tmpbuf ;
typedef int nvlist_t ;
typedef int libzfs_handle_t ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* VAR_5 ;
 char* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int *,int ,char**) ;
 scalar_t__ FUNC_3 (int *,int ,scalar_t__*) ;
 char* FUNC_4 (char*,int *) ;
 int FUNC_5 (char*,int,char*,char*,...) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,char*,int) ;
 int FUNC_8 (char*,char*,int) ;
 scalar_t__ FUNC_9 (char*,int *,int ) ;
 int FUNC_10 (int) ;
 char* FUNC_11 (int *,char*) ;
 char* FUNC_12 (char*) ;
 char* FUNC_13 (char*) ;
 char* FUNC_14 (int *) ;

char *
FUNC_15(libzfs_handle_t *VAR_14, zpool_handle_t *VAR_15, nvlist_t *VAR_16,
    int VAR_17)
{
 char *VAR_18, *VAR_19, *VAR_20;
 uint64_t VAR_21;
 char VAR_22[VAR_0];
 char VAR_23[VAR_0];





 FUNC_10(FUNC_2(VAR_16, VAR_12, &VAR_19) == 0);
 if (VAR_15 != ((void*)0) && FUNC_6(VAR_19, "root") == 0)
  return (FUNC_11(VAR_14, FUNC_14(VAR_15)));

 VAR_20 = FUNC_1("ZPOOL_VDEV_NAME_PATH");
 if (VAR_20 && (FUNC_9(VAR_20, ((void*)0), 0) > 0 ||
     !FUNC_8(VAR_20, "YES", 3) || !FUNC_8(VAR_20, "ON", 2)))
  VAR_17 |= VAR_3;

 VAR_20 = FUNC_1("ZPOOL_VDEV_NAME_GUID");
 if (VAR_20 && (FUNC_9(VAR_20, ((void*)0), 0) > 0 ||
     !FUNC_8(VAR_20, "YES", 3) || !FUNC_8(VAR_20, "ON", 2)))
  VAR_17 |= VAR_2;

 VAR_20 = FUNC_1("ZPOOL_VDEV_NAME_FOLLOW_LINKS");
 if (VAR_20 && (FUNC_9(VAR_20, ((void*)0), 0) > 0 ||
     !FUNC_8(VAR_20, "YES", 3) || !FUNC_8(VAR_20, "ON", 2)))
  VAR_17 |= VAR_1;

 if (FUNC_3(VAR_16, VAR_9, &VAR_21) == 0 ||
     VAR_17 & VAR_2) {
  (void) FUNC_3(VAR_16, VAR_7, &VAR_21);
  (void) FUNC_5(VAR_22, sizeof (VAR_22), "%llu", (u_longlong_t)VAR_21);
  VAR_18 = VAR_22;
 } else if (FUNC_2(VAR_16, VAR_11, &VAR_18) == 0) {
  if (VAR_17 & VAR_1) {
   char *VAR_24 = FUNC_4(VAR_18, ((void*)0));
   if (VAR_24) {
    FUNC_7(VAR_22, VAR_24, sizeof (VAR_22));
    VAR_18 = VAR_22;
    FUNC_0(VAR_24);
   }
  }




  if ((FUNC_6(VAR_19, VAR_5) == 0) &&
      !(VAR_17 & VAR_3)) {
   VAR_18 = FUNC_13(VAR_18);
  }




  if (FUNC_3(VAR_16, VAR_13, &VAR_21)
      == 0 && VAR_21 && !(VAR_17 & VAR_3)) {
   return (FUNC_12(VAR_18));
  }
 } else {
  VAR_18 = VAR_19;




  if (FUNC_6(VAR_18, VAR_6) == 0) {
   FUNC_10(FUNC_3(VAR_16, VAR_10,
       &VAR_21) == 0);
   (void) FUNC_5(VAR_22, sizeof (VAR_22), "%s%llu", VAR_18,
       (u_longlong_t)VAR_21);
   VAR_18 = VAR_22;
  }





  if (VAR_17 & VAR_4) {
   uint64_t VAR_25;
   FUNC_10(FUNC_3(VAR_16, VAR_8,
       &VAR_25) == 0);
   (void) FUNC_5(VAR_23, sizeof (VAR_23), "%s-%llu",
       VAR_18, (u_longlong_t)VAR_25);
   VAR_18 = VAR_23;
  }
 }

 return (FUNC_11(VAR_14, VAR_18));
}
