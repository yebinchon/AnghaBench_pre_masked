
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* p; } ;
typedef TYPE_2__ vout_thread_t ;
struct TYPE_9__ {int * p_next; } ;
typedef TYPE_3__ picture_t ;
struct TYPE_7__ {int control; int decoder_fifo; int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,TYPE_3__*) ;
 int FUNC_2 (int *) ;

void FUNC_3(vout_thread_t *VAR_0, picture_t *VAR_1)
{
    FUNC_0(!VAR_0->p->dummy);
    VAR_1->p_next = ((void*)0);
    FUNC_1(VAR_0->p->decoder_fifo, VAR_1);
    FUNC_2(&VAR_0->p->control);
}
