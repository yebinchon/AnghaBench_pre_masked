
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_9__ ;
typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_22__ {int p_es; int b_always_receive; } ;
typedef TYPE_4__ ts_stream_t ;
struct TYPE_20__ {int i_size; TYPE_6__** p_elems; } ;
struct TYPE_23__ {scalar_t__ i_pid_pcr; int b_selected; TYPE_2__ e_streams; int i_number; } ;
typedef TYPE_5__ ts_pmt_t ;
struct TYPE_21__ {TYPE_4__* p_stream; TYPE_5__* p_pmt; TYPE_7__* p_pat; } ;
struct TYPE_24__ {int i_flags; scalar_t__ i_pid; TYPE_3__ u; } ;
typedef TYPE_6__ ts_pid_t ;
struct TYPE_19__ {int i_size; TYPE_6__** p_elems; } ;
struct TYPE_25__ {TYPE_1__ programs; } ;
typedef TYPE_7__ ts_pat_t ;
struct TYPE_26__ {int out; TYPE_9__* p_sys; } ;
typedef TYPE_8__ demux_t ;
struct TYPE_27__ {int b_access_control; scalar_t__ b_default_selection; } ;
typedef TYPE_9__ demux_sys_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;
 TYPE_6__* FUNC_1 (TYPE_9__*,scalar_t__) ;
 int FUNC_2 (int ,int ,TYPE_5__*,int*) ;
 int FUNC_3 (TYPE_9__*,int ) ;
 int FUNC_4 (TYPE_9__*,TYPE_6__*) ;
 int FUNC_5 (TYPE_8__*,char*,scalar_t__,int ) ;

void FUNC_6( demux_t *VAR_1, bool VAR_2 )
{
    demux_sys_t *VAR_3 = VAR_1->p_sys;
    ts_pat_t *VAR_4 = FUNC_1(VAR_3, 0)->u.p_pat;
    for( int VAR_5=0; VAR_5< VAR_4->programs.i_size; VAR_5++ )
    {
        ts_pid_t *VAR_6 = VAR_4->programs.p_elems[VAR_5];
        ts_pmt_t *VAR_7 = VAR_6->u.p_pmt;

        VAR_6->i_flags &= ~VAR_0;
        for( int VAR_8=0; VAR_8< VAR_7->e_streams.i_size; VAR_8++ )
            VAR_7->e_streams.p_elems[VAR_8]->i_flags &= ~VAR_0;
        FUNC_1(VAR_3, VAR_7->i_pid_pcr)->i_flags &= ~VAR_0;
    }


    for( int VAR_9=0; VAR_9< VAR_4->programs.i_size; VAR_9++ )
    {
        ts_pid_t *VAR_10 = VAR_4->programs.p_elems[VAR_9];
        ts_pmt_t *VAR_11 = VAR_10->u.p_pmt;

        if( (VAR_3->b_default_selection && !VAR_3->b_access_control) || VAR_2 )
             VAR_11->b_selected = 1;
        else
             VAR_11->b_selected = FUNC_3( VAR_3, VAR_11->i_number );

        if( VAR_11->b_selected )
        {
            VAR_10->i_flags |= VAR_0;

            for( int VAR_12=0; VAR_12<VAR_11->e_streams.i_size; VAR_12++ )
            {
                ts_pid_t *VAR_13 = VAR_11->e_streams.p_elems[VAR_12];
                ts_stream_t *VAR_14 = VAR_13->u.p_stream;

                bool VAR_15 = 1;
                if( !VAR_14->b_always_receive && !VAR_2 )
                    FUNC_2( VAR_1->out, VAR_14->p_es, VAR_11, &VAR_15 );

                if( VAR_15 )
                {
                    FUNC_5( VAR_1, "enabling pid %d from program %d", VAR_13->i_pid, VAR_11->i_number );
                    VAR_13->i_flags |= VAR_0;
                }
            }


            if( VAR_11->i_pid_pcr > 0 )
            {
                FUNC_1(VAR_3, VAR_11->i_pid_pcr)->i_flags |= VAR_0;
                FUNC_5( VAR_1, "enabling pcr pid %d from program %d", VAR_11->i_pid_pcr, VAR_11->i_number );
            }
        }
    }


    for( int VAR_16=0; VAR_16< VAR_4->programs.i_size; VAR_16++ )
    {
        ts_pid_t *VAR_17 = VAR_4->programs.p_elems[VAR_16];
        ts_pmt_t *VAR_18 = VAR_17->u.p_pmt;

        FUNC_4( VAR_3, VAR_17 );
        for( int VAR_19=0; VAR_19< VAR_18->e_streams.i_size; VAR_19++ )
        {
            ts_pid_t *VAR_20 = VAR_18->e_streams.p_elems[VAR_19];
            FUNC_4( VAR_3, VAR_20 );
            if( (VAR_20->i_flags & VAR_0) == 0 )
                FUNC_0( VAR_20->u.p_stream );
        }
        FUNC_4( VAR_3, FUNC_1(VAR_3, VAR_18->i_pid_pcr) );
    }
}
