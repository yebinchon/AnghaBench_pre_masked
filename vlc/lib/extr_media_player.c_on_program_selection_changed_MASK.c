
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_player_t ;
struct vlc_player_program {int scrambled; } ;
struct TYPE_8__ {int event_manager; } ;
typedef TYPE_3__ libvlc_media_player_t ;
struct TYPE_6__ {int new_scrambled; } ;
struct TYPE_7__ {TYPE_1__ media_player_scrambled_changed; } ;
struct TYPE_9__ {TYPE_2__ u; int type; } ;
typedef TYPE_4__ libvlc_event_t ;


 int FUNC_0 (struct vlc_player_program const*) ;
 int VAR_0 ;
 int FUNC_1 (int *,TYPE_4__*) ;
 struct vlc_player_program* FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(vlc_player_t *VAR_1, int VAR_2,
                             int VAR_3, void *VAR_4)
{
    (void) VAR_2;

    libvlc_media_player_t *VAR_5 = VAR_4;

    if (VAR_3 == -1)
        return;

    const struct vlc_player_program *VAR_6 =
        FUNC_2(VAR_1);
    FUNC_0(VAR_6);

    libvlc_event_t VAR_7;
    VAR_7.type = VAR_0;
    VAR_7.u.media_player_scrambled_changed.new_scrambled = VAR_6->scrambled;

    FUNC_1(&VAR_5->event_manager, &VAR_7);
}
