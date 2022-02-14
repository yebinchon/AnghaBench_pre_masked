
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_12__ {int i_size; TYPE_3__** p_elems; } ;
struct TYPE_13__ {TYPE_4__ e_streams; } ;
typedef TYPE_5__ ts_pmt_t ;
struct TYPE_14__ {scalar_t__ i_sl_es_id; } ;
typedef TYPE_6__ ts_es_t ;
struct TYPE_10__ {TYPE_1__* p_stream; } ;
struct TYPE_11__ {TYPE_2__ u; } ;
struct TYPE_9__ {TYPE_6__* p_es; } ;



__attribute__((used)) static ts_es_t * FUNC_0( ts_pmt_t *VAR_0, uint16_t VAR_1 )
{
    for( int VAR_2=0; VAR_2< VAR_0->e_streams.i_size; VAR_2++ )
    {
        ts_es_t *VAR_3 = VAR_0->e_streams.p_elems[VAR_2]->u.p_stream->p_es;
        if( VAR_3->i_sl_es_id == VAR_1 )
            return VAR_3;
    }
    return ((void*)0);
}
