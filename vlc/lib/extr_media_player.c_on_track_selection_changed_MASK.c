
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_player_t ;
typedef int vlc_es_id_t ;
struct TYPE_8__ {int event_manager; } ;
typedef TYPE_3__ libvlc_media_player_t ;
struct TYPE_7__ {int i_id; int i_type; } ;
struct TYPE_6__ {TYPE_2__ media_player_es_changed; } ;
struct TYPE_9__ {TYPE_1__ u; int type; } ;
typedef TYPE_4__ libvlc_event_t ;
typedef enum es_format_category_e { ____Placeholder_es_format_category_e } es_format_category_e ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_4__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(vlc_player_t *VAR_1, vlc_es_id_t *VAR_2,
                           vlc_es_id_t *VAR_3, void *VAR_4)
{
    (void) VAR_1;
    (void) VAR_2;

    libvlc_media_player_t *VAR_5 = VAR_4;

    libvlc_event_t VAR_6;
    VAR_6.type = VAR_0;

    if (VAR_3)
    {
        enum es_format_category_e VAR_7 = FUNC_2(VAR_3);
        VAR_6.u.media_player_es_changed.i_type = FUNC_1(VAR_7);
        VAR_6.u.media_player_es_changed.i_id =
            FUNC_3(VAR_3);
        FUNC_0(&VAR_5->event_manager, &VAR_6);
    }
}
