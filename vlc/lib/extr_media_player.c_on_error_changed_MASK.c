
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
typedef enum vlc_player_error { ____Placeholder_vlc_player_error } vlc_player_error ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,TYPE_2__*) ;
 int FUNC_1 () ;

__attribute__((used)) static void
FUNC_2(vlc_player_t *VAR_2, enum vlc_player_error VAR_3, void *VAR_4)
{
    (void) VAR_2;

    libvlc_media_player_t *VAR_5 = VAR_4;

    libvlc_event_t VAR_6;
    switch (VAR_3) {
        case 128:
            VAR_6.type = VAR_1;
            break;
        case 129:
            VAR_6.type = VAR_0;
            break;
        default:
            FUNC_1();
    }

    FUNC_0(&VAR_5->event_manager, &VAR_6);
}
