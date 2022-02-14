
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int xsubi ;
struct TYPE_11__ {int size; int ** data; } ;
struct TYPE_12__ {int current; TYPE_1__ items; int has_next; int has_prev; } ;
typedef TYPE_2__ vlc_playlist_t ;
typedef int vlc_playlist_item_t ;
struct vlc_playlist_state {int dummy; } ;


 size_t FUNC_0 (unsigned short*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 size_t FUNC_4 (TYPE_2__*,int *) ;
 int FUNC_5 (TYPE_2__*,int ,int **,int) ;
 int FUNC_6 (TYPE_2__*,struct vlc_playlist_state*) ;
 int FUNC_7 (TYPE_2__*,struct vlc_playlist_state*) ;
 int FUNC_8 (unsigned short*,int) ;

void
FUNC_9(vlc_playlist_t *VAR_1)
{
    FUNC_1(VAR_1);
    if (VAR_1->items.size < 2)

        return;

    vlc_playlist_item_t *VAR_2 = VAR_1->current != -1
                                 ? VAR_1->items.data[VAR_1->current]
                                 : ((void*)0);



    unsigned short VAR_3[3];
    FUNC_8(VAR_3, sizeof(VAR_3));


    for (size_t VAR_4 = VAR_1->items.size - 1; VAR_4 != 0; --VAR_4)
    {
        size_t VAR_5 = (size_t) (FUNC_0(VAR_3) % (VAR_4 + 1));


        vlc_playlist_item_t *VAR_6 = VAR_1->items.data[VAR_4];
        VAR_1->items.data[VAR_4] = VAR_1->items.data[VAR_5];
        VAR_1->items.data[VAR_5] = VAR_6;
    }

    struct vlc_playlist_state VAR_7;
    if (VAR_2)
    {

        FUNC_7(VAR_1, &VAR_7);
        VAR_1->current = FUNC_4(VAR_1, VAR_2);
        VAR_1->has_prev = FUNC_3(VAR_1);
        VAR_1->has_next = FUNC_2(VAR_1);
    }

    FUNC_5(VAR_1, VAR_0, VAR_1->items.data,
                        VAR_1->items.size);
    if (VAR_2)
        FUNC_6(VAR_1, &VAR_7);
}
