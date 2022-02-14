
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int zfs_name; int * zfs_hdl; } ;
typedef TYPE_1__ zfs_handle_t ;
struct mnttab {char const* mnt_mountp; } ;
typedef int libzfs_handle_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *,int ,struct mnttab*) ;
 int FUNC_2 (int *,int ) ;
 int VAR_8 ;
 scalar_t__ FUNC_3 (int *,char*,int) ;
 scalar_t__ FUNC_4 (TYPE_1__*,scalar_t__*,int *) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int *,int ) ;
 scalar_t__ FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 char* FUNC_11 (int *,char const*) ;
 scalar_t__ FUNC_12 (TYPE_1__*,char*,int ) ;

int
FUNC_13(zfs_handle_t *VAR_9, const char *VAR_10, int VAR_11)
{
 libzfs_handle_t *VAR_12 = VAR_9->zfs_hdl;
 struct mnttab VAR_13;
 char *VAR_14 = ((void*)0);
 boolean_t VAR_15, VAR_16 = VAR_0;


 if (VAR_10 != ((void*)0) || ((FUNC_6(VAR_9) == VAR_6) &&
     FUNC_1(VAR_12, VAR_9->zfs_name, &VAR_13) == 0)) {






  if (VAR_10 == ((void*)0))
   VAR_14 = FUNC_11(VAR_12, VAR_13.mnt_mountp);
  else
   VAR_14 = FUNC_11(VAR_12, VAR_10);




  if (FUNC_12(VAR_9, VAR_14, VAR_8) != 0) {
   FUNC_0(VAR_14);
   return (-1);
  }

  if (FUNC_3(VAR_12, VAR_14, VAR_11) != 0) {
   FUNC_0(VAR_14);
   (void) FUNC_10(VAR_9);
   return (-1);
  }

  FUNC_2(VAR_12, VAR_9->zfs_name);
  FUNC_0(VAR_14);
  VAR_16 = VAR_1;
 }






 if ((VAR_11 & VAR_2) != 0 &&
     FUNC_8(VAR_9, VAR_4) != VAR_7) {
  FUNC_9(VAR_9);

  if (FUNC_4(VAR_9, &VAR_15, ((void*)0)) != 0 &&
      VAR_16) {
   (void) FUNC_7(VAR_9, ((void*)0), 0);
   return (-1);
  }

  if (VAR_15 && FUNC_8(VAR_9, VAR_5) ==
      VAR_3 &&
      FUNC_5(VAR_9) != 0) {
   (void) FUNC_7(VAR_9, ((void*)0), 0);
   return (-1);
  }
 }

 return (0);
}
