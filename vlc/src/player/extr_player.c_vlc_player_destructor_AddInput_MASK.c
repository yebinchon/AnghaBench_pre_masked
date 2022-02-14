
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int joinable_inputs; int inputs; int stopping_inputs; } ;
struct TYPE_9__ {TYPE_1__ destructor; } ;
typedef TYPE_4__ vlc_player_t ;
struct vlc_player_input {int started; TYPE_3__* player; int node; } ;
struct TYPE_7__ {int wait; } ;
struct TYPE_8__ {TYPE_2__ destructor; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct vlc_player_input*) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static void
FUNC_4(vlc_player_t *VAR_0,
                               struct vlc_player_input *VAR_1)
{
    if (VAR_1->started)
    {
        VAR_1->started = 0;


        FUNC_0(!FUNC_2(&VAR_0->destructor.stopping_inputs, VAR_1));
        FUNC_0(!FUNC_2(&VAR_0->destructor.joinable_inputs, VAR_1));
        FUNC_3(&VAR_1->node, &VAR_0->destructor.inputs);
    }
    else
    {


        FUNC_0(!FUNC_2(&VAR_0->destructor.inputs, VAR_1));
        FUNC_0(!FUNC_2(&VAR_0->destructor.joinable_inputs, VAR_1));
        FUNC_3(&VAR_1->node, &VAR_0->destructor.joinable_inputs);
    }

    FUNC_1(&VAR_1->player->destructor.wait);
}
