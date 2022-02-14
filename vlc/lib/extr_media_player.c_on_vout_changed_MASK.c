
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vout_thread_t ;
typedef int vlc_player_t ;
typedef int vlc_es_id_t ;
struct TYPE_8__ {int event_manager; } ;
typedef TYPE_3__ libvlc_media_player_t ;
struct TYPE_6__ {size_t new_count; } ;
struct TYPE_7__ {TYPE_1__ media_player_vout; } ;
struct TYPE_9__ {TYPE_2__ u; int type; } ;
typedef TYPE_4__ libvlc_event_t ;
typedef enum vlc_vout_order { ____Placeholder_vlc_vout_order } vlc_vout_order ;
typedef enum vlc_player_vout_action { ____Placeholder_vlc_player_vout_action } vlc_player_vout_action ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int **) ;
 int VAR_1 ;
 int FUNC_1 (int *,TYPE_4__*) ;
 scalar_t__ FUNC_2 (int *) ;
 int ** FUNC_3 (int *,size_t*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(vlc_player_t *VAR_2, enum vlc_player_vout_action VAR_3,
                vout_thread_t *VAR_4, enum vlc_vout_order VAR_5,
                vlc_es_id_t *VAR_6, void *VAR_7)
{
    (void) VAR_3;
    (void) VAR_4;
    (void) VAR_5;

    if (FUNC_2(VAR_6) != VAR_0)
        return;

    libvlc_media_player_t *VAR_8 = VAR_7;

    size_t VAR_9;
    vout_thread_t **VAR_10 = FUNC_3(VAR_2, &VAR_9);
    if (!VAR_10)
        return;
    for (size_t VAR_11 = 0; VAR_11 < VAR_9; ++VAR_11)
        FUNC_4(VAR_10[VAR_11]);
    FUNC_0(VAR_10);

    libvlc_event_t VAR_12;
    VAR_12.type = VAR_1;
    VAR_12.u.media_player_vout.new_count = VAR_9;

    FUNC_1(&VAR_8->event_manager, &VAR_12);
}
