
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct randomizer {scalar_t__ history; scalar_t__ next; scalar_t__ head; int items; } ;


 int FUNC_0 (int *) ;

void
FUNC_1(struct randomizer *VAR_0)
{
    FUNC_0(&VAR_0->items);
    VAR_0->head = 0;
    VAR_0->next = 0;
    VAR_0->history = 0;
}
