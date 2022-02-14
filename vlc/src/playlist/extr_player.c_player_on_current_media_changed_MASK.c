
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {TYPE_3__** data; } ;
struct TYPE_12__ {int current; scalar_t__ order; int has_next; int has_prev; int randomizer; TYPE_1__ items; } ;
typedef TYPE_2__ vlc_playlist_t ;
struct TYPE_13__ {int * media; } ;
typedef TYPE_3__ vlc_playlist_item_t ;
typedef int vlc_player_t ;
struct vlc_playlist_state {int dummy; } ;
typedef int ssize_t ;
typedef int input_item_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_3__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int *) ;
 int FUNC_6 (TYPE_2__*,struct vlc_playlist_state*) ;
 int FUNC_7 (TYPE_2__*,struct vlc_playlist_state*) ;

__attribute__((used)) static void
FUNC_8(vlc_player_t *VAR_1, input_item_t *VAR_2,
                                void *VAR_3)
{
    FUNC_0(VAR_1);
    vlc_playlist_t *VAR_4 = VAR_3;


    FUNC_2(VAR_4);

    input_item_t *VAR_5 = VAR_4->current != -1
                        ? VAR_4->items.data[VAR_4->current]->media
                        : ((void*)0);
    if (VAR_2 == VAR_5)

        return;

    ssize_t VAR_6;
    if (VAR_2)
    {
        VAR_6 = FUNC_5(VAR_4, VAR_2);
        if (VAR_6 != -1)
        {
            vlc_playlist_item_t *VAR_7 = VAR_4->items.data[VAR_6];
            if (VAR_4->order == VAR_0)
                FUNC_1(&VAR_4->randomizer, VAR_7);
        }
    }
    else
        VAR_6 = -1;

    struct vlc_playlist_state VAR_8;
    FUNC_7(VAR_4, &VAR_8);

    VAR_4->current = VAR_6;
    VAR_4->has_prev = FUNC_4(VAR_4);
    VAR_4->has_next = FUNC_3(VAR_4);

    FUNC_6(VAR_4, &VAR_8);
}
