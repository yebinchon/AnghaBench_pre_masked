
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_playlist_t ;
typedef int vlc_player_t ;
typedef int vlc_object_t ;
typedef enum vlc_playlist_playback_repeat { ____Placeholder_vlc_playlist_playback_repeat } vlc_playlist_playback_repeat ;
typedef enum vlc_playlist_playback_order { ____Placeholder_vlc_playlist_playback_order } vlc_playlist_playback_order ;
typedef enum vlc_player_media_stopped_action { ____Placeholder_vlc_player_media_stopped_action } vlc_player_media_stopped_action ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void
FUNC_9(vlc_playlist_t *VAR_9, vlc_object_t *VAR_10)
{
    enum vlc_playlist_playback_order VAR_11;
    if (FUNC_0(VAR_10, "random"))
        VAR_11 = VAR_5;
    else
        VAR_11 = VAR_4;


    enum vlc_playlist_playback_repeat VAR_12;
    if (FUNC_0(VAR_10, "repeat"))
        VAR_12 = VAR_7;
    else if (FUNC_0(VAR_10, "loop"))
        VAR_12 = VAR_6;
    else
        VAR_12 = VAR_8;

    enum vlc_player_media_stopped_action VAR_13;
    if (FUNC_0(VAR_10, "play-and-exit"))
        VAR_13 = VAR_1;
    else if (FUNC_0(VAR_10, "play-and-stop"))
        VAR_13 = VAR_3;
    else if (FUNC_0(VAR_10, "play-and-pause"))
        VAR_13 = VAR_2;
    else
        VAR_13 = VAR_0;

    bool VAR_14 = FUNC_0(VAR_10, "start-paused");
    bool VAR_15 = FUNC_0(VAR_10, "playlist-cork");

    FUNC_5(VAR_9);
    FUNC_6(VAR_9, VAR_11);
    FUNC_7(VAR_9, VAR_12);

    vlc_player_t *VAR_16 = FUNC_4(VAR_9);



    FUNC_1(VAR_16, VAR_13);
    FUNC_3(VAR_16, VAR_14);
    FUNC_2(VAR_16, VAR_15);

    FUNC_8(VAR_9);
}
