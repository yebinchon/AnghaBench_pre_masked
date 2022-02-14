
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* p_head; TYPE_2__* p_tail; } ;
typedef TYPE_1__ queue_t ;
struct TYPE_6__ {struct TYPE_6__* p_next; } ;
typedef TYPE_2__ command_t ;



command_t *FUNC_0( queue_t *VAR_0 )
{
    if( VAR_0->p_head == ((void*)0) )
    {
        return ((void*)0);
    }
    else
    {
        command_t *VAR_1 = VAR_0->p_head;
        if( VAR_0->p_head == VAR_0->p_tail )
        {
            VAR_0->p_head = VAR_0->p_tail = ((void*)0);
        }
        else
        {
            VAR_0->p_head = VAR_0->p_head->p_next;
        }
        return VAR_1;
    }
}
