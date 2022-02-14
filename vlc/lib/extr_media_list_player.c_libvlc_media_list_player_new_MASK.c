
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int i_refcount; int object_lock; int mp_callback_lock; int seek_pending; int event_manager; int * p_mi; int thread; scalar_t__ seek_offset; } ;
typedef TYPE_1__ libvlc_media_list_player_t ;
typedef int libvlc_instance_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int *,int ,TYPE_1__*,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

libvlc_media_list_player_t *
FUNC_14(libvlc_instance_t * VAR_2)
{
    libvlc_media_list_player_t * VAR_3;
    VAR_3 = FUNC_0( 1, sizeof(libvlc_media_list_player_t) );
    if (FUNC_8(VAR_3 == ((void*)0)))
    {
        FUNC_7("Not enough memory");
        return ((void*)0);
    }

    VAR_3->i_refcount = 1;
    VAR_3->seek_offset = 0;
    FUNC_13(&VAR_3->object_lock);
    FUNC_13(&VAR_3->mp_callback_lock);
    FUNC_11(&VAR_3->seek_pending);
    FUNC_4(&VAR_3->event_manager, VAR_3);


    VAR_3->p_mi = FUNC_5(VAR_2);
    if( VAR_3->p_mi == ((void*)0) )
        goto error;
    FUNC_2(VAR_3);

    if (FUNC_9(&VAR_3->thread, VAR_1, VAR_3,
                  VAR_0))
    {
        FUNC_6(VAR_3->p_mi);
        goto error;
    }

    return VAR_3;
error:
    FUNC_3(&VAR_3->event_manager);
    FUNC_10(&VAR_3->seek_pending);
    FUNC_12(&VAR_3->mp_callback_lock);
    FUNC_12(&VAR_3->object_lock);
    FUNC_1(VAR_3);
    return ((void*)0);
}
