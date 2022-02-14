
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vlc_tick_t ;
typedef int vlc_player_t ;
struct TYPE_10__ {int event_manager; } ;
typedef TYPE_4__ libvlc_media_player_t ;
struct TYPE_7__ {int new_time; } ;
struct TYPE_8__ {float new_position; } ;
struct TYPE_9__ {TYPE_1__ media_player_time_changed; TYPE_2__ media_player_position_changed; } ;
struct TYPE_11__ {TYPE_3__ u; int type; } ;
typedef TYPE_5__ libvlc_event_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,TYPE_5__*) ;

__attribute__((used)) static void
FUNC_2(vlc_player_t *VAR_2, vlc_tick_t VAR_3, float VAR_4,
                    void *VAR_5)
{
    (void) VAR_2;

    libvlc_media_player_t *VAR_6 = VAR_5;

    libvlc_event_t VAR_7;

    VAR_7.type = VAR_0;
    VAR_7.u.media_player_position_changed.new_position = VAR_4;
    FUNC_1(&VAR_6->event_manager, &VAR_7);

    VAR_7.type = VAR_1;
    VAR_7.u.media_player_time_changed.new_time = FUNC_0(VAR_3);
    FUNC_1(&VAR_6->event_manager, &VAR_7);
}
