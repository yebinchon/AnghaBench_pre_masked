
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct vlc_player_input* input; } ;
typedef TYPE_1__ vlc_player_t ;
struct vlc_player_input {float position; TYPE_1__* player; } ;


 scalar_t__ FUNC_0 (TYPE_1__*,int ,int *,float*) ;
 int FUNC_1 () ;

float
FUNC_2(struct vlc_player_input *VAR_0)
{
    vlc_player_t *VAR_1 = VAR_0->player;
    float VAR_2;

    if (VAR_0 == VAR_1->input
     && FUNC_0(VAR_1, FUNC_1(), ((void*)0), &VAR_2) == 0)
        return VAR_2;
    return VAR_0->position;
}
