
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int zpool_handle_t ;
typedef int zfs_prop_t ;
struct TYPE_6__ {int zfs_hdl; } ;
typedef TYPE_1__ zfs_handle_t ;
typedef scalar_t__ uint64_t ;
typedef int nvlist_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,scalar_t__) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *,int ,scalar_t__) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (int *,int ,scalar_t__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (TYPE_1__*,int *) ;
 int * FUNC_10 (TYPE_1__*) ;
 scalar_t__ FUNC_11 (int *,scalar_t__,int *) ;

int
FUNC_12(zfs_handle_t *VAR_2, nvlist_t *VAR_3)
{
 uint64_t VAR_4;
 uint64_t VAR_5;
 uint64_t VAR_6;
 uint64_t VAR_7;
 zfs_prop_t VAR_8;
 nvlist_t *VAR_9;
 zpool_handle_t *VAR_10 = FUNC_10(VAR_2);





 VAR_4 = FUNC_7(VAR_2, VAR_1);
 if (FUNC_9(VAR_2, &VAR_8) < 0)
  return (-1);
 VAR_6 = FUNC_7(VAR_2, VAR_8);

 VAR_9 = FUNC_1();
 FUNC_0(VAR_9, FUNC_8(VAR_0),
     FUNC_7(VAR_2, VAR_0));

 if ((FUNC_11(VAR_10, VAR_4, VAR_9) !=
     VAR_6) || FUNC_5(VAR_3,
     FUNC_8(VAR_8))) {
  FUNC_2(VAR_9);
  return (0);
 }
 if (FUNC_6(VAR_3, FUNC_8(VAR_1),
     &VAR_5) != 0) {
  FUNC_2(VAR_9);
  return (-1);
 }
 VAR_7 = FUNC_11(VAR_10, VAR_5, VAR_9);
 FUNC_2(VAR_9);

 if (FUNC_4(VAR_3, FUNC_8(VAR_8),
     VAR_7) != 0) {
  (void) FUNC_3(VAR_2->zfs_hdl);
  return (-1);
 }
 return (1);
}
