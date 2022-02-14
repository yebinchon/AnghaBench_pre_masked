
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {TYPE_5__** data; } ;
struct TYPE_10__ {int current; TYPE_1__ items; } ;
typedef TYPE_2__ vlc_playlist_t ;
typedef int ssize_t ;
typedef int input_item_t ;
struct TYPE_11__ {int * media; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int *) ;
 int FUNC_3 (TYPE_2__*,int ,int,TYPE_5__**,int) ;

void
FUNC_4(vlc_playlist_t *VAR_1, input_item_t *VAR_2)
{
    FUNC_0(VAR_1);
    if (!FUNC_1(VAR_1))

        return;

    ssize_t VAR_3;
    if (VAR_1->current != -1 &&
            VAR_1->items.data[VAR_1->current]->media == VAR_2)


        VAR_3 = VAR_1->current;
    else
    {

        VAR_3 = FUNC_2(VAR_1, VAR_2);
        if (VAR_3 == -1)
            return;
    }
    FUNC_3(VAR_1, VAR_0, VAR_3,
                        &VAR_1->items.data[VAR_3], 1);
}
