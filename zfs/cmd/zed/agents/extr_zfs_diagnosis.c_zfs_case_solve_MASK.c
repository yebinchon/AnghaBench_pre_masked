
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ zc_pool_guid; scalar_t__ zc_vdev_guid; scalar_t__ zc_has_remove_timer; } ;
struct TYPE_6__ {TYPE_1__ zc_data; int zc_remove_timer; int zc_case; } ;
typedef TYPE_2__ zfs_case_t ;
typedef int nvlist_t ;
typedef int fmd_hdl_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,int ,int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,char*,char const*) ;
 int * FUNC_3 (int *,int ) ;
 int * FUNC_4 (int *,char const*,int,int *,int *,int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int *,int ,scalar_t__) ;
 int FUNC_8 (int *,int ,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_11(fmd_hdl_t *VAR_9, zfs_case_t *VAR_10, const char *VAR_11,
    boolean_t VAR_12)
{
 nvlist_t *VAR_13, *VAR_14;
 boolean_t VAR_15;
 nvlist_t *VAR_16 = ((void*)0);
 FUNC_2(VAR_9, "solving fault '%s'", VAR_11);






 VAR_13 = FUNC_3(VAR_9, VAR_2);

 (void) FUNC_8(VAR_13, VAR_7, VAR_8);
 (void) FUNC_6(VAR_13, VAR_3, VAR_4);
 (void) FUNC_7(VAR_13, VAR_5,
     VAR_10->zc_data.zc_pool_guid);
 if (VAR_10->zc_data.zc_vdev_guid != 0) {
  (void) FUNC_7(VAR_13, VAR_6,
      VAR_10->zc_data.zc_vdev_guid);
 }

 VAR_14 = FUNC_4(VAR_9, VAR_11, 100, VAR_13,
     VAR_16, VAR_13);
 FUNC_0(VAR_9, VAR_10->zc_case, VAR_14);

 FUNC_9(VAR_16);

 FUNC_1(VAR_9, VAR_10->zc_case);

 VAR_15 = VAR_0;
 if (VAR_10->zc_data.zc_has_remove_timer) {
  FUNC_5(VAR_9, VAR_10->zc_remove_timer);
  VAR_10->zc_data.zc_has_remove_timer = 0;
  VAR_15 = VAR_1;
 }
 if (VAR_15)
  FUNC_10(VAR_9, VAR_10);

 FUNC_9(VAR_13);
}
