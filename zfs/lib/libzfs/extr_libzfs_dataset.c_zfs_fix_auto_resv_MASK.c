
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ zfs_prop_t ;
struct TYPE_7__ {int zfs_hdl; } ;
typedef TYPE_1__ zfs_handle_t ;
typedef scalar_t__ uint64_t ;
typedef int nvlist_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *,int ,scalar_t__) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *,int ,scalar_t__) ;
 scalar_t__ FUNC_6 (int *,int ,scalar_t__*) ;
 int FUNC_7 (int *,int ) ;
 scalar_t__ FUNC_8 (TYPE_1__*,scalar_t__) ;
 int FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (TYPE_1__*,scalar_t__*) ;
 int FUNC_11 (TYPE_1__*) ;
 scalar_t__ FUNC_12 (int ,scalar_t__,int *) ;

__attribute__((used)) static int
FUNC_13(zfs_handle_t *VAR_4, nvlist_t *VAR_5)
{
 uint64_t VAR_6;
 uint64_t VAR_7;
 zfs_prop_t VAR_8;
 nvlist_t *VAR_9;

 if (!FUNC_0(VAR_4)) {
  return (0);
 }

 if (FUNC_10(VAR_4, &VAR_8) != 0) {
  return (-1);
 }

 if (VAR_8 != VAR_1) {
  return (0);
 }

 if (FUNC_6(VAR_5, FUNC_9(VAR_8), &VAR_7) != 0) {

  return (0);
 }
 if (VAR_7 != VAR_0) {

  return (0);
 }

 VAR_9 = FUNC_2();

 FUNC_1(VAR_9, FUNC_9(VAR_2),
     FUNC_8(VAR_4, VAR_2));

 if (FUNC_6(VAR_5, FUNC_9(VAR_3),
     &VAR_6) != 0) {
  VAR_6 = FUNC_8(VAR_4, VAR_3);
 }

 VAR_7 = FUNC_12(FUNC_11(VAR_4), VAR_6,
     VAR_9);
 FUNC_3(VAR_9);

 (void) FUNC_7(VAR_5, FUNC_9(VAR_8));
 if (FUNC_5(VAR_5, FUNC_9(VAR_8), VAR_7) != 0) {
  (void) FUNC_4(VAR_4->zfs_hdl);
  return (-1);
 }
 return (1);
}
