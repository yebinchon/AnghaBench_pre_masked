
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int joinable_inputs; int stopping_inputs; int inputs; } ;
struct TYPE_5__ {TYPE_1__ destructor; } ;
typedef TYPE_2__ vlc_player_t ;


 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static bool FUNC_1(vlc_player_t *VAR_0)
{
    return FUNC_0(&VAR_0->destructor.inputs)
        && FUNC_0(&VAR_0->destructor.stopping_inputs)
        && FUNC_0(&VAR_0->destructor.joinable_inputs);
}
