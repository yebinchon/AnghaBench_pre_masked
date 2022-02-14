
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvlist_t ;


 char* VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int *,char const*) ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 int * FUNC_3 (char const*,char*) ;
 int FUNC_4 (char const*,char const*,int *) ;

__attribute__((used)) static void
FUNC_5(const char *VAR_2, const char *VAR_3, nvlist_t *VAR_4)
{





 if (FUNC_3(VAR_2, "ereport.fs.zfs.") != ((void*)0) ||
     FUNC_3(VAR_2, "resource.fs.zfs.") != ((void*)0) ||
     FUNC_2(VAR_2, "sysevent.fs.zfs.vdev_remove") == 0 ||
     FUNC_2(VAR_2, "sysevent.fs.zfs.vdev_remove_dev") == 0 ||
     FUNC_2(VAR_2, "sysevent.fs.zfs.pool_destroy") == 0) {
  FUNC_1(FUNC_0("zfs-diagnosis"), VAR_4, VAR_2);
 }
 if (FUNC_2(VAR_2, VAR_1) == 0 ||
     FUNC_2(VAR_2, "resource.fs.zfs.removed") == 0 ||
     FUNC_2(VAR_2, "resource.fs.zfs.statechange") == 0 ||
     FUNC_2(VAR_2, "sysevent.fs.zfs.vdev_remove") == 0) {
  FUNC_1(FUNC_0("zfs-retire"), VAR_4, VAR_2);
 }







 if (FUNC_3(VAR_2, "EC_dev_") != ((void*)0) ||
     FUNC_2(VAR_2, VAR_0) == 0) {
  (void) FUNC_4(VAR_2, VAR_3, VAR_4);
 }
}
