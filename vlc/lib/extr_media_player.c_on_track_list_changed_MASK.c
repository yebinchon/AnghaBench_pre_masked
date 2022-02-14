
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
struct TYPE_7__ {int i_cat; } ;
struct vlc_player_track {int es_id; TYPE_1__ fmt; } ;
struct TYPE_10__ {int event_manager; } ;
typedef TYPE_4__ libvlc_media_player_t ;
struct TYPE_8__ {int i_id; int i_type; } ;
struct TYPE_9__ {TYPE_2__ media_player_es_changed; } ;
struct TYPE_11__ {TYPE_3__ u; int type; } ;
typedef TYPE_5__ libvlc_event_t ;
typedef enum vlc_player_list_action { ____Placeholder_vlc_player_list_action } vlc_player_list_action ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,TYPE_5__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(vlc_player_t *VAR_4, enum vlc_player_list_action VAR_5,
                      const struct vlc_player_track *VAR_6, void *VAR_7)
{
    (void) VAR_4;

    libvlc_media_player_t *VAR_8 = VAR_7;

    libvlc_event_t VAR_9;
    if (VAR_5 == VAR_0)
        VAR_9.type = VAR_2;
    else if (VAR_5 == VAR_1)
        VAR_9.type = VAR_3;
    else

        return;

    VAR_9.u.media_player_es_changed.i_type =
        FUNC_1(VAR_6->fmt.i_cat);
    VAR_9.u.media_player_es_changed.i_id = FUNC_2(VAR_6->es_id);

    FUNC_0(&VAR_8->event_manager, &VAR_9);
}
