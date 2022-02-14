
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int i_number; } ;
typedef TYPE_2__ ts_pmt_t ;
struct TYPE_8__ {scalar_t__ i_service_id; scalar_t__ i_format; } ;
struct TYPE_11__ {int i_group; } ;
struct TYPE_10__ {int b_interlaced; TYPE_1__ metadata; TYPE_7__ fmt; int * p_next; int * p_extraes; scalar_t__ i_next_block_flags; scalar_t__ i_sl_es_id; int * id; TYPE_2__* p_program; } ;
typedef TYPE_3__ ts_es_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_7__*,int ,int ) ;
 TYPE_3__* FUNC_1 (int) ;

ts_es_t * FUNC_2( ts_pmt_t *VAR_1 )
{
    ts_es_t *VAR_2 = FUNC_1( sizeof(*VAR_2) );
    if( VAR_2 )
    {
        VAR_2->p_program = VAR_1;
        VAR_2->id = ((void*)0);
        VAR_2->i_sl_es_id = 0;
        VAR_2->i_next_block_flags = 0;
        VAR_2->p_extraes = ((void*)0);
        VAR_2->p_next = ((void*)0);
        VAR_2->b_interlaced = 0;
        FUNC_0( &VAR_2->fmt, VAR_0, 0 );
        VAR_2->fmt.i_group = VAR_1->i_number;
        VAR_2->metadata.i_format = 0;
        VAR_2->metadata.i_service_id = 0;
    }
    return VAR_2;
}
