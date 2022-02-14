
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ decoder_t ;
struct TYPE_9__ {scalar_t__ (* flush ) (TYPE_3__*) ;} ;
struct TYPE_8__ {int b_input_dequeued; int b_flush_out; int b_output_ready; int lock; int dec_cond; int b_aborted; int cond; TYPE_3__ api; int (* pf_on_flush ) (TYPE_1__*) ;scalar_t__ i_csd_send; scalar_t__ i_preroll_end; } ;
typedef TYPE_2__ decoder_sys_t ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static void FUNC_5(decoder_t *VAR_1)
{
    decoder_sys_t *VAR_2 = VAR_1->p_sys;
    bool VAR_3 = VAR_2->b_input_dequeued;

    VAR_2->b_input_dequeued = 0;
    VAR_2->b_flush_out = 1;
    VAR_2->i_preroll_end = 0;
    VAR_2->b_output_ready = 0;

    VAR_2->i_csd_send = 0;

    VAR_2->pf_on_flush(VAR_1);

    if (VAR_3 && VAR_2->api.flush(&VAR_2->api) != VAR_0)
    {
        FUNC_0(VAR_1);
        return;
    }

    FUNC_3(&VAR_2->cond);

    while (!VAR_2->b_aborted && VAR_2->b_flush_out)
        FUNC_4(&VAR_2->dec_cond, &VAR_2->lock);
}
