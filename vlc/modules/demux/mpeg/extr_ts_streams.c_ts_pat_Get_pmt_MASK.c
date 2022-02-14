
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_11__ {scalar_t__ i_number; } ;
typedef TYPE_4__ ts_pmt_t ;
struct TYPE_10__ {int i_size; TYPE_2__** p_elems; } ;
struct TYPE_12__ {TYPE_3__ programs; } ;
typedef TYPE_5__ ts_pat_t ;
struct TYPE_8__ {TYPE_4__* p_pmt; } ;
struct TYPE_9__ {TYPE_1__ u; } ;



ts_pmt_t *FUNC_0( ts_pat_t *VAR_0, uint16_t VAR_1 )
{
    ts_pmt_t *VAR_2 = ((void*)0);
    for( int VAR_3=0; VAR_3<VAR_0->programs.i_size; VAR_3++ )
    {
        VAR_2 = VAR_0->programs.p_elems[VAR_3]->u.p_pmt;
        if( VAR_2->i_number == VAR_1 )
            break;
    }
    return VAR_2;
}
