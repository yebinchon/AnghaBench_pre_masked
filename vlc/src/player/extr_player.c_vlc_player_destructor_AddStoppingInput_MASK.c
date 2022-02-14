
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int stopping_inputs; int inputs; } ;
struct TYPE_9__ {TYPE_3__ destructor; } ;
typedef TYPE_4__ vlc_player_t ;
struct vlc_player_input {TYPE_2__* player; int node; } ;
struct TYPE_6__ {int wait; } ;
struct TYPE_7__ {TYPE_1__ destructor; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,struct vlc_player_input*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;

void
FUNC_4(vlc_player_t *VAR_0,
                                       struct vlc_player_input *VAR_1)
{

    if (FUNC_1(&VAR_0->destructor.inputs, VAR_1))
        FUNC_3(&VAR_1->node);
    if (!FUNC_1(&VAR_0->destructor.stopping_inputs, VAR_1))
    {
        FUNC_2(&VAR_1->node, &VAR_0->destructor.stopping_inputs);
        FUNC_0(&VAR_1->player->destructor.wait);
    }
}
