
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vdev_trim_state_t ;
struct TYPE_6__ {int vdev_trim_state; scalar_t__ vdev_guid; int vdev_path; void* vdev_trim_secure; void* vdev_trim_partial; void* vdev_trim_rate; void* vdev_trim_last_offset; int vdev_trim_action_time; int * vdev_spa; int vdev_trim_lock; } ;
typedef TYPE_1__ vdev_t ;
typedef scalar_t__ uint64_t ;
typedef int spa_t ;
typedef int dmu_tx_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_7__ {int dp_mos_dir; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int VAR_6 ;
 void* VAR_7 ;




 int FUNC_2 (int ) ;
 int VAR_8 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (TYPE_3__*,int ,scalar_t__*,int,int ,int *) ;
 int FUNC_7 () ;
 scalar_t__* FUNC_8 (int,int ) ;
 int FUNC_9 (char*,unsigned long long) ;
 int FUNC_10 (int *,TYPE_1__*,int *,int ) ;
 TYPE_3__* FUNC_11 (int *) ;
 int FUNC_12 (int *,char*,int *,char*,int ) ;
 int VAR_9 ;

__attribute__((used)) static void
FUNC_13(vdev_t *VAR_10, vdev_trim_state_t VAR_11,
    uint64_t VAR_12, boolean_t VAR_13, boolean_t VAR_14)
{
 FUNC_0(FUNC_1(&VAR_10->vdev_trim_lock));
 spa_t *VAR_15 = VAR_10->vdev_spa;

 if (VAR_11 == VAR_10->vdev_trim_state)
  return;




 uint64_t *VAR_16 = FUNC_8(sizeof (uint64_t), VAR_5);
 *VAR_16 = VAR_10->vdev_guid;




 if (VAR_10->vdev_trim_state != 128) {
  VAR_10->vdev_trim_action_time = FUNC_7();
 }






 if (VAR_11 == 131) {
  if (VAR_10->vdev_trim_state == 129 ||
      VAR_10->vdev_trim_state == 130) {
   VAR_10->vdev_trim_last_offset = VAR_7;
   VAR_10->vdev_trim_rate = VAR_7;
   VAR_10->vdev_trim_partial = VAR_7;
   VAR_10->vdev_trim_secure = VAR_7;
  }

  if (VAR_12 != 0)
   VAR_10->vdev_trim_rate = VAR_12;

  if (VAR_13 != 0)
   VAR_10->vdev_trim_partial = VAR_13;

  if (VAR_14 != 0)
   VAR_10->vdev_trim_secure = VAR_14;
 }

 boolean_t VAR_17 = !!(VAR_10->vdev_trim_state == 128);
 VAR_10->vdev_trim_state = VAR_11;

 dmu_tx_t *VAR_18 = FUNC_5(FUNC_11(VAR_15)->dp_mos_dir);
 FUNC_2(FUNC_3(VAR_18, VAR_6));
 FUNC_6(FUNC_11(VAR_15), VAR_9,
     VAR_16, 2, VAR_8, VAR_18);

 switch (VAR_11) {
 case 131:
  FUNC_10(VAR_15, VAR_10, ((void*)0),
      VAR_17 ? VAR_2 : VAR_3);
  FUNC_12(VAR_15, "trim", VAR_18,
      "vdev=%s activated", VAR_10->vdev_path);
  break;
 case 128:
  FUNC_10(VAR_15, VAR_10, ((void*)0), VAR_4);
  FUNC_12(VAR_15, "trim", VAR_18,
      "vdev=%s suspended", VAR_10->vdev_path);
  break;
 case 130:
  FUNC_10(VAR_15, VAR_10, ((void*)0), VAR_0);
  FUNC_12(VAR_15, "trim", VAR_18,
      "vdev=%s canceled", VAR_10->vdev_path);
  break;
 case 129:
  FUNC_10(VAR_15, VAR_10, ((void*)0), VAR_1);
  FUNC_12(VAR_15, "trim", VAR_18,
      "vdev=%s complete", VAR_10->vdev_path);
  break;
 default:
  FUNC_9("invalid state %llu", (unsigned long long)VAR_11);
 }

 FUNC_4(VAR_18);
}
