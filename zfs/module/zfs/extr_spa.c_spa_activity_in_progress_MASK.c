
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int zpool_wait_activity_t ;
typedef int uint64_t ;
struct TYPE_15__ {int sr_state; } ;
struct TYPE_18__ {TYPE_2__* spa_dsl_pool; TYPE_1__ spa_removing_phys; int spa_root_vdev; int spa_activities_lock; } ;
typedef TYPE_4__ spa_t ;
struct TYPE_17__ {int scn_state; int scn_func; } ;
struct TYPE_19__ {TYPE_3__ scn_phys; } ;
typedef TYPE_5__ dsl_scan_t ;
typedef int boolean_t ;
struct TYPE_16__ {TYPE_5__* dp_scan; int dp_free_bpobj; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;







 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (TYPE_4__*,int,int ,int ) ;
 int FUNC_8 (TYPE_4__*,int,int ) ;
 int FUNC_9 (TYPE_4__*,int ) ;
 int FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (TYPE_4__*) ;
 int FUNC_12 (TYPE_4__*,int,int ,int*) ;
 int FUNC_13 (TYPE_4__*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_16(spa_t *VAR_12, zpool_wait_activity_t VAR_13,
    boolean_t VAR_14, uint64_t VAR_15, boolean_t *VAR_16)
{
 int VAR_17 = 0;

 FUNC_0(FUNC_1(&VAR_12->spa_activities_lock));

 switch (VAR_13) {
 case 134:
  *VAR_16 =
      (FUNC_9(VAR_12, VAR_10) &&
      FUNC_15(FUNC_11(VAR_12),
      VAR_0, VAR_1) ==
      VAR_3);
  break;
 case 133:
  *VAR_16 = ((FUNC_13(VAR_12) >= VAR_11 &&
      !FUNC_2(&VAR_12->spa_dsl_pool->dp_free_bpobj)) ||
      FUNC_9(VAR_12, VAR_9) ||
      FUNC_10(VAR_12));
  break;
 case 132:
  VAR_17 = FUNC_12(VAR_12, VAR_14, VAR_15, VAR_16);
  break;
 case 130:
  FUNC_5(&VAR_12->spa_activities_lock);
  FUNC_7(VAR_12, VAR_7 | VAR_8, VAR_4, VAR_6);
  FUNC_4(&VAR_12->spa_activities_lock);

  *VAR_16 = FUNC_14(VAR_12->spa_root_vdev);
  FUNC_8(VAR_12, VAR_7 | VAR_8, VAR_4);
  break;
 case 131:
  *VAR_16 = (VAR_12->spa_removing_phys.sr_state ==
      VAR_2);
  break;
 case 129:
 case 128:
 {
  boolean_t VAR_18, VAR_19, VAR_20;
  dsl_scan_t *VAR_21 = VAR_12->spa_dsl_pool->dp_scan;

  VAR_20 = (VAR_21->scn_phys.scn_func == VAR_5);
  VAR_18 = (VAR_21->scn_phys.scn_state == VAR_2);
  VAR_19 = FUNC_3(VAR_21);
  *VAR_16 = (VAR_18 && !VAR_19 &&
      VAR_20 == (VAR_13 == 128));
  break;
 }
 default:
  FUNC_6("unrecognized value for activity %d", VAR_13);
 }

 return (VAR_17);
}
