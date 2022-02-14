
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_player_t ;
struct vlc_player_input {float signal_quality; float signal_strength; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 struct vlc_player_input* FUNC_1 (int *) ;

int
FUNC_2(vlc_player_t *VAR_2, float *VAR_3, float *VAR_4)
{
    FUNC_0(VAR_3 && VAR_4);
    struct vlc_player_input *VAR_5 = FUNC_1(VAR_2);

    if (VAR_5 && VAR_5->signal_quality >= 0 && VAR_5->signal_strength >= 0)
    {
        *VAR_3 = VAR_5->signal_quality;
        *VAR_4 = VAR_5->signal_strength;
        return VAR_1;
    }
    return VAR_0;
}
