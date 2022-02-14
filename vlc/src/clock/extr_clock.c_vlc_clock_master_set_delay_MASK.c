
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
struct TYPE_4__ {scalar_t__ delay; TYPE_2__* owner; } ;
typedef TYPE_1__ vlc_clock_t ;
struct TYPE_5__ {scalar_t__ delay; int lock; int cond; } ;
typedef TYPE_2__ vlc_clock_main_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static vlc_tick_t FUNC_4(vlc_clock_t *VAR_0, vlc_tick_t VAR_1)
{
    vlc_clock_main_t *VAR_2 = VAR_0->owner;
    FUNC_2(&VAR_2->lock);

    vlc_tick_t VAR_3 = VAR_1 - VAR_0->delay;

    if (VAR_3 > 0)
    {

        VAR_2->delay = 0;
        VAR_0->delay = VAR_1;
    }
    else
    {

        VAR_2->delay = VAR_3;
    }

    FUNC_0(VAR_2->delay <= 0);
    FUNC_0(VAR_0->delay >= 0);

    FUNC_1(&VAR_2->cond);
    FUNC_3(&VAR_2->lock);
    return VAR_3;
}
