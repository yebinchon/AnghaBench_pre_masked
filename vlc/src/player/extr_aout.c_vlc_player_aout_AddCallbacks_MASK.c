
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_player_t ;
typedef int audio_output_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int ,int *) ;
 int VAR_0 ;
 int * FUNC_2 (int *) ;

void
FUNC_3(vlc_player_t *VAR_1)
{
    audio_output_t *VAR_2 = FUNC_2(VAR_1);
    if (!VAR_2)
        return;

    FUNC_1(VAR_2, "volume", VAR_0, VAR_1);
    FUNC_1(VAR_2, "mute", VAR_0, VAR_1);
    FUNC_1(VAR_2, "device", VAR_0, VAR_1);

    FUNC_0(VAR_2);
}
