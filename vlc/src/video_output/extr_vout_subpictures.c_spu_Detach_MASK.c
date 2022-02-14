
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* p; } ;
typedef TYPE_1__ spu_t ;
struct TYPE_5__ {int lock; int * input; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(spu_t *VAR_0)
{
    FUNC_1(&VAR_0->p->lock);
    FUNC_0(VAR_0->p);
    VAR_0->p->input = ((void*)0);
    FUNC_2(&VAR_0->p->lock);
}
