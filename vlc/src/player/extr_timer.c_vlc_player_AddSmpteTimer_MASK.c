
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vlc_player_timer_id {int node; void* data; struct vlc_player_timer_smpte_cbs const* smpte_cbs; void* last_update_date; void* period; } ;
typedef struct vlc_player_timer_id vlc_player_timer_id ;
struct TYPE_5__ {int listeners; } ;
struct TYPE_6__ {int lock; TYPE_1__ smpte_source; } ;
struct TYPE_7__ {TYPE_2__ timer; } ;
typedef TYPE_3__ vlc_player_t ;
struct vlc_player_timer_smpte_cbs {scalar_t__ on_update; } ;


 void* VAR_0 ;
 int FUNC_0 (int) ;
 struct vlc_player_timer_id* FUNC_1 (int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

vlc_player_timer_id *
FUNC_5(vlc_player_t *VAR_1,
                         const struct vlc_player_timer_smpte_cbs *VAR_2,
                         void *VAR_3)
{
    FUNC_0(VAR_2 && VAR_2->on_update);

    struct vlc_player_timer_id *VAR_4 = FUNC_1(sizeof(*VAR_4));
    if (!VAR_4)
        return ((void*)0);
    VAR_4->period = VAR_0;
    VAR_4->last_update_date = VAR_0;
    VAR_4->smpte_cbs = VAR_2;
    VAR_4->data = VAR_3;

    FUNC_3(&VAR_1->timer.lock);
    FUNC_2(&VAR_4->node, &VAR_1->timer.smpte_source.listeners);
    FUNC_4(&VAR_1->timer.lock);

    return VAR_4;
}
