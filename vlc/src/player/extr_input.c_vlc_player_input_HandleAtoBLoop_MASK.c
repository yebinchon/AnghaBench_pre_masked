
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
struct TYPE_6__ {struct vlc_player_input* input; } ;
typedef TYPE_2__ vlc_player_t ;
struct vlc_player_input {TYPE_1__* abloop_state; TYPE_2__* player; } ;
struct TYPE_5__ {scalar_t__ time; float pos; scalar_t__ set; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,float) ;
 int FUNC_2 (TYPE_2__*,scalar_t__) ;

__attribute__((used)) static void
FUNC_3(struct vlc_player_input *VAR_1, vlc_tick_t VAR_2,
                                float VAR_3)
{
    vlc_player_t *VAR_4 = VAR_1->player;

    if (VAR_4->input != VAR_1)
        return;

    FUNC_0(VAR_1->abloop_state[0].set && VAR_1->abloop_state[1].set);

    if (VAR_2 != VAR_0
     && VAR_1->abloop_state[0].time != VAR_0
     && VAR_1->abloop_state[1].time != VAR_0)
    {
        if (VAR_2 >= VAR_1->abloop_state[1].time)
            FUNC_2(VAR_4, VAR_1->abloop_state[0].time);
    }
    else if (VAR_3 >= VAR_1->abloop_state[1].pos)
        FUNC_1(VAR_4, VAR_1->abloop_state[0].pos);
}
