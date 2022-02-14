
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_player_t ;
struct vlc_player_input {float rate; } ;


 float FUNC_0 (int *,char*) ;
 struct vlc_player_input* FUNC_1 (int *) ;

float
FUNC_2(vlc_player_t *VAR_0)
{
    struct vlc_player_input *VAR_1 = FUNC_1(VAR_0);
    if (VAR_1)
        return VAR_1->rate;
    else
        return FUNC_0(VAR_0, "rate");
}
