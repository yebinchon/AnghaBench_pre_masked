
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int lock; struct vlc_player_timer_source* sources; } ;
struct TYPE_7__ {TYPE_2__ timer; } ;
typedef TYPE_3__ vlc_player_t ;
typedef int vlc_es_id_t ;
struct TYPE_5__ {scalar_t__ system_date; } ;
struct vlc_player_timer_source {int * es; TYPE_1__ point; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void
FUNC_3(vlc_player_t *VAR_2, vlc_es_id_t *VAR_3)
{
    FUNC_1(&VAR_2->timer.lock);
    for (size_t VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4)
    {
        struct vlc_player_timer_source *VAR_5 = &VAR_2->timer.sources[VAR_4];
        if (VAR_5->es == VAR_3)
        {

            FUNC_0(VAR_5->point.system_date == VAR_1);
            VAR_5->es = ((void*)0);
        }
    }
    FUNC_2(&VAR_2->timer.lock);
}
