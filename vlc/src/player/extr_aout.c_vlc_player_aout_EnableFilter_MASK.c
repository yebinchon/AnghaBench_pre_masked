
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_player_t ;
typedef int audio_output_t ;


 int FUNC_0 (int *,char const*,int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;

int
FUNC_3(vlc_player_t *VAR_0, const char *VAR_1, bool VAR_2)
{
    audio_output_t *VAR_3 = FUNC_2(VAR_0);
    if (!VAR_3)
        return -1;
    FUNC_0(VAR_3, VAR_1, VAR_2);
    FUNC_1(VAR_3);

    return 0;
}
