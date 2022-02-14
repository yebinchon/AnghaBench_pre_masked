
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int zcb_checkpoint_size; } ;
typedef TYPE_1__ zdb_cb_t ;
struct TYPE_8__ {int vdev_ashift; int vdev_asize; int vdev_top_zap; int * vdev_spa; } ;
typedef TYPE_2__ vdev_t ;
typedef int uint64_t ;
typedef int space_map_t ;
typedef int spa_t ;
struct TYPE_9__ {scalar_t__ cseea_checkpoint_size; TYPE_2__* cseea_vd; } ;
typedef TYPE_3__ checkpoint_sm_exclude_entry_arg_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ,TYPE_3__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,int ,int ,int,int,int *) ;

__attribute__((used)) static void
FUNC_8(vdev_t *VAR_2, zdb_cb_t *VAR_3)
{
 spa_t *VAR_4 = VAR_2->vdev_spa;
 space_map_t *VAR_5 = ((void*)0);
 uint64_t VAR_6;





 if (VAR_2->vdev_top_zap == 0)
  return;
 if (FUNC_6(FUNC_1(VAR_4), VAR_2->vdev_top_zap,
     VAR_0) != 0)
  return;

 FUNC_0(FUNC_7(FUNC_1(VAR_4), VAR_2->vdev_top_zap,
     VAR_0, sizeof (uint64_t), 1,
     &VAR_6));

 checkpoint_sm_exclude_entry_arg_t VAR_7;
 VAR_7.cseea_vd = VAR_2;
 VAR_7.cseea_checkpoint_size = 0;

 FUNC_0(FUNC_5(&VAR_5, FUNC_1(VAR_4),
     VAR_6, 0, VAR_2->vdev_asize, VAR_2->vdev_ashift));

 FUNC_0(FUNC_3(VAR_5,
     FUNC_4(VAR_5),
     VAR_1, &VAR_7));
 FUNC_2(VAR_5);

 VAR_3->zcb_checkpoint_size += VAR_7.cseea_checkpoint_size;
}
