
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_10__ ;


struct TYPE_19__ {TYPE_6__* p_eas_es; } ;
typedef TYPE_3__ ts_psip_t ;
struct TYPE_18__ {int i_current; int i_first; } ;
struct TYPE_20__ {TYPE_2__ pcr; } ;
typedef TYPE_4__ ts_pmt_t ;
struct TYPE_17__ {TYPE_3__* p_psip; } ;
struct TYPE_21__ {scalar_t__ type; TYPE_1__ u; } ;
typedef TYPE_5__ ts_pid_t ;
struct TYPE_22__ {scalar_t__ id; TYPE_4__* p_program; int fmt; struct TYPE_22__* p_next; } ;
typedef TYPE_6__ ts_es_t ;
typedef int stime_t ;
struct TYPE_23__ {scalar_t__ p_sys; } ;
typedef TYPE_7__ dvbpsi_t ;
struct TYPE_24__ {size_t p_payload_end; size_t p_payload_start; struct TYPE_24__* p_next; } ;
typedef TYPE_8__ dvbpsi_psi_section_t ;
struct TYPE_25__ {int out; } ;
typedef TYPE_9__ demux_t ;
struct TYPE_16__ {int i_pts; int i_dts; int p_buffer; } ;
typedef TYPE_10__ block_t ;


 int const VAR_0 ;
 int const VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int const) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,int ) ;
 TYPE_10__* FUNC_2 (size_t) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int ,scalar_t__,int) ;
 int FUNC_5 (int ,scalar_t__,TYPE_10__*) ;
 int FUNC_6 (int ,size_t,size_t) ;
 int FUNC_7 (TYPE_9__*,char*,int const) ;
 int FUNC_8 (size_t,size_t) ;

void FUNC_9( dvbpsi_t *VAR_4, const dvbpsi_psi_section_t* VAR_5,
                              void *VAR_6 )
{
    demux_t *VAR_7 = (demux_t *) VAR_4->p_sys;
    ts_pid_t *VAR_8 = (ts_pid_t *) VAR_6;
    ts_psip_t *VAR_9 = VAR_8->u.p_psip;
    if( VAR_8->type != VAR_3 || !VAR_9->p_eas_es )
        return;

    for( ; VAR_5; VAR_5 = VAR_5->p_next )
    {
        size_t VAR_10 = VAR_5->p_payload_end - VAR_5->p_payload_start;
        const int VAR_11 = FUNC_8( VAR_5->p_payload_start, VAR_10 );
        FUNC_7( VAR_7, "Received EAS Alert with priority %d", VAR_11 );

        if( VAR_11 != VAR_0 && VAR_11 != VAR_1 )
            continue;

        for( ts_es_t *VAR_12 = VAR_9->p_eas_es; VAR_12; VAR_12 = VAR_12->p_next )
        {
            if( !VAR_12->id && !(VAR_12->id = FUNC_3( VAR_7->out, &VAR_12->fmt )) )
                continue;

            const ts_pmt_t *VAR_13 = VAR_12->p_program;
            const stime_t VAR_14 = FUNC_1( VAR_13->pcr.i_first, VAR_13->pcr.i_current );
            block_t *VAR_15 = FUNC_2( VAR_5->p_payload_end - VAR_5->p_payload_start );
            FUNC_6( VAR_15->p_buffer, VAR_5->p_payload_start, VAR_10 );
            VAR_15->i_dts = VAR_15->i_pts = FUNC_0( VAR_14 );

            FUNC_4( VAR_7->out, VAR_2, VAR_12->id, 1 );
            FUNC_5( VAR_7->out, VAR_12->id, VAR_15 );
        }
    }
}
