
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int abort; int lock; int cond; } ;
typedef TYPE_1__ vlc_clock_main_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(vlc_clock_main_t *VAR_0)
{
    FUNC_1(&VAR_0->lock);
    VAR_0->abort = 1;
    FUNC_0(&VAR_0->cond);

    FUNC_2(&VAR_0->lock);
}
