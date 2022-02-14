
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_50__ TYPE_9__ ;
typedef struct TYPE_49__ TYPE_8__ ;
typedef struct TYPE_48__ TYPE_7__ ;
typedef struct TYPE_47__ TYPE_6__ ;
typedef struct TYPE_46__ TYPE_5__ ;
typedef struct TYPE_45__ TYPE_4__ ;
typedef struct TYPE_44__ TYPE_3__ ;
typedef struct TYPE_43__ TYPE_2__ ;
typedef struct TYPE_42__ TYPE_1__ ;
typedef struct TYPE_41__ TYPE_15__ ;
typedef struct TYPE_40__ TYPE_13__ ;
typedef struct TYPE_39__ TYPE_12__ ;
typedef struct TYPE_38__ TYPE_11__ ;
typedef struct TYPE_37__ TYPE_10__ ;


struct TYPE_47__ {int i_id; } ;
typedef TYPE_6__ vlc_epg_event_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_48__ {TYPE_8__* p_ctx; TYPE_1__* handle; } ;
typedef TYPE_7__ ts_psip_t ;
struct TYPE_49__ {int p_vct; } ;
typedef TYPE_8__ ts_psip_context_t ;
struct TYPE_46__ {TYPE_7__* p_psip; } ;
struct TYPE_50__ {scalar_t__ type; TYPE_5__ u; } ;
typedef TYPE_9__ ts_pid_t ;
typedef int dvbpsi_atsc_mgt_t ;
struct TYPE_37__ {int i_etm_id; int i_version; } ;
typedef TYPE_10__ dvbpsi_atsc_ett_t ;
struct TYPE_38__ {int i_event_id; } ;
typedef TYPE_11__ dvbpsi_atsc_eit_event_t ;
struct TYPE_39__ {int out; TYPE_13__* p_sys; } ;
typedef TYPE_12__ demux_t ;
struct TYPE_40__ {int pids; } ;
typedef TYPE_13__ demux_sys_t ;
struct TYPE_45__ {TYPE_3__* p_psip; } ;
struct TYPE_44__ {TYPE_2__* p_ctx; } ;
struct TYPE_43__ {int * p_mgt; } ;
struct TYPE_42__ {scalar_t__ p_sys; } ;
struct TYPE_41__ {TYPE_4__ u; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_8__*,scalar_t__,int ) ;
 TYPE_6__* FUNC_1 (TYPE_12__*,TYPE_8__*,TYPE_11__ const*,TYPE_10__*) ;
 int * FUNC_2 (TYPE_8__*,int,int ) ;
 TYPE_11__* FUNC_3 (TYPE_8__*,int,int ) ;
 TYPE_9__* FUNC_4 (int *,int const*,TYPE_7__*) ;
 int FUNC_5 (TYPE_8__*,TYPE_10__*) ;
 int FUNC_6 (int ,scalar_t__,scalar_t__*) ;
 int VAR_1 ;
 TYPE_9__* FUNC_7 (TYPE_13__*,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_8 (int) ;
 int FUNC_9 (TYPE_10__*) ;
 int FUNC_10 (int ,int ,int,TYPE_6__*) ;
 int FUNC_11 (int,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_12 (TYPE_6__*) ;
 int FUNC_13 (TYPE_12__*,char*,int ) ;
 int FUNC_14 (TYPE_12__*,char*,scalar_t__) ;
 TYPE_15__* FUNC_15 (int *,int ) ;
 scalar_t__ FUNC_16 (int) ;
 int FUNC_17 (TYPE_6__*) ;

__attribute__((used)) static void FUNC_18( void *VAR_3, dvbpsi_atsc_ett_t *VAR_4 )
{
    ts_pid_t *VAR_5 = (ts_pid_t *) VAR_3;
    if( FUNC_16(VAR_5->type != VAR_2) )
    {
        FUNC_8( VAR_5->type == VAR_2 );
        FUNC_9( VAR_4 );
        return;
    }

    demux_t *VAR_6 = (demux_t *) VAR_5->u.p_psip->handle->p_sys;
    demux_sys_t *VAR_7 = VAR_6->p_sys;
    ts_pid_t *VAR_8 = FUNC_7(VAR_7, VAR_0);
    ts_psip_t *VAR_9 = VAR_8->u.p_psip;
    ts_psip_context_t *VAR_10 = VAR_9->p_ctx;

    if( VAR_4->i_etm_id & 0x02 )
    {
        ts_psip_context_t *VAR_11 = VAR_5->u.p_psip->p_ctx;
        uint16_t VAR_12, VAR_13;
        FUNC_11( VAR_4->i_etm_id, &VAR_12, &VAR_13 );

        uint16_t VAR_14;
        if ( !FUNC_6( VAR_10->p_vct, VAR_12, &VAR_14 ) )
        {
            FUNC_14( VAR_6, "Received EIT for unknown channel %d", VAR_12 );
            FUNC_9( VAR_4 );
            return;
        }


        if( FUNC_2( VAR_11, VAR_4->i_etm_id, VAR_4->i_version ) == ((void*)0) )
        {
            const dvbpsi_atsc_mgt_t *VAR_15 = FUNC_15( &VAR_7->pids, VAR_0 )->u.p_psip->p_ctx->p_mgt;
            ts_pid_t *VAR_16 = FUNC_4( &VAR_7->pids, VAR_15, VAR_5->u.p_psip );
            if( VAR_16 )
            {
                const dvbpsi_atsc_eit_event_t *VAR_17 =
                        FUNC_3( VAR_16->u.p_psip->p_ctx, VAR_4->i_etm_id, VAR_4->i_version );
                if( VAR_17 )
                {



                    vlc_epg_event_t *VAR_18 = FUNC_1( VAR_6, VAR_10, VAR_17, VAR_4 );
                    if( FUNC_12(VAR_18) )
                    {
                        FUNC_10( VAR_6->out, VAR_1,
                                        (int)VAR_14, VAR_18 );



                        FUNC_17( VAR_18 );
                    }
                }

                FUNC_5( VAR_11, VAR_4 );
                FUNC_0( VAR_11, VAR_12, VAR_4->i_version );
                return;
            }
        }
    }
    FUNC_9( VAR_4 );
}
