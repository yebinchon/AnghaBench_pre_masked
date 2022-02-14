
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_playlist_t ;
typedef int lua_State ;
typedef enum vlc_playlist_playback_repeat { ____Placeholder_vlc_playlist_playback_repeat } vlc_playlist_playback_repeat ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(lua_State *VAR_1,
                               enum vlc_playlist_playback_repeat VAR_2)
{
    vlc_playlist_t *VAR_3 = FUNC_8(VAR_1);
    int VAR_4 = FUNC_0(VAR_1);
    if (VAR_4 > 1)
        return FUNC_7(VAR_1);

    FUNC_4(VAR_3);

    bool VAR_5;
    if (VAR_4 == 0)
    {

        enum vlc_playlist_playback_repeat VAR_6 =
                FUNC_3(VAR_3);
        VAR_5 = VAR_6 != VAR_2;
    }
    else
    {

        VAR_5 = FUNC_2(VAR_1);
    }

    enum vlc_playlist_playback_repeat VAR_7 = VAR_5
                                    ? VAR_2
                                    : VAR_0;

    FUNC_5(VAR_3, VAR_7);

    FUNC_6(VAR_3);

    FUNC_1(VAR_1, VAR_5);
    return 1;
}
