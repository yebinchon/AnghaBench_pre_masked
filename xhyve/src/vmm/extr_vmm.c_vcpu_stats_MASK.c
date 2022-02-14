
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm {TYPE_1__* vcpu; } ;
struct TYPE_2__ {void* stats; } ;



void *
FUNC_0(struct vm *VAR_0, int VAR_1)
{

 return (VAR_0->vcpu[VAR_1].stats);
}
