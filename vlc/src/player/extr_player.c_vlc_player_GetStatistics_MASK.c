
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_player_t ;
struct input_stats_t {int dummy; } ;
struct vlc_player_input {struct input_stats_t const stats; } ;


 struct vlc_player_input* FUNC_0 (int *) ;

const struct input_stats_t *
FUNC_1(vlc_player_t *VAR_0)
{
    struct vlc_player_input *VAR_1 = FUNC_0(VAR_0);

    return VAR_1 ? &VAR_1->stats : ((void*)0);
}
