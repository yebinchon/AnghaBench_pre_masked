
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int vdev_t ;
struct TYPE_9__ {int spa_import_flags; scalar_t__ spa_load_state; int spa_l2cache; int spa_spares; int * spa_root_vdev; scalar_t__ spa_autoreplace; int spa_load_info; } ;
typedef TYPE_1__ spa_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_4 (TYPE_1__*,int ,int ) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,char*,int) ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int *,int ,int) ;
 int FUNC_10 (int *,int ,int ,int ) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int
FUNC_12(spa_t *VAR_12)
{
 int VAR_13 = 0;
 vdev_t *VAR_14 = VAR_12->spa_root_vdev;






 if (FUNC_8(VAR_12) && FUNC_5(VAR_12) == 0 &&
     (VAR_12->spa_import_flags & VAR_10) == 0) {
  FUNC_0(VAR_12->spa_load_info,
      VAR_11, VAR_3);
  return (FUNC_9(VAR_14, VAR_8, VAR_1));
 }
 if (VAR_12->spa_autoreplace && VAR_12->spa_load_state != VAR_7) {
  FUNC_2(VAR_12->spa_root_vdev);





  if (VAR_12->spa_load_state != VAR_6) {
   FUNC_1(&VAR_12->spa_spares);
   FUNC_1(&VAR_12->spa_l2cache);
  }
 }




 VAR_13 = FUNC_11(VAR_14);
 if (VAR_13 != 0) {
  FUNC_7(VAR_12, "vdev_load failed [error=%d]", VAR_13);
  return (FUNC_9(VAR_14, VAR_9, VAR_13));
 }

 VAR_13 = FUNC_6(VAR_12);
 if (VAR_13 != 0) {
  FUNC_7(VAR_12, "spa_ld_log_sm_data failed [error=%d]",
      VAR_13);
  return (FUNC_9(VAR_14, VAR_9, VAR_13));
 }




 FUNC_3(VAR_12, VAR_5, VAR_2, VAR_4);
 FUNC_10(VAR_14, 0, 0, VAR_0);
 FUNC_4(VAR_12, VAR_5, VAR_2);

 return (0);
}
