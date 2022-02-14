
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * p_tail; int * p_head; } ;
typedef TYPE_1__ queue_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;

int FUNC_1( queue_t *VAR_1 )
{
    FUNC_0( VAR_1, 0, sizeof( queue_t ) );
    VAR_1->p_head = ((void*)0);
    VAR_1->p_tail = ((void*)0);

    return VAR_0;
}
