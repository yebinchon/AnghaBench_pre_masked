
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ priv; } ;
typedef TYPE_1__ ts_stream_processor_t ;
struct TYPE_5__ {int * p_au; int ** pp_au_last; } ;
typedef TYPE_2__ SL_stream_processor_context_t ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1( ts_stream_processor_t *VAR_0 )
{
    SL_stream_processor_context_t *VAR_1 = (SL_stream_processor_context_t *) VAR_0->priv;
    FUNC_0( VAR_1->p_au );
    VAR_1->p_au = ((void*)0);
    VAR_1->pp_au_last = &VAR_1->p_au;
}
