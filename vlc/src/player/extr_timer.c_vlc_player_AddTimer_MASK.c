
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
struct vlc_player_timer_id {int node; void* data; struct vlc_player_timer_cbs const* cbs; scalar_t__ last_update_date; scalar_t__ period; } ;
typedef struct vlc_player_timer_id vlc_player_timer_id ;
struct TYPE_5__ {int listeners; } ;
struct TYPE_6__ {int lock; TYPE_1__ best_source; } ;
struct TYPE_7__ {TYPE_2__ timer; } ;
typedef TYPE_3__ vlc_player_t ;
struct vlc_player_timer_cbs {scalar_t__ on_update; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 struct vlc_player_timer_id* FUNC_1 (int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

vlc_player_timer_id *
FUNC_5(vlc_player_t *VAR_2, vlc_tick_t VAR_3,
                    const struct vlc_player_timer_cbs *VAR_4, void *VAR_5)
{
    FUNC_0(VAR_3 >= VAR_0 || VAR_3 == VAR_1);
    FUNC_0(VAR_4 && VAR_4->on_update);

    struct vlc_player_timer_id *VAR_6 = FUNC_1(sizeof(*VAR_6));
    if (!VAR_6)
        return ((void*)0);
    VAR_6->period = VAR_3;
    VAR_6->last_update_date = VAR_1;
    VAR_6->cbs = VAR_4;
    VAR_6->data = VAR_5;

    FUNC_3(&VAR_2->timer.lock);
    FUNC_2(&VAR_6->node, &VAR_2->timer.best_source.listeners);
    FUNC_4(&VAR_2->timer.lock);

    return VAR_6;
}
