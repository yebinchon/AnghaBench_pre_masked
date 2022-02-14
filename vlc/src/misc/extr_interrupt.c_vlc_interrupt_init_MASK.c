
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int interrupted; int * callback; int killed; int lock; } ;
typedef TYPE_1__ vlc_interrupt_t ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;

void FUNC_2(vlc_interrupt_t *VAR_0)
{
    FUNC_1(&VAR_0->lock);
    VAR_0->interrupted = 0;
    FUNC_0(&VAR_0->killed, 0);
    VAR_0->callback = ((void*)0);
}
