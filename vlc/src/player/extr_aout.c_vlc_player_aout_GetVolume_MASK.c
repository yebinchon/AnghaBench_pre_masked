
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_player_t ;
typedef int audio_output_t ;


 int FUNC_0 (int *) ;
 float FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;

float
FUNC_3(vlc_player_t *VAR_0)
{
    audio_output_t *VAR_1 = FUNC_2(VAR_0);
    if (!VAR_1)
        return -1.f;
    float VAR_2 = FUNC_1(VAR_1);
    FUNC_0(VAR_1);

    return VAR_2;
}
