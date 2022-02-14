
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lock; int * p_head; scalar_t__ i_count; } ;
typedef TYPE_1__ subsdelay_heap_t ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1( subsdelay_heap_t *VAR_0 )
{
    VAR_0->i_count = 0;
    VAR_0->p_head = ((void*)0);

    FUNC_0( &VAR_0->lock );
}
