
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_player_t ;
struct TYPE_4__ {int event_manager; } ;
typedef TYPE_1__ libvlc_media_player_t ;
struct TYPE_5__ {int type; } ;
typedef TYPE_2__ libvlc_event_t ;
typedef enum vlc_player_state { ____Placeholder_vlc_player_state } vlc_player_state ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,TYPE_2__*) ;
 int FUNC_1 () ;

__attribute__((used)) static void
FUNC_2(vlc_player_t *VAR_5, enum vlc_player_state VAR_6,
                 void *VAR_7)
{
    (void) VAR_5;

    libvlc_media_player_t *VAR_8 = VAR_7;

    libvlc_event_t VAR_9;
    switch (VAR_6) {
        case 129:
            VAR_9.type = VAR_4;
            break;
        case 128:
            VAR_9.type = VAR_0;
            break;
        case 130:
            VAR_9.type = VAR_1;
            break;
        case 131:
            VAR_9.type = VAR_3;
            break;
        case 132:
            VAR_9.type = VAR_2;
            break;
        default:
            FUNC_1();
    }

    FUNC_0(&VAR_8->event_manager, &VAR_9);
}
