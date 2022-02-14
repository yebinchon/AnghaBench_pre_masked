
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int vdev_initialize_state; int vdev_path; int vdev_initialize_action_time; int vdev_guid; int * vdev_spa; int vdev_initialize_lock; } ;
typedef TYPE_1__ vdev_t ;
typedef int vdev_initializing_state_t ;
typedef int uint64_t ;
typedef int spa_t ;
typedef int dmu_tx_t ;
struct TYPE_6__ {int dp_mos_dir; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int VAR_1 ;




 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (TYPE_3__*,int ,int *,int,int ,int *) ;
 int FUNC_7 () ;
 int * FUNC_8 (int,int ) ;
 int FUNC_9 (char*,unsigned long long) ;
 TYPE_3__* FUNC_10 (int *) ;
 int FUNC_11 (int *,char*,int *,char*,int ) ;
 int FUNC_12 (int *) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_13(vdev_t *VAR_4, vdev_initializing_state_t VAR_5)
{
 FUNC_0(FUNC_1(&VAR_4->vdev_initialize_lock));
 spa_t *VAR_6 = VAR_4->vdev_spa;

 if (VAR_5 == VAR_4->vdev_initialize_state)
  return;




 uint64_t *VAR_7 = FUNC_8(sizeof (uint64_t), VAR_0);
 *VAR_7 = VAR_4->vdev_guid;




 if (VAR_4->vdev_initialize_state != 128) {
  VAR_4->vdev_initialize_action_time = FUNC_7();
 }
 VAR_4->vdev_initialize_state = VAR_5;

 dmu_tx_t *VAR_8 = FUNC_5(FUNC_10(VAR_6)->dp_mos_dir);
 FUNC_2(FUNC_3(VAR_8, VAR_1));
 FUNC_6(FUNC_10(VAR_6), VAR_3,
     VAR_7, 2, VAR_2, VAR_8);

 switch (VAR_5) {
 case 131:
  FUNC_11(VAR_6, "initialize", VAR_8,
      "vdev=%s activated", VAR_4->vdev_path);
  break;
 case 128:
  FUNC_11(VAR_6, "initialize", VAR_8,
      "vdev=%s suspended", VAR_4->vdev_path);
  break;
 case 130:
  FUNC_11(VAR_6, "initialize", VAR_8,
      "vdev=%s canceled", VAR_4->vdev_path);
  break;
 case 129:
  FUNC_11(VAR_6, "initialize", VAR_8,
      "vdev=%s complete", VAR_4->vdev_path);
  break;
 default:
  FUNC_9("invalid state %llu", (unsigned long long)VAR_5);
 }

 FUNC_4(VAR_8);

 if (VAR_5 != 131)
  FUNC_12(VAR_6);
}
