
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_tick_t ;
typedef int vlc_player_t ;
struct TYPE_8__ {int event_manager; } ;
typedef TYPE_3__ libvlc_media_player_t ;
struct TYPE_6__ {int new_length; } ;
struct TYPE_7__ {TYPE_1__ media_player_length_changed; } ;
struct TYPE_9__ {TYPE_2__ u; int type; } ;
typedef TYPE_4__ libvlc_event_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,TYPE_4__*) ;

__attribute__((used)) static void
FUNC_2(vlc_player_t *VAR_1, vlc_tick_t VAR_2, void *VAR_3)
{
    (void) VAR_1;

    libvlc_media_player_t *VAR_4 = VAR_3;

    libvlc_event_t VAR_5;

    VAR_5.type = VAR_0;
    VAR_5.u.media_player_length_changed.new_length =
        FUNC_0(VAR_2);

    FUNC_1(&VAR_4->event_manager, &VAR_5);
}
