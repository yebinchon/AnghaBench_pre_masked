
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vout_thread_t ;
typedef int vlc_player_t ;


 size_t FUNC_0 (char**) ;
 char** VAR_0 ;
 int FUNC_1 (int *,char*,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;

void
FUNC_2(vlc_player_t *VAR_3, vout_thread_t *VAR_4)
{
    FUNC_1(VAR_4, "fullscreen", VAR_1, VAR_3);
    FUNC_1(VAR_4, "video-wallpaper", VAR_1, VAR_3);

    for (size_t VAR_5 = 0; VAR_5 < FUNC_0(VAR_0); ++VAR_5)
        FUNC_1(VAR_4, VAR_0[VAR_5], VAR_2, VAR_3);
}
