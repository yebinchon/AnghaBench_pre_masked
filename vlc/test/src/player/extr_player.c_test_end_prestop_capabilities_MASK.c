
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_player_t ;
struct TYPE_8__ {scalar_t__ size; } ;
typedef TYPE_3__ vec_on_capabilities_changed ;
struct TYPE_7__ {scalar_t__ can_seek; scalar_t__ can_pause; } ;
struct TYPE_6__ {TYPE_3__ on_capabilities_changed; } ;
struct ctx {TYPE_2__ params; int wait; int * player; TYPE_1__ report; } ;
struct TYPE_9__ {int new_caps; } ;


 TYPE_4__ FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static void
FUNC_5(struct ctx *VAR_2)
{
    vlc_player_t *VAR_3 = VAR_2->player;
    vec_on_capabilities_changed *VAR_4 = &VAR_2->report.on_capabilities_changed;
    while (VAR_4->size == 0)
        FUNC_4(VAR_2->player, &VAR_2->wait);
    int VAR_5 = FUNC_0(VAR_4).new_caps;
    FUNC_1(FUNC_3(VAR_3) == VAR_2->params.can_seek
        && !!(VAR_5 & VAR_1) == VAR_2->params.can_seek);
    FUNC_1(FUNC_2(VAR_3) == VAR_2->params.can_pause
        && !!(VAR_5 & VAR_0) == VAR_2->params.can_pause);
}
