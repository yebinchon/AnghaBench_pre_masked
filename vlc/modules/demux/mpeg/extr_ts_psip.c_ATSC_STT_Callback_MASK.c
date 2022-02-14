
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_17__ {TYPE_6__* p_stt; } ;
typedef TYPE_3__ ts_psip_context_t ;
struct TYPE_16__ {TYPE_1__* p_psip; } ;
struct TYPE_18__ {scalar_t__ type; scalar_t__ i_pid; TYPE_2__ u; } ;
typedef TYPE_4__ ts_pid_t ;
typedef int time_t ;
struct TYPE_19__ {scalar_t__ p_sys; } ;
typedef TYPE_5__ dvbpsi_t ;
struct TYPE_20__ {int i_gps_utc_offset; int i_system_time; } ;
typedef TYPE_6__ dvbpsi_atsc_stt_t ;
struct TYPE_21__ {int out; TYPE_8__* p_sys; } ;
typedef TYPE_7__ demux_t ;
struct TYPE_22__ {int i_network_time; int i_network_time_update; } ;
typedef TYPE_8__ demux_sys_t ;
struct TYPE_15__ {TYPE_5__* handle; TYPE_3__* p_ctx; } ;


 int FUNC_0 (TYPE_5__*,int ,int ,int,TYPE_4__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_5__*) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_6__*) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (TYPE_7__*,char*,scalar_t__) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static void FUNC_10( void *VAR_5, dvbpsi_atsc_stt_t* VAR_6 )
{
    ts_pid_t *VAR_7 = (ts_pid_t *) VAR_5;
    if( FUNC_9(VAR_7->type != VAR_4 || VAR_7->i_pid != VAR_0) )
    {
        FUNC_3( VAR_7->type == VAR_4 );
        FUNC_3( VAR_7->i_pid == VAR_0 );
        FUNC_5( VAR_6 );
        return;
    }
    demux_t *VAR_8 = (demux_t *) VAR_7->u.p_psip->handle->p_sys;
    demux_sys_t *VAR_9 = VAR_8->p_sys;
    ts_psip_context_t *VAR_10 = VAR_7->u.p_psip->p_ctx;
    dvbpsi_t *VAR_11 = VAR_7->u.p_psip->handle;

    if( !VAR_10->p_stt )
    {
        if( !FUNC_0( VAR_11, VAR_3, VAR_1, 0x00, VAR_7 ) )
        {
            FUNC_7( VAR_8, "Can't attach MGT decoder to pid %d", VAR_0 );
            FUNC_1( VAR_11 );
            FUNC_5( VAR_10->p_stt );
            VAR_6 = ((void*)0);
        }
    }
    else
    {
        FUNC_5( VAR_10->p_stt );
    }

    if( VAR_6 )
    {
        time_t VAR_12 = FUNC_4( VAR_6->i_system_time,
                                                         VAR_6->i_gps_utc_offset );
        FUNC_2( VAR_12 );
        VAR_9->i_network_time = VAR_12;
        VAR_9->i_network_time_update = FUNC_8(((void*)0));

        FUNC_6( VAR_8->out, VAR_2, VAR_9->i_network_time );
    }

    VAR_10->p_stt = VAR_6;
}
