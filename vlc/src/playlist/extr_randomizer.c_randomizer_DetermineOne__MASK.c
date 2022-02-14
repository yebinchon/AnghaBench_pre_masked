
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t size; } ;
struct randomizer {size_t head; size_t history; int xsubi; TYPE_1__ items; } ;


 int FUNC_0 (int) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (struct randomizer*,size_t,size_t) ;

__attribute__((used)) static inline void
FUNC_3(struct randomizer *VAR_0, size_t VAR_1)
{
    FUNC_0(VAR_0->head < VAR_0->items.size);
    FUNC_0(VAR_0->items.size - VAR_0->head > VAR_1);
    size_t VAR_2 = VAR_0->items.size - VAR_0->head - VAR_1;
    size_t VAR_3 = VAR_0->head + (FUNC_1(VAR_0->xsubi) % VAR_2);
    FUNC_2(VAR_0, VAR_0->head, VAR_3);

    if (VAR_0->head == VAR_0->history)
        VAR_0->history++;
    VAR_0->head++;
}
