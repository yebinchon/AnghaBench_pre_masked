
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int size; } ;
struct randomizer {int next; int history; TYPE_1__ items; int loop; } ;



bool
FUNC_0(struct randomizer *VAR_0)
{
    if (!VAR_0->loop)

        return VAR_0->next > 1;

    if (!VAR_0->items.size)

        return 0;



    return (VAR_0->next + VAR_0->items.size - VAR_0->history) % VAR_0->items.size != 1;
}
