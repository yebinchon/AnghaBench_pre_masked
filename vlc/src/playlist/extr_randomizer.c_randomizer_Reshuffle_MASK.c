
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int size; } ;
struct randomizer {TYPE_1__ items; int history; scalar_t__ next; scalar_t__ head; } ;



void
FUNC_0(struct randomizer *VAR_0)
{

    VAR_0->head = 0;
    VAR_0->next = 0;
    VAR_0->history = VAR_0->items.size;
}
