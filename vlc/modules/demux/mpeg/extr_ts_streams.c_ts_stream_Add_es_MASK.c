
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* p_es; } ;
typedef TYPE_1__ ts_stream_t ;
struct TYPE_6__ {struct TYPE_6__* p_next; struct TYPE_6__* p_extraes; } ;
typedef TYPE_2__ ts_es_t ;


 scalar_t__ FUNC_0 (int) ;

void FUNC_1( ts_stream_t *VAR_0, ts_es_t *VAR_1, bool VAR_2 )
{
    ts_es_t **VAR_3 = (VAR_2 && VAR_0->p_es) ?
                           &VAR_0->p_es->p_extraes :
                           &VAR_0->p_es;
    if( FUNC_0(!*VAR_3) )
    {
        *VAR_3 = VAR_1;
    }
    else
    {
        ts_es_t *VAR_4 = (*VAR_3)->p_next;
        (*VAR_3)->p_next = VAR_1;
        VAR_1->p_next = VAR_4;
    }
}
