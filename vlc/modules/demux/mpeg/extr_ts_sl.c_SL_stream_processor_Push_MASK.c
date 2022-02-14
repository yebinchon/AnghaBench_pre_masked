
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_17__ {scalar_t__ priv; } ;
typedef TYPE_2__ ts_stream_processor_t ;
typedef int ts_pmt_t ;
struct TYPE_18__ {int i_sl_es_id; int * p_program; } ;
typedef TYPE_3__ ts_es_t ;
struct TYPE_19__ {scalar_t__ b_au_end; scalar_t__ b_au_start; scalar_t__ i_pts; scalar_t__ i_dts; scalar_t__ i_size; } ;
typedef TYPE_4__ sl_header_data ;
struct TYPE_20__ {int sl_descr; } ;
typedef TYPE_5__ es_mpeg4_descriptor_t ;
struct TYPE_21__ {scalar_t__ i_pts; scalar_t__ i_dts; int p_buffer; int i_buffer; } ;
typedef TYPE_6__ block_t ;
struct TYPE_22__ {int * p_au; int ** pp_au_last; TYPE_1__* p_stream; } ;
struct TYPE_16__ {TYPE_3__* p_es; } ;
typedef TYPE_7__ SL_stream_processor_context_t ;


 TYPE_4__ FUNC_0 (int ,int ,int *) ;
 TYPE_5__* FUNC_1 (int *,int ) ;
 TYPE_6__* FUNC_2 (int *) ;
 int FUNC_3 (int ***,TYPE_6__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_6__*) ;

__attribute__((used)) static block_t * FUNC_6( ts_stream_processor_t *VAR_0, uint8_t VAR_1, block_t *VAR_2 )
{
    SL_stream_processor_context_t *VAR_3 = (SL_stream_processor_context_t *) VAR_0->priv;
    ts_es_t *VAR_4 = VAR_3->p_stream->p_es;
    ts_pmt_t *VAR_5 = VAR_4->p_program;

    if( ((VAR_1 & 0xFE) != 0xFA) )
    {
        FUNC_5( VAR_2 );
        return ((void*)0);
    }

    const es_mpeg4_descriptor_t *VAR_6 = FUNC_1( VAR_5, VAR_4->i_sl_es_id );
    if(!VAR_6)
    {
        FUNC_5( VAR_2 );
        VAR_2 = ((void*)0);
    }
    else
    {
        sl_header_data VAR_7 = FUNC_0( VAR_2->i_buffer, VAR_2->p_buffer,
                                                &VAR_6->sl_descr );
        VAR_2->i_buffer -= VAR_7.i_size;
        VAR_2->p_buffer += VAR_7.i_size;
        VAR_2->i_dts = VAR_7.i_dts ? VAR_7.i_dts : VAR_2->i_dts;
        VAR_2->i_pts = VAR_7.i_pts ? VAR_7.i_pts : VAR_2->i_pts;


        if( VAR_7.b_au_start && VAR_3->p_au )
        {
            FUNC_4( VAR_3->p_au );
            VAR_3->p_au = ((void*)0);
            VAR_3->pp_au_last = &VAR_3->p_au;
        }
        FUNC_3( &VAR_3->pp_au_last, VAR_2 );
        VAR_2 = ((void*)0);
        if( VAR_7.b_au_end && VAR_3->p_au )
        {
            VAR_2 = FUNC_2( VAR_3->p_au );
            VAR_3->p_au = ((void*)0);
            VAR_3->pp_au_last = &VAR_3->p_au;
        }
    }

    return VAR_2;
}
