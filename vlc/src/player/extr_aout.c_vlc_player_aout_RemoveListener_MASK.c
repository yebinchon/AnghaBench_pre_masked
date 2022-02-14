
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int aout_listeners_lock; } ;
typedef TYPE_1__ vlc_player_t ;
struct TYPE_8__ {int node; } ;
typedef TYPE_2__ vlc_player_aout_listener_id ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void
FUNC_5(vlc_player_t *VAR_0,
                               vlc_player_aout_listener_id *VAR_1)
{
    FUNC_0(VAR_1);

    FUNC_3(&VAR_0->aout_listeners_lock);
    FUNC_2(&VAR_1->node);
    FUNC_4(&VAR_0->aout_listeners_lock);
    FUNC_1(VAR_1);
}
