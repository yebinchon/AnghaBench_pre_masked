
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zpool_handle_t ;
typedef size_t uint_t ;
typedef scalar_t__ uint64_t ;
typedef int nvlist_t ;
struct TYPE_2__ {scalar_t__ dd_vdev_guid; int dd_islabeled; int (* dd_func ) (int *,int *,int ) ;int * dd_new_devid; void* dd_found; int dd_prop; int * dd_compare; } ;
typedef TYPE_1__ dev_data_t ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*,int *) ;
 scalar_t__ FUNC_1 (int *,int ,int ***,size_t*) ;
 scalar_t__ FUNC_2 (int *,int ,char**) ;
 scalar_t__ FUNC_3 (int *,int ,scalar_t__*) ;
 scalar_t__ FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,int *,int ) ;
 int FUNC_6 (int ,char*,scalar_t__,...) ;

__attribute__((used)) static void
FUNC_7(zpool_handle_t *VAR_6, nvlist_t *VAR_7, void *VAR_8)
{
 dev_data_t *VAR_9 = VAR_8;
 char *VAR_10 = ((void*)0);
 uint_t VAR_11, VAR_12;
 nvlist_t **VAR_13;




 if (FUNC_1(VAR_7, VAR_2,
     &VAR_13, &VAR_12) == 0) {
  for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++)
   FUNC_7(VAR_6, VAR_13[VAR_11], VAR_8);
 }




 if (FUNC_1(VAR_7, VAR_5,
     &VAR_13, &VAR_12) == 0) {
  for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++)
   FUNC_7(VAR_6, VAR_13[VAR_11], VAR_8);
 }
 if (FUNC_1(VAR_7, VAR_4,
     &VAR_13, &VAR_12) == 0) {
  for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++)
   FUNC_7(VAR_6, VAR_13[VAR_11], VAR_8);
 }


 if (VAR_9->dd_found)
  return;




 if (VAR_9->dd_vdev_guid != 0) {
  uint64_t VAR_14;

  if (FUNC_3(VAR_7, VAR_3,
      &VAR_14) != 0 || VAR_14 != VAR_9->dd_vdev_guid) {
   return;
  }
  FUNC_6(VAR_1, "  zfs_iter_vdev: matched on %llu", VAR_14);
  VAR_9->dd_found = VAR_0;

 } else if (VAR_9->dd_compare != ((void*)0)) {






  if (FUNC_2(VAR_7, VAR_9->dd_prop, &VAR_10) != 0 ||
      FUNC_4(VAR_9->dd_compare, VAR_10) != 0)
   return;

  FUNC_6(VAR_1, "  zfs_iter_vdev: matched %s on %s",
      VAR_9->dd_prop, VAR_10);
  VAR_9->dd_found = VAR_0;


  if (VAR_9->dd_new_devid != ((void*)0)) {
   (void) FUNC_0(VAR_7, "new_devid",
       VAR_9->dd_new_devid);
  }
 }

 (VAR_9->dd_func)(VAR_6, VAR_7, VAR_9->dd_islabeled);
}
