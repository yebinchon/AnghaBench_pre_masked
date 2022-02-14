
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* owner; } ;
typedef TYPE_1__ vlc_clock_t ;
struct TYPE_7__ {int lock; int rc; TYPE_1__* master; } ;
typedef TYPE_2__ vlc_clock_main_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(vlc_clock_t *VAR_0)
{
    vlc_clock_main_t *VAR_1 = VAR_0->owner;
    FUNC_2(&VAR_1->lock);
    if (VAR_0 == VAR_1->master)
    {
        FUNC_1(VAR_1);
        VAR_1->master = ((void*)0);
    }
    VAR_1->rc--;
    FUNC_3(&VAR_1->lock);
    FUNC_0(VAR_0);
}
