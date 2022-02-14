
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ i_refcount; struct TYPE_8__* current_playing_item_path; int object_lock; int mp_callback_lock; int seek_pending; int event_manager; scalar_t__ p_mlist; int p_mi; int thread; } ;
typedef TYPE_1__ libvlc_media_list_player_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (int *) ;

void FUNC_13(libvlc_media_list_player_t * VAR_0)
{
    if (!VAR_0)
        return;

    FUNC_5(VAR_0);
    VAR_0->i_refcount--;
    if (VAR_0->i_refcount > 0)
    {
        FUNC_8(VAR_0);
        return;
    }
    FUNC_0(VAR_0->i_refcount == 0);
    FUNC_8(VAR_0);

    FUNC_9(VAR_0->thread);
    FUNC_11(VAR_0->thread, ((void*)0));

    FUNC_5(VAR_0);


    FUNC_6(VAR_0);
    FUNC_4(VAR_0->p_mi);

    if (VAR_0->p_mlist)
    {
        FUNC_7(VAR_0);
        FUNC_3(VAR_0->p_mlist);
    }

    FUNC_8(VAR_0);

    FUNC_2(&VAR_0->event_manager);
    FUNC_10(&VAR_0->seek_pending);
    FUNC_12(&VAR_0->mp_callback_lock);
    FUNC_12(&VAR_0->object_lock);

    FUNC_1(VAR_0->current_playing_item_path);
    FUNC_1(VAR_0);
}
