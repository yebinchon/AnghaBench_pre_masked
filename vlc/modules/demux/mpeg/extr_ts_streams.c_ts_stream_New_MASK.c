
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int * p_head; int ** pp_last; } ;
struct TYPE_7__ {scalar_t__ i_saved; int * p_data; int ** pp_last; scalar_t__ i_gathered; scalar_t__ i_data_size; } ;
struct TYPE_9__ {int b_broken_PUSI_conformance; int b_always_receive; int i_last_dts; TYPE_2__ prepcr; int * p_proc; int * p_sections_proc; TYPE_1__ gather; int transport; scalar_t__ i_stream_type; int p_es; } ;
typedef TYPE_3__ ts_stream_t ;
typedef int ts_pmt_t ;
typedef int demux_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_3__*) ;
 TYPE_3__* FUNC_2 (int) ;
 int FUNC_3 (int *) ;

ts_stream_t *FUNC_4( demux_t *VAR_1, ts_pmt_t *VAR_2 )
{
    FUNC_0(VAR_1);
    ts_stream_t *VAR_3 = FUNC_2( sizeof( ts_stream_t ) );
    if( !VAR_3 )
        return ((void*)0);

    VAR_3->p_es = FUNC_3( VAR_2 );
    if( !VAR_3->p_es )
    {
        FUNC_1( VAR_3 );
        return ((void*)0);
    }
    VAR_3->i_stream_type = 0;
    VAR_3->transport = VAR_0;
    VAR_3->gather.i_data_size = 0;
    VAR_3->gather.i_gathered = 0;
    VAR_3->gather.p_data = ((void*)0);
    VAR_3->gather.pp_last = &VAR_3->gather.p_data;
    VAR_3->gather.i_saved = 0;
    VAR_3->b_broken_PUSI_conformance = 0;
    VAR_3->b_always_receive = 0;
    VAR_3->p_sections_proc = ((void*)0);
    VAR_3->p_proc = ((void*)0);
    VAR_3->prepcr.p_head = ((void*)0);
    VAR_3->prepcr.pp_last = &VAR_3->prepcr.p_head;
    VAR_3->i_last_dts = -1;

    return VAR_3;
}
