
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int aout_listeners_lock; int aout_listeners; } ;
typedef TYPE_1__ vlc_player_t ;
struct TYPE_7__ {int node; void* cbs_data; struct vlc_player_aout_cbs const* cbs; } ;
typedef TYPE_2__ vlc_player_aout_listener_id ;
struct vlc_player_aout_cbs {int dummy; } ;


 int FUNC_0 (struct vlc_player_aout_cbs const*) ;
 TYPE_2__* FUNC_1 (int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

vlc_player_aout_listener_id *
FUNC_5(vlc_player_t *VAR_0,
                            const struct vlc_player_aout_cbs *VAR_1,
                            void *VAR_2)
{
    FUNC_0(VAR_1);

    vlc_player_aout_listener_id *VAR_3 = FUNC_1(sizeof(*VAR_3));
    if (!VAR_3)
        return ((void*)0);

    VAR_3->cbs = VAR_1;
    VAR_3->cbs_data = VAR_2;

    FUNC_3(&VAR_0->aout_listeners_lock);
    FUNC_2(&VAR_3->node, &VAR_0->aout_listeners);
    FUNC_4(&VAR_0->aout_listeners_lock);

    return VAR_3;
}
