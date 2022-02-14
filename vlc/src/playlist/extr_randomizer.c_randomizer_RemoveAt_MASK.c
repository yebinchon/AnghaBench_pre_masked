
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int size; int * data; } ;
struct randomizer {size_t next; size_t head; size_t history; TYPE_1__ items; } ;


 int FUNC_0 (int *,int *,size_t) ;

__attribute__((used)) static void
FUNC_1(struct randomizer *VAR_0, size_t VAR_1)
{
    if (VAR_1 < VAR_0->next)
        VAR_0->next--;

    if (VAR_1 < VAR_0->head)
    {

        FUNC_0(&VAR_0->items.data[VAR_1],
                &VAR_0->items.data[VAR_1 + 1],
                (VAR_0->head - VAR_1 - 1) * sizeof(*VAR_0->items.data));
        VAR_0->head--;
        VAR_1 = VAR_0->head;
    }

    if (VAR_1 < VAR_0->history)
    {

        VAR_0->items.data[VAR_1] = VAR_0->items.data[VAR_0->history - 1];
        VAR_1 = VAR_0->history - 1;
        VAR_0->history--;
    }

    if (VAR_1 < VAR_0->items.size - 1)
    {

        FUNC_0(&VAR_0->items.data[VAR_1],
                &VAR_0->items.data[VAR_1 + 1],
                (VAR_0->items.size - VAR_1 - 1) * sizeof(*VAR_0->items.data));
    }

    VAR_0->items.size--;
}
