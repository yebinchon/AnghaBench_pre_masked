
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_playlist_t ;
typedef int vlc_playlist_listener_id ;
typedef int vlc_playlist_item_t ;
struct vlc_playlist_callbacks {int on_items_removed; } ;
struct TYPE_6__ {int size; TYPE_2__* data; } ;
struct callback_ctx {TYPE_3__ vec_items_removed; } ;
typedef int input_item_t ;
struct TYPE_4__ {int playlist_size; } ;
struct TYPE_5__ {int index; int count; TYPE_1__ state; } ;


 struct callback_ctx VAR_0 ;
 int FUNC_0 (int **,int) ;
 int FUNC_1 (int **,int) ;
 int FUNC_2 (int,int) ;
 int VAR_1 ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct callback_ctx*) ;
 int VAR_2 ;
 int * FUNC_5 (int *,struct vlc_playlist_callbacks*,struct callback_ctx*,int) ;
 int FUNC_6 (int *,int **,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int *,int) ;
 int * FUNC_10 (int *) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *,int **,int,int) ;

__attribute__((used)) static void
FUNC_13(void)
{
    vlc_playlist_t *VAR_3 = FUNC_10(((void*)0));
    FUNC_3(*VAR_3);

    input_item_t *VAR_4[10];
    FUNC_0(VAR_4, 10);


    int VAR_5 = FUNC_6(VAR_3, VAR_4, 10);
    FUNC_3(VAR_5 == VAR_1);

    struct vlc_playlist_callbacks VAR_6 = {
        .on_items_removed = VAR_2,
    };

    struct callback_ctx VAR_7 = VAR_0;
    vlc_playlist_listener_id *VAR_8 =
            FUNC_5(VAR_3, &VAR_6, &VAR_7, 0);
    FUNC_3(*VAR_8);

    vlc_playlist_item_t *VAR_9[] = {
        FUNC_9(VAR_3, 3),
        FUNC_9(VAR_3, 4),
        FUNC_9(VAR_3, 5),
        FUNC_9(VAR_3, 6),
    };

    VAR_5 = FUNC_12(VAR_3, VAR_9, 4, 3);
    FUNC_3(VAR_5 == VAR_1);

    FUNC_3(FUNC_7(VAR_3) == 6);

    FUNC_2(0, 0);
    FUNC_2(1, 1);
    FUNC_2(2, 2);
    FUNC_2(3, 7);
    FUNC_2(4, 8);
    FUNC_2(5, 9);

    FUNC_3(VAR_7.vec_items_removed.size == 1);
    FUNC_3(VAR_7.vec_items_removed.data[0].index == 3);
    FUNC_3(VAR_7.vec_items_removed.data[0].count == 4);
    FUNC_3(VAR_7.vec_items_removed.data[0].state.playlist_size == 6);

    FUNC_4(&VAR_7);
    FUNC_11(VAR_3, VAR_8);
    FUNC_1(VAR_4, 10);
    FUNC_8(VAR_3);
}
