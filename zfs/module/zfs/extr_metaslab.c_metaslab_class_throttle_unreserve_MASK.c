
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zio_t ;
struct TYPE_3__ {int mc_lock; int * mc_alloc_slots; int mc_alloc_throttle_enabled; } ;
typedef TYPE_1__ metaslab_class_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;

void
FUNC_4(metaslab_class_t *VAR_0, int VAR_1,
    int VAR_2, zio_t *VAR_3)
{
 FUNC_0(VAR_0->mc_alloc_throttle_enabled);
 FUNC_1(&VAR_0->mc_lock);
 for (int VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  (void) FUNC_3(&VAR_0->mc_alloc_slots[VAR_2],
      VAR_3);
 }
 FUNC_2(&VAR_0->mc_lock);
}
