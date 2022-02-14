
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int stopping_inputs; } ;
struct TYPE_6__ {TYPE_1__ destructor; } ;
typedef TYPE_2__ vlc_player_t ;
struct vlc_player_input {int started; int node; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,struct vlc_player_input*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*,struct vlc_player_input*) ;

void
FUNC_4(vlc_player_t *VAR_0,
                                       struct vlc_player_input *VAR_1)
{
    if (FUNC_1(&VAR_0->destructor.stopping_inputs, VAR_1))
        FUNC_2(&VAR_1->node);

    FUNC_0(!VAR_1->started);
    FUNC_3(VAR_0, VAR_1);
}
