
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ size; } ;
struct randomizer {scalar_t__ next; TYPE_1__ items; scalar_t__ loop; } ;



bool
FUNC_0(struct randomizer *VAR_0)
{
    return VAR_0->loop || VAR_0->next < VAR_0->items.size;
}
