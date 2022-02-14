
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* p; } ;
typedef TYPE_2__ vout_thread_t ;
typedef int picture_t ;
struct TYPE_4__ {int decoder_fifo; int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;

bool FUNC_3(vout_thread_t *VAR_0)
{
    FUNC_0(!VAR_0->p->dummy);
    if (!VAR_0->p->decoder_fifo)
        return 1;

    picture_t *VAR_1 = FUNC_2(VAR_0->p->decoder_fifo);
    if (VAR_1)
        FUNC_1(VAR_1);

    return !VAR_1;
}
