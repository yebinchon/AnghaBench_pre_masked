
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_playlist_t ;
typedef int vlc_player_t ;
typedef int lua_State ;
typedef enum vlc_player_state { ____Placeholder_vlc_player_state } vlc_player_state ;







 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(lua_State *VAR_0)
{
    vlc_playlist_t *VAR_1 = FUNC_5(VAR_0);

    vlc_player_t *VAR_2 = FUNC_4(VAR_1);
    FUNC_2(VAR_2);
    enum vlc_player_state VAR_3 = FUNC_1(VAR_2);
    FUNC_3(VAR_2);

    switch (VAR_3)
    {
        case 129:
            FUNC_0(VAR_0, "stopped");
            break;
        case 130:
            FUNC_0(VAR_0, "started");
            break;
        case 131:
            FUNC_0(VAR_0, "playing");
            break;
        case 132:
            FUNC_0(VAR_0, "paused");
            break;
        case 128:
            FUNC_0(VAR_0, "stopping");
            break;
        default:
            FUNC_0(VAR_0, "unknown");
    }
    return 1;
}
