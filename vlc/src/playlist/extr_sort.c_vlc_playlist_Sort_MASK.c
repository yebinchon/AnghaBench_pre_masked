
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {size_t size; int ** data; } ;
struct TYPE_13__ {int current; TYPE_1__ items; int has_next; int has_prev; } ;
typedef TYPE_2__ vlc_playlist_t ;
typedef int vlc_playlist_item_t ;
struct vlc_playlist_state {int dummy; } ;
struct vlc_playlist_sort_criterion {int dummy; } ;
struct vlc_playlist_item_meta {int * item; } ;
struct sort_request {size_t member_1; struct vlc_playlist_sort_criterion const* member_0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (struct vlc_playlist_item_meta**,size_t) ;
 size_t FUNC_6 (TYPE_2__*,int *) ;
 struct vlc_playlist_item_meta** FUNC_7 (TYPE_2__*,struct vlc_playlist_sort_criterion const*,size_t) ;
 int FUNC_8 (TYPE_2__*,int ,int **,size_t) ;
 int FUNC_9 (TYPE_2__*,struct vlc_playlist_state*) ;
 int FUNC_10 (TYPE_2__*,struct vlc_playlist_state*) ;
 int FUNC_11 (struct vlc_playlist_item_meta**,size_t,int,int ,struct sort_request*) ;

int
FUNC_12(vlc_playlist_t *VAR_4,
                  const struct vlc_playlist_sort_criterion VAR_5[],
                  size_t VAR_6)
{
    FUNC_0(VAR_6 > 0);
    FUNC_2(VAR_4);

    vlc_playlist_item_t *VAR_7 = VAR_4->current != -1
                                 ? VAR_4->items.data[VAR_4->current]
                                 : ((void*)0);

    struct vlc_playlist_item_meta **VAR_8 =
        FUNC_7(VAR_4, VAR_5, VAR_6);
    if (FUNC_1(!VAR_8))
        return VAR_0;

    struct sort_request VAR_9 = { VAR_5, VAR_6 };

    FUNC_11(VAR_8, VAR_4->items.size, sizeof(*VAR_8), VAR_2, &VAR_9);


    for (size_t VAR_10 = 0; VAR_10 < VAR_4->items.size; ++VAR_10)
        VAR_4->items.data[VAR_10] = VAR_8[VAR_10]->item;

    FUNC_5(VAR_8, VAR_4->items.size);

    struct vlc_playlist_state VAR_11;
    if (VAR_7)
    {

        FUNC_10(VAR_4, &VAR_11);
        VAR_4->current = FUNC_6(VAR_4, VAR_7);
        VAR_4->has_prev = FUNC_4(VAR_4);
        VAR_4->has_next = FUNC_3(VAR_4);
    }

    FUNC_8(VAR_4, VAR_3, VAR_4->items.data,
                        VAR_4->items.size);
    if (VAR_7)
        FUNC_9(VAR_4, &VAR_11);

    return VAR_1;
}
