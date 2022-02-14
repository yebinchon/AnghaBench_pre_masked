
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* p_es; } ;
typedef TYPE_1__ ts_stream_t ;
typedef int ts_pmt_t ;
struct TYPE_6__ {struct TYPE_6__* p_next; int const* p_program; } ;
typedef TYPE_2__ ts_es_t ;



ts_es_t * FUNC_0( ts_stream_t *VAR_0, const ts_pmt_t *VAR_1 )
{
    ts_es_t **VAR_2 = &VAR_0->p_es;
    for( ts_es_t *VAR_3 = VAR_0->p_es; VAR_3; VAR_3 = VAR_3->p_next )
    {
        if( VAR_3->p_program == VAR_1 )
        {
            *VAR_2 = VAR_3->p_next;
            VAR_3->p_next = ((void*)0);
            return VAR_3;
        }
        VAR_2 = &VAR_3->p_next;
    }
    return ((void*)0);
}
