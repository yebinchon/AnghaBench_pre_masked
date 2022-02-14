
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * zpool_hdl; int zpool_name; int zpool_config; } ;
typedef TYPE_1__ zpool_handle_t ;
struct TYPE_8__ {char* member_0; uintptr_t zc_nvlist_dst; int zc_nvlist_dst_size; int zc_name; } ;
typedef TYPE_2__ zfs_cmd_t ;
struct TYPE_9__ {scalar_t__ zb_objset; scalar_t__ zb_object; } ;
typedef TYPE_3__ zbookmark_phys_t ;
typedef int uint64_t ;
typedef int nvlist_t ;
typedef int libzfs_handle_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,char*,int *) ;
 scalar_t__ FUNC_4 (int *,int ,scalar_t__) ;
 scalar_t__ FUNC_5 (int **,int ,int ) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ,int ,int*) ;
 int FUNC_8 (TYPE_3__*,int,int,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int) ;
 int VAR_9 ;
 void* FUNC_11 (int *,int) ;
 scalar_t__ FUNC_12 (int *,int ,TYPE_2__*) ;
 int FUNC_13 (int *,scalar_t__,int ) ;

int
FUNC_14(zpool_handle_t *VAR_10, nvlist_t **VAR_11)
{
 zfs_cmd_t VAR_12 = {"\0"};
 libzfs_handle_t *VAR_13 = VAR_10->zpool_hdl;
 uint64_t VAR_14;
 zbookmark_phys_t *VAR_15 = ((void*)0);
 int VAR_16;






 FUNC_10(FUNC_7(VAR_10->zpool_config, VAR_5,
     &VAR_14) == 0);
 if (VAR_14 == 0)
  return (0);
 VAR_12.zc_nvlist_dst = (uintptr_t)FUNC_11(VAR_10->zpool_hdl,
     VAR_14 * sizeof (zbookmark_phys_t));
 VAR_12.zc_nvlist_dst_size = VAR_14;
 (void) FUNC_9(VAR_12.zc_name, VAR_10->zpool_name);
 for (;;) {
  if (FUNC_12(VAR_10->zpool_hdl, VAR_4,
      &VAR_12) != 0) {
   FUNC_1((void *)(uintptr_t)VAR_12.zc_nvlist_dst);
   if (VAR_8 == VAR_0) {
    void *VAR_17;

    VAR_14 = VAR_12.zc_nvlist_dst_size;
    VAR_17 = FUNC_11(VAR_10->zpool_hdl, VAR_14 *
        sizeof (zbookmark_phys_t));
    VAR_12.zc_nvlist_dst = (uintptr_t)VAR_17;
   } else {
    return (FUNC_13(VAR_13, VAR_8,
        FUNC_0(VAR_3, "errors: List of "
        "errors unavailable")));
   }
  } else {
   break;
  }
 }
 VAR_15 = ((zbookmark_phys_t *)(uintptr_t)VAR_12.zc_nvlist_dst) +
     VAR_12.zc_nvlist_dst_size;
 VAR_14 -= VAR_12.zc_nvlist_dst_size;

 FUNC_8(VAR_15, VAR_14, sizeof (zbookmark_phys_t), VAR_9);

 FUNC_10(FUNC_5(VAR_11, 0, VAR_1) == 0);




 for (VAR_16 = 0; VAR_16 < VAR_14; VAR_16++) {
  nvlist_t *VAR_18;


  if (VAR_16 > 0 && VAR_15[VAR_16-1].zb_objset == VAR_15[VAR_16].zb_objset &&
      VAR_15[VAR_16-1].zb_object == VAR_15[VAR_16].zb_object)
   continue;

  if (FUNC_5(&VAR_18, VAR_2, VAR_1) != 0)
   goto nomem;
  if (FUNC_4(VAR_18, VAR_6,
      VAR_15[VAR_16].zb_objset) != 0) {
   FUNC_6(VAR_18);
   goto nomem;
  }
  if (FUNC_4(VAR_18, VAR_7,
      VAR_15[VAR_16].zb_object) != 0) {
   FUNC_6(VAR_18);
   goto nomem;
  }
  if (FUNC_3(*VAR_11, "ejk", VAR_18) != 0) {
   FUNC_6(VAR_18);
   goto nomem;
  }
  FUNC_6(VAR_18);
 }

 FUNC_1((void *)(uintptr_t)VAR_12.zc_nvlist_dst);
 return (0);

nomem:
 FUNC_1((void *)(uintptr_t)VAR_12.zc_nvlist_dst);
 return (FUNC_2(VAR_10->zpool_hdl));
}
