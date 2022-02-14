
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vlc_tick_t ;
typedef int vlc_player_t ;
struct vlc_player_input {TYPE_1__* abloop_state; } ;
typedef enum vlc_player_abloop { ____Placeholder_vlc_player_abloop } vlc_player_abloop ;
struct TYPE_2__ {float pos; int time; int set; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 struct vlc_player_input* FUNC_1 (int *) ;

enum vlc_player_abloop
FUNC_2(vlc_player_t *VAR_3, vlc_tick_t *VAR_4, float *VAR_5,
                       vlc_tick_t *VAR_6, float *VAR_7)
{
    struct vlc_player_input *VAR_8 = FUNC_1(VAR_3);

    if (!VAR_8 || !FUNC_0(VAR_3) || !VAR_8->abloop_state[0].set)
        return VAR_2;

    if (VAR_4)
        *VAR_4 = VAR_8->abloop_state[0].time;
    if (VAR_5)
        *VAR_5 = VAR_8->abloop_state[0].pos;
    if (!VAR_8->abloop_state[1].set)
        return VAR_0;

    if (VAR_6)
        *VAR_6 = VAR_8->abloop_state[1].time;
    if (VAR_7)
        *VAR_7 = VAR_8->abloop_state[1].pos;
    return VAR_1;
}
