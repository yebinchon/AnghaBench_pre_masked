
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_tick_t ;
struct TYPE_3__ {struct vlc_player_input* input; } ;
typedef TYPE_1__ vlc_player_t ;
struct vlc_player_input {int time; TYPE_1__* player; } ;


 scalar_t__ FUNC_0 (TYPE_1__*,int ,int *,int *) ;
 int FUNC_1 () ;

vlc_tick_t
FUNC_2(struct vlc_player_input *VAR_0)
{
    vlc_player_t *VAR_1 = VAR_0->player;
    vlc_tick_t VAR_2;

    if (VAR_0 == VAR_1->input
     && FUNC_0(VAR_1, FUNC_1(), &VAR_2, ((void*)0)) == 0)
        return VAR_2;
    return VAR_0->time;
}
