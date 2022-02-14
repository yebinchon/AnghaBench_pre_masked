
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef int vlc_playlist_t ;
typedef int vlc_playlist_listener_id ;
struct vlc_playlist_callbacks {int on_has_next_changed; int on_has_prev_changed; int on_current_index_changed; int on_playback_order_changed; int on_playback_repeat_changed; int on_items_reset; } ;
struct TYPE_15__ {int size; TYPE_11__* data; } ;
struct TYPE_13__ {int size; TYPE_9__* data; } ;
struct TYPE_23__ {int size; TYPE_7__* data; } ;
struct TYPE_21__ {int size; TYPE_5__* data; } ;
struct TYPE_19__ {int size; TYPE_3__* data; } ;
struct TYPE_17__ {int size; TYPE_1__* data; } ;
struct callback_ctx {TYPE_12__ vec_has_next_changed; TYPE_10__ vec_has_prev_changed; TYPE_8__ vec_current_index_changed; TYPE_6__ vec_playback_order_changed; TYPE_4__ vec_playback_repeat_changed; TYPE_2__ vec_items_reset; } ;
typedef int input_item_t ;
struct TYPE_24__ {int has_prev; } ;
struct TYPE_22__ {int current; } ;
struct TYPE_20__ {scalar_t__ order; } ;
struct TYPE_18__ {scalar_t__ repeat; } ;
struct TYPE_16__ {int count; } ;
struct TYPE_14__ {int has_next; } ;


 struct callback_ctx VAR_0 ;
 int FUNC_0 (int **,int) ;
 int FUNC_1 (int **,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct callback_ctx*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int * FUNC_4 (int *,struct vlc_playlist_callbacks*,struct callback_ctx*,int) ;
 int FUNC_5 (int *,int **,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;
 int * FUNC_8 (int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,scalar_t__) ;
 int FUNC_11 (int *,scalar_t__) ;

__attribute__((used)) static void
FUNC_12(void)
{
    vlc_playlist_t *VAR_10 = FUNC_8(((void*)0));
    FUNC_2(*VAR_10);

    input_item_t *VAR_11[10];
    FUNC_0(VAR_11, 10);


    int VAR_12 = FUNC_5(VAR_10, VAR_11, 10);
    FUNC_2(VAR_12 == VAR_3);

    FUNC_11(VAR_10, VAR_2);
    FUNC_10(VAR_10, VAR_1);

    VAR_12 = FUNC_7(VAR_10, 5);
    FUNC_2(VAR_12 == VAR_3);

    struct vlc_playlist_callbacks VAR_13 = {
        .on_items_reset = VAR_7,
        .on_playback_repeat_changed = VAR_9,
        .on_playback_order_changed = VAR_8,
        .on_current_index_changed = VAR_4,
        .on_has_prev_changed = VAR_6,
        .on_has_next_changed = VAR_5,
    };

    struct callback_ctx VAR_14 = VAR_0;
    vlc_playlist_listener_id *VAR_15 =
            FUNC_4(VAR_10, &VAR_13, &VAR_14, 1);
    FUNC_2(*VAR_15);

    FUNC_2(VAR_14.vec_items_reset.size == 1);
    FUNC_2(VAR_14.vec_items_reset.data[0].count == 10);

    FUNC_2(VAR_14.vec_playback_repeat_changed.size == 1);
    FUNC_2(VAR_14.vec_playback_repeat_changed.data[0].repeat ==
                                            VAR_2);

    FUNC_2(VAR_14.vec_playback_order_changed.size == 1);
    FUNC_2(VAR_14.vec_playback_order_changed.data[0].order ==
                                            VAR_1);

    FUNC_2(VAR_14.vec_current_index_changed.size == 1);
    FUNC_2(VAR_14.vec_current_index_changed.data[0].current == 5);

    FUNC_2(VAR_14.vec_has_prev_changed.size == 1);
    FUNC_2(VAR_14.vec_has_prev_changed.data[0].has_prev);

    FUNC_2(VAR_14.vec_has_next_changed.size == 1);
    FUNC_2(VAR_14.vec_has_next_changed.data[0].has_next);

    FUNC_3(&VAR_14);
    FUNC_9(VAR_10, VAR_15);
    FUNC_1(VAR_11, 10);
    FUNC_6(VAR_10);
}
