
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_player_t ;
typedef int libvlc_state_t ;
struct TYPE_3__ {int * player; } ;
typedef TYPE_1__ libvlc_media_player_t ;
typedef enum vlc_player_state { ____Placeholder_vlc_player_state } vlc_player_state ;
typedef enum vlc_player_error { ____Placeholder_vlc_player_error } vlc_player_error ;


 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

libvlc_state_t FUNC_5( libvlc_media_player_t *VAR_7 )
{
    vlc_player_t *VAR_8 = VAR_7->player;
    FUNC_3(VAR_8);

    enum vlc_player_error VAR_9 = FUNC_1(VAR_8);
    enum vlc_player_state VAR_10 = FUNC_2(VAR_8);

    FUNC_4(VAR_8);

    if (VAR_9 != VAR_0)
        return VAR_2;
    switch (VAR_10) {
        case 129:
            return VAR_6;
        case 128:
            return VAR_1;
        case 130:
            return VAR_3;
        case 131:
            return VAR_5;
        case 132:
            return VAR_4;
        default:
            FUNC_0();
    }
}
