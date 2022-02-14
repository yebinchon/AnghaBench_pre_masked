
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lock; int listeners; void* p_obj; } ;
typedef TYPE_1__ libvlc_event_manager_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(libvlc_event_manager_t *VAR_0, void *VAR_1)
{
    VAR_0->p_obj = VAR_1;
    FUNC_0(&VAR_0->listeners);
    FUNC_1(&VAR_0->lock);
}
