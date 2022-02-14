
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vlc_player_input {TYPE_1__* abloop_state; } ;
struct TYPE_2__ {scalar_t__ set; } ;


 int FUNC_0 (struct vlc_player_input*) ;
 int FUNC_1 (struct vlc_player_input*) ;
 int FUNC_2 (struct vlc_player_input*,int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct vlc_player_input *VAR_0)
{
    if (VAR_0->abloop_state[0].set && VAR_0->abloop_state[1].set)
        FUNC_2(VAR_0, FUNC_1(VAR_0),
                                        FUNC_0(VAR_0));
}
