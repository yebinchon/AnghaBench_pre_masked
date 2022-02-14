
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vlc_player_t ;
struct TYPE_10__ {int event_manager; } ;
typedef TYPE_4__ libvlc_media_player_t ;
struct TYPE_8__ {int new_pausable; } ;
struct TYPE_7__ {int new_seekable; } ;
struct TYPE_9__ {TYPE_2__ media_player_pausable_changed; TYPE_1__ media_player_seekable_changed; } ;
struct TYPE_11__ {TYPE_3__ u; int type; } ;
typedef TYPE_5__ libvlc_event_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,TYPE_5__*) ;

__attribute__((used)) static void
FUNC_1(vlc_player_t *VAR_4, int VAR_5, int VAR_6, void *VAR_7)
{
    (void) VAR_4;

    libvlc_media_player_t *VAR_8 = VAR_7;

    libvlc_event_t VAR_9;

    bool VAR_10 = VAR_5 & VAR_1;
    bool VAR_11 = VAR_6 & VAR_1;
    if (VAR_11 != VAR_10)
    {
        VAR_9.type = VAR_3;
        VAR_9.u.media_player_seekable_changed.new_seekable = VAR_11;
        FUNC_0(&VAR_8->event_manager, &VAR_9);
    }

    bool VAR_12 = VAR_5 & VAR_0;
    bool VAR_13 = VAR_6 & VAR_0;
    if (VAR_13 != VAR_12)
    {
        VAR_9.type = VAR_2;
        VAR_9.u.media_player_pausable_changed.new_pausable = VAR_13;
        FUNC_0(&VAR_8->event_manager, &VAR_9);
    }
}
