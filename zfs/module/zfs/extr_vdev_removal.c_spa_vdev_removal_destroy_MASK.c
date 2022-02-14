
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int svr_cv; int svr_lock; int svr_allocd_segs; int * svr_new_segments; int * svr_frees; int * svr_max_offset_to_sync; int * svr_bytes_done; } ;
typedef TYPE_1__ spa_vdev_removal_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;

void
FUNC_6(spa_vdev_removal_t *VAR_1)
{
 for (int VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  FUNC_0(VAR_1->svr_bytes_done[VAR_2]);
  FUNC_0(VAR_1->svr_max_offset_to_sync[VAR_2]);
  FUNC_5(VAR_1->svr_frees[VAR_2]);
  FUNC_3(&VAR_1->svr_new_segments[VAR_2]);
 }

 FUNC_5(VAR_1->svr_allocd_segs);
 FUNC_4(&VAR_1->svr_lock);
 FUNC_1(&VAR_1->svr_cv);
 FUNC_2(VAR_1, sizeof (*VAR_1));
}
