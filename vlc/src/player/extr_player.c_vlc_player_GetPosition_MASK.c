
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_player_t ;
struct vlc_player_input {int dummy; } ;


 struct vlc_player_input* FUNC_0 (int *) ;
 float FUNC_1 (struct vlc_player_input*) ;

float
FUNC_2(vlc_player_t *VAR_0)
{
    struct vlc_player_input *VAR_1 = FUNC_0(VAR_0);

    return VAR_1 ? FUNC_1(VAR_1) : -1.f;
}
