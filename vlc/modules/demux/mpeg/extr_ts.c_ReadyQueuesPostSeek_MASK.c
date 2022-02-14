
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_9__ ;
typedef struct TYPE_31__ TYPE_8__ ;
typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;
typedef struct TYPE_23__ TYPE_16__ ;
typedef struct TYPE_22__ TYPE_14__ ;
typedef struct TYPE_21__ TYPE_13__ ;
typedef struct TYPE_20__ TYPE_12__ ;
typedef struct TYPE_19__ TYPE_11__ ;
typedef struct TYPE_18__ TYPE_10__ ;


struct TYPE_29__ {int * p_head; int ** pp_last; } ;
struct TYPE_32__ {int i_last_dts; int p_proc; int p_sections_proc; TYPE_6__ prepcr; TYPE_13__* p_es; } ;
typedef TYPE_9__ ts_stream_t ;
struct TYPE_31__ {int i_current; } ;
struct TYPE_28__ {int i_size; TYPE_11__** p_elems; } ;
struct TYPE_18__ {TYPE_8__ pcr; TYPE_5__ e_streams; } ;
typedef TYPE_10__ ts_pmt_t ;
struct TYPE_30__ {TYPE_9__* p_stream; } ;
struct TYPE_19__ {scalar_t__ type; int i_cc; TYPE_7__ u; scalar_t__ i_dup; } ;
typedef TYPE_11__ ts_pid_t ;
struct TYPE_27__ {int i_size; TYPE_3__** p_elems; } ;
struct TYPE_20__ {TYPE_4__ programs; } ;
typedef TYPE_12__ ts_pat_t ;
struct TYPE_21__ {int i_next_block_flags; struct TYPE_21__* p_next; } ;
typedef TYPE_13__ ts_es_t ;
struct TYPE_22__ {int * p_sys; } ;
typedef TYPE_14__ demux_t ;
typedef int demux_sys_t ;
struct TYPE_25__ {TYPE_10__* p_pmt; } ;
struct TYPE_26__ {TYPE_2__ u; } ;
struct TYPE_24__ {TYPE_12__* p_pat; } ;
struct TYPE_23__ {TYPE_1__ u; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_9__*) ;
 TYPE_16__* FUNC_1 (int *,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5( demux_t *VAR_2 )
{
    demux_sys_t *VAR_3 = VAR_2->p_sys;

    ts_pat_t *VAR_4 = FUNC_1(VAR_3, 0)->u.p_pat;
    for( int VAR_5=0; VAR_5< VAR_4->programs.i_size; VAR_5++ )
    {
        ts_pmt_t *VAR_6 = VAR_4->programs.p_elems[VAR_5]->u.p_pmt;
        for( int VAR_7=0; VAR_7<VAR_6->e_streams.i_size; VAR_7++ )
        {
            ts_pid_t *VAR_8 = VAR_6->e_streams.p_elems[VAR_7];
            ts_stream_t *VAR_9 = VAR_8->u.p_stream;

            if( VAR_8->type != VAR_1 )
                continue;

            for( ts_es_t *VAR_10 = VAR_9->p_es; VAR_10; VAR_10 = VAR_10->p_next )
                VAR_10->i_next_block_flags |= VAR_0;

            VAR_8->i_cc = 0xff;
            VAR_8->i_dup = 0;
            VAR_8->u.p_stream->i_last_dts = -1;

            if( VAR_8->u.p_stream->prepcr.p_head )
            {
                FUNC_2( VAR_8->u.p_stream->prepcr.p_head );
                VAR_8->u.p_stream->prepcr.p_head = ((void*)0);
                VAR_8->u.p_stream->prepcr.pp_last = &VAR_8->u.p_stream->prepcr.p_head;
            }

            FUNC_3( VAR_8->u.p_stream->p_sections_proc );
            FUNC_4( VAR_8->u.p_stream->p_proc );

            FUNC_0( VAR_8->u.p_stream );
        }
        VAR_6->pcr.i_current = -1;
    }
}
