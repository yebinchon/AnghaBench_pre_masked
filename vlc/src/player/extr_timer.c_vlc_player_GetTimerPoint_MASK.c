
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_tick_t ;
struct TYPE_9__ {scalar_t__ system_date; } ;
struct TYPE_6__ {TYPE_4__ point; } ;
struct TYPE_7__ {int lock; TYPE_1__ best_source; } ;
struct TYPE_8__ {TYPE_2__ timer; } ;
typedef TYPE_3__ vlc_player_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_4__*,int ,int *,float*) ;

int
FUNC_3(vlc_player_t *VAR_2, vlc_tick_t VAR_3,
                         vlc_tick_t *VAR_4, float *VAR_5)
{
    FUNC_0(&VAR_2->timer.lock);
    if (VAR_2->timer.best_source.point.system_date == VAR_1)
    {
        FUNC_1(&VAR_2->timer.lock);
        return VAR_0;
    }
    int VAR_6 =
        FUNC_2(&VAR_2->timer.best_source.point,
                                           VAR_3, VAR_4, VAR_5);

    FUNC_1(&VAR_2->timer.lock);
    return VAR_6;
}
