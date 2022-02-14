
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int rc; int cond; int lock; } ;
typedef TYPE_1__ vlc_clock_main_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(vlc_clock_main_t *VAR_0)
{
    FUNC_3(&VAR_0->lock);
    FUNC_2(&VAR_0->cond);
    FUNC_0(VAR_0->rc == 1);
    FUNC_1(VAR_0);
}
