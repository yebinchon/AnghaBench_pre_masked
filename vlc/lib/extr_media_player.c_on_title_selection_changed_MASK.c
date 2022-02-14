
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_player_t ;
struct vlc_player_title {int dummy; } ;
struct TYPE_8__ {int event_manager; } ;
typedef TYPE_3__ libvlc_media_player_t ;
struct TYPE_6__ {size_t new_title; } ;
struct TYPE_7__ {TYPE_1__ media_player_title_changed; } ;
struct TYPE_9__ {TYPE_2__ u; int type; } ;
typedef TYPE_4__ libvlc_event_t ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_4__*) ;

__attribute__((used)) static void
FUNC_1(vlc_player_t *VAR_1,
                           const struct vlc_player_title *VAR_2,
                           size_t VAR_3, void *VAR_4)
{
    (void) VAR_1;
    (void) VAR_2;

    libvlc_media_player_t *VAR_5 = VAR_4;

    libvlc_event_t VAR_6;
    VAR_6.type = VAR_0;
    VAR_6.u.media_player_title_changed.new_title = VAR_3;

    FUNC_0(&VAR_5->event_manager, &VAR_6);
}
