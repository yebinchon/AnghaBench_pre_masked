
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int size; } ;
struct randomizer {TYPE_1__ items; scalar_t__ history; scalar_t__ next; scalar_t__ head; } ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct randomizer*,int ) ;

__attribute__((used)) static void
FUNC_2(struct randomizer *VAR_1)
{
    FUNC_0(VAR_1->items.size > 0);
    VAR_1->head = 0;
    VAR_1->next = 0;
    VAR_1->history = 0;
    size_t VAR_2 = VAR_0;
    if (VAR_2 > VAR_1->items.size - 1)

        VAR_2 = VAR_1->items.size - 1;
    while (VAR_2)
        FUNC_1(VAR_1, VAR_2--);
}
