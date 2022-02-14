
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zpool_handle_t ;
typedef int vdev_state_t ;
typedef scalar_t__ uint64_t ;
typedef int nvlist_t ;
typedef int fullpath ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int ,char**) ;
 int FUNC_2 (int *,int ,scalar_t__*) ;
 int FUNC_3 (char*,char*,int) ;
 char* FUNC_4 (char*,char) ;
 int FUNC_5 (int ,char*,char*,int ,...) ;
 char* FUNC_6 (char*) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *,char*,int *,int *,int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *,int ,int *) ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *,char*,int ,int *) ;

__attribute__((used)) static int
FUNC_14(zpool_handle_t *VAR_7, void *VAR_8)
{
 char *VAR_9 = VAR_8;
 boolean_t VAR_10, VAR_11;
 nvlist_t *VAR_12;
 int VAR_13;

 FUNC_5(VAR_1, "zfsdle_vdev_online: searching for '%s' in '%s'",
     VAR_9, FUNC_9(VAR_7));

 if ((VAR_12 = FUNC_8(VAR_7, VAR_9,
     &VAR_10, &VAR_11, ((void*)0))) != ((void*)0)) {
  char *VAR_14, VAR_15[VAR_2];
  uint64_t VAR_16;

  VAR_13 = FUNC_1(VAR_12, VAR_4, &VAR_14);
  if (VAR_13) {
   FUNC_7(VAR_7);
   return (0);
  }

  VAR_13 = FUNC_2(VAR_12, VAR_5,
      &VAR_16);
  if (VAR_13)
   VAR_16 = 0;

  if (VAR_16) {
   VAR_14 = FUNC_4(VAR_14, '/');
   if (VAR_14 != ((void*)0)) {
    VAR_14 = FUNC_6(VAR_14 + 1);
    if (VAR_14 == ((void*)0)) {
     FUNC_7(VAR_7);
     return (0);
    }
   } else {
    FUNC_7(VAR_7);
    return (0);
   }

   (void) FUNC_3(VAR_15, VAR_14, sizeof (VAR_15));
   FUNC_0(VAR_14);







   boolean_t VAR_17 = VAR_0;
   (void) FUNC_12(VAR_7, &VAR_17);
  } else {
   (void) FUNC_3(VAR_15, VAR_14, sizeof (VAR_15));
  }

  if (FUNC_10(VAR_7, VAR_6, ((void*)0))) {
   vdev_state_t VAR_18;

   if (FUNC_11(VAR_7) != VAR_3) {
    VAR_13 = FUNC_13(VAR_7, VAR_15, 0,
        &VAR_18);
    FUNC_5(VAR_1, "zfsdle_vdev_online: "
        "setting device '%s' to ONLINE state "
        "in pool '%s': %d", VAR_15,
        FUNC_9(VAR_7), VAR_13);
   }
  }
  FUNC_7(VAR_7);
  return (1);
 }
 FUNC_7(VAR_7);
 return (0);
}
