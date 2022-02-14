
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* cbs; int * p_next; } ;
typedef TYPE_2__ block_t ;
struct TYPE_6__ {int (* free ) (TYPE_2__*) ;} ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;

void FUNC_2(block_t *VAR_0)
{

    VAR_0->p_next = ((void*)0);
    FUNC_0 (VAR_0);

    VAR_0->cbs->free(VAR_0);
}
