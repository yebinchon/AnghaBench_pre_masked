
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct randomizer {int loop; scalar_t__ history; scalar_t__ next; scalar_t__ head; int xsubi; int items; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *) ;

void
FUNC_2(struct randomizer *VAR_0)
{
    FUNC_1(&VAR_0->items);



    FUNC_0(VAR_0->xsubi, sizeof(VAR_0->xsubi));

    VAR_0->loop = 0;
    VAR_0->head = 0;
    VAR_0->next = 0;
    VAR_0->history = 0;
}
