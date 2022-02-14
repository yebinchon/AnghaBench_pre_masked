
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* p_tail; int * p_head; } ;
typedef TYPE_2__ queue_t ;
struct TYPE_5__ {int * p_next; } ;


 int VAR_0 ;

int FUNC_0( queue_t *VAR_1, queue_t *VAR_2 )
{
    if( VAR_2->p_head == ((void*)0) ) {
        return VAR_0;
    }

    if( VAR_1->p_head == ((void*)0) ) {
        VAR_1->p_head = VAR_2->p_head;
        VAR_1->p_tail = VAR_2->p_tail;
    } else {
        VAR_1->p_tail->p_next = VAR_2->p_head;
        VAR_1->p_tail = VAR_2->p_tail;
    }
    VAR_2->p_head = VAR_2->p_tail = ((void*)0);

    return VAR_0;
}
