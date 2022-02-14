
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
struct TYPE_10__ {int i_size; TYPE_5__** p_elems; } ;
struct TYPE_11__ {TYPE_2__ objects; } ;
struct TYPE_12__ {TYPE_3__ od; TYPE_1__* iod; } ;
typedef TYPE_4__ ts_pmt_t ;
struct TYPE_13__ {TYPE_6__* es_descr; } ;
typedef TYPE_5__ od_descriptor_t ;
struct TYPE_14__ {scalar_t__ i_es_id; scalar_t__ b_ok; } ;
typedef TYPE_6__ es_mpeg4_descriptor_t ;
struct TYPE_9__ {TYPE_6__* es_descr; } ;


 int VAR_0 ;

const es_mpeg4_descriptor_t * FUNC_0( const ts_pmt_t *VAR_1, uint16_t VAR_2 )
{
    for( int VAR_3 = 0; VAR_3 < VAR_0; VAR_3++ )
    {
        const es_mpeg4_descriptor_t *VAR_4 = &VAR_1->iod->es_descr[VAR_3];
        if( VAR_4->i_es_id == VAR_2 && VAR_4->b_ok )
            return VAR_4;
    }
    for( int VAR_5=0; VAR_5<VAR_1->od.objects.i_size; VAR_5++ )
    {
        const od_descriptor_t *VAR_6 = VAR_1->od.objects.p_elems[VAR_5];
        for( int VAR_7 = 0; VAR_7 < VAR_0; VAR_7++ )
        {
            const es_mpeg4_descriptor_t *VAR_8 = &VAR_6->es_descr[VAR_7];
            if( VAR_8->i_es_id == VAR_2 && VAR_8->b_ok )
                return VAR_8;
        }
    }
    return ((void*)0);
}
