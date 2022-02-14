
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int vlc_player_t ;
struct TYPE_13__ {int * p_input_item; } ;
typedef TYPE_3__ libvlc_media_t ;
struct TYPE_14__ {int event_manager; TYPE_3__* p_md; int p_libvlc_instance; } ;
typedef TYPE_4__ libvlc_media_player_t ;
struct TYPE_11__ {TYPE_3__* new_media; } ;
struct TYPE_12__ {TYPE_1__ media_player_media_changed; } ;
struct TYPE_15__ {TYPE_2__ u; int type; } ;
typedef TYPE_5__ libvlc_event_t ;
typedef int input_item_t ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_5__*) ;
 TYPE_3__* FUNC_1 (int ,int *) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;

__attribute__((used)) static void
FUNC_5(vlc_player_t *VAR_1, input_item_t *VAR_2,
                         void *VAR_3)
{
    (void) VAR_1;

    libvlc_media_player_t *VAR_4 = VAR_3;

    libvlc_media_t *VAR_5 = VAR_4->p_md;

    input_item_t *VAR_6 = VAR_5 ? VAR_5->p_input_item : ((void*)0);
    if (VAR_2 == VAR_6)

        return;

    if (VAR_5)
        FUNC_4(VAR_5);

    if (VAR_2)
    {
        VAR_4->p_md = FUNC_1(VAR_4->p_libvlc_instance,
                                                    VAR_2);
        if (!VAR_4->p_md)

            return;

        FUNC_3(VAR_4->p_md);
    }
    else
        VAR_4->p_md = ((void*)0);

    FUNC_2(VAR_5);

    libvlc_event_t VAR_7;
    VAR_7.type = VAR_0;
    VAR_7.u.media_player_media_changed.new_media = VAR_4->p_md;
    FUNC_0(&VAR_4->event_manager, &VAR_7);
}
