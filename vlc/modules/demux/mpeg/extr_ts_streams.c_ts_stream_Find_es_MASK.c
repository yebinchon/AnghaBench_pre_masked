
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* p_es; } ;
typedef TYPE_1__ ts_stream_t ;
typedef int ts_pmt_t ;
struct TYPE_6__ {int const* p_program; struct TYPE_6__* p_next; } ;
typedef TYPE_2__ ts_es_t ;



ts_es_t * FUNC_0( ts_stream_t *VAR_0, const ts_pmt_t *VAR_1 )
{
    for( ts_es_t *VAR_2 = VAR_0->p_es; VAR_2; VAR_2 = VAR_2->p_next )
    {
        if( VAR_2->p_program == VAR_1 )
            return VAR_2;
    }
    return ((void*)0);
}
