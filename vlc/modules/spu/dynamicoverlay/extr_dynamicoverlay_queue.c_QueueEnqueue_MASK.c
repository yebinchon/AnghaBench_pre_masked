
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* p_tail; TYPE_2__* p_head; } ;
typedef TYPE_1__ queue_t ;
struct TYPE_6__ {struct TYPE_6__* p_next; } ;
typedef TYPE_2__ command_t ;


 int VAR_0 ;

int FUNC_0( queue_t *VAR_1, command_t *VAR_2 )
{
    if( VAR_1->p_tail != ((void*)0) )
    {
        VAR_1->p_tail->p_next = VAR_2;
    }
    if( VAR_1->p_head == ((void*)0) )
    {
        VAR_1->p_head = VAR_2;
    }
    VAR_1->p_tail = VAR_2;
    VAR_2->p_next = ((void*)0);

    return VAR_0;
}
