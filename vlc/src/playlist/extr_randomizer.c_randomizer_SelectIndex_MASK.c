
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vlc_playlist_item_t ;
struct TYPE_2__ {int size; int ** data; } ;
struct randomizer {size_t history; size_t head; int next; TYPE_1__ items; } ;
typedef int selected ;


 int FUNC_0 (int **,int **,size_t) ;

__attribute__((used)) static void
FUNC_1(struct randomizer *VAR_0, size_t VAR_1)
{
    vlc_playlist_item_t *VAR_2 = VAR_0->items.data[VAR_1];
    if (VAR_0->history && VAR_1 >= VAR_0->history)
    {
        if (VAR_1 > VAR_0->history)
        {
            FUNC_0(&VAR_0->items.data[VAR_0->history + 1],
                    &VAR_0->items.data[VAR_0->history],
                    (VAR_1 - VAR_0->history) * sizeof(VAR_2));
            VAR_1 = VAR_0->history;
        }
        VAR_0->history = (VAR_0->history + 1) % VAR_0->items.size;
    }

    if (VAR_1 >= VAR_0->head)
    {
        VAR_0->items.data[VAR_1] = VAR_0->items.data[VAR_0->head];
        VAR_0->items.data[VAR_0->head] = VAR_2;
        VAR_0->head++;
    }
    else if (VAR_1 < VAR_0->items.size - 1)
    {
        FUNC_0(&VAR_0->items.data[VAR_1],
                &VAR_0->items.data[VAR_1 + 1],
                (VAR_0->head - VAR_1 - 1) * sizeof(VAR_2));
        VAR_0->items.data[VAR_0->head - 1] = VAR_2;
    }

    VAR_0->next = VAR_0->head;
}
