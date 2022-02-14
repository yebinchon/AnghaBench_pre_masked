
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ts_stream_t ;
struct TYPE_5__ {int * pf_reset; int pf_push; int pf_delete; TYPE_2__* priv; } ;
typedef TYPE_1__ ts_stream_processor_t ;
typedef int es_out_t ;
struct TYPE_6__ {int * p_stream; int * out; } ;
typedef TYPE_2__ Metadata_stream_processor_context_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 void* FUNC_1 (int) ;

ts_stream_processor_t *FUNC_2( ts_stream_t *VAR_2, es_out_t *VAR_3 )
{
    ts_stream_processor_t *VAR_4 = FUNC_1(sizeof(*VAR_4));
    if(!VAR_4)
        return ((void*)0);

    Metadata_stream_processor_context_t *VAR_5 = FUNC_1( sizeof(Metadata_stream_processor_context_t) );
    if(!VAR_5)
    {
        FUNC_0(VAR_4);
        return ((void*)0);
    }
    VAR_5->out = VAR_3;
    VAR_5->p_stream = VAR_2;

    VAR_4->priv = VAR_5;
    VAR_4->pf_delete = VAR_0;
    VAR_4->pf_push = VAR_1;
    VAR_4->pf_reset = ((void*)0);

    return VAR_4;
}
