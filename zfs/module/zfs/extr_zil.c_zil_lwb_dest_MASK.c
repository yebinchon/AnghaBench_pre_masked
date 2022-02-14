
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lwb_itxs; int lwb_waiters; int lwb_vdev_tree; int lwb_vdev_lock; } ;
typedef TYPE_1__ lwb_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(void *VAR_0, void *VAR_1)
{
 lwb_t *VAR_2 = VAR_0;
 FUNC_2(&VAR_2->lwb_vdev_lock);
 FUNC_0(&VAR_2->lwb_vdev_tree);
 FUNC_1(&VAR_2->lwb_waiters);
 FUNC_1(&VAR_2->lwb_itxs);
}
