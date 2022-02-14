
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_51__ TYPE_9__ ;
typedef struct TYPE_50__ TYPE_8__ ;
typedef struct TYPE_49__ TYPE_7__ ;
typedef struct TYPE_48__ TYPE_6__ ;
typedef struct TYPE_47__ TYPE_5__ ;
typedef struct TYPE_46__ TYPE_4__ ;
typedef struct TYPE_45__ TYPE_3__ ;
typedef struct TYPE_44__ TYPE_2__ ;
typedef struct TYPE_43__ TYPE_1__ ;
typedef struct TYPE_42__ TYPE_19__ ;
typedef struct TYPE_41__ TYPE_15__ ;
typedef struct TYPE_40__ TYPE_14__ ;
typedef struct TYPE_39__ TYPE_13__ ;
typedef struct TYPE_38__ TYPE_12__ ;
typedef struct TYPE_37__ TYPE_11__ ;
typedef struct TYPE_36__ TYPE_10__ ;


struct TYPE_49__ {int b_present; scalar_t__ i_event; TYPE_5__* p_current; } ;
typedef TYPE_7__ vlc_epg_t ;
typedef int uint16_t ;
struct TYPE_50__ {TYPE_9__* p_ctx; TYPE_1__* handle; } ;
typedef TYPE_8__ ts_psip_t ;
struct TYPE_51__ {int i_tabletype; scalar_t__ p_a65; TYPE_2__* p_stt; int p_mgt; int p_vct; } ;
typedef TYPE_9__ ts_psip_context_t ;
struct TYPE_46__ {int i_event_length; int i_event_start; } ;
struct TYPE_36__ {TYPE_4__ eit; } ;
typedef TYPE_10__ ts_pmt_t ;
struct TYPE_48__ {TYPE_8__* p_psip; } ;
struct TYPE_37__ {scalar_t__ type; TYPE_6__ u; } ;
typedef TYPE_11__ ts_pid_t ;
typedef int ts_pat_t ;
typedef scalar_t__ time_t ;
typedef int dvbpsi_atsc_ett_t ;
struct TYPE_38__ {int i_version; int i_source_id; TYPE_13__* p_first_event; int b_current_next; } ;
typedef TYPE_12__ dvbpsi_atsc_eit_t ;
struct TYPE_39__ {scalar_t__ i_length_seconds; int i_event_id; struct TYPE_39__* p_next; } ;
typedef TYPE_13__ dvbpsi_atsc_eit_event_t ;
struct TYPE_40__ {int out; TYPE_15__* p_sys; } ;
typedef TYPE_14__ demux_t ;
struct TYPE_41__ {int pids; } ;
typedef TYPE_15__ demux_sys_t ;
struct TYPE_47__ {int i_duration; int i_start; } ;
struct TYPE_45__ {int * p_pat; } ;
struct TYPE_44__ {int i_gps_utc_offset; int i_system_time; } ;
struct TYPE_43__ {scalar_t__ p_sys; } ;
struct TYPE_42__ {TYPE_3__ u; } ;


 scalar_t__ FUNC_0 (TYPE_14__*,TYPE_9__*,TYPE_13__ const*,int const*,TYPE_7__*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_9__*,TYPE_12__*) ;
 int * FUNC_2 (TYPE_9__*,int ,int ) ;
 TYPE_11__* FUNC_3 (int *,int ,TYPE_8__*) ;
 int const VAR_1 ;
 int FUNC_4 (int ,int ,int*) ;
 int FUNC_5 (scalar_t__) ;
 int VAR_2 ;
 TYPE_11__* FUNC_6 (TYPE_15__*,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_7 (int const) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (TYPE_12__*) ;
 int FUNC_11 (int ,int ,int,TYPE_7__*) ;
 int FUNC_12 (TYPE_14__*,char*,int ) ;
 int FUNC_13 (int ,int ) ;
 TYPE_10__* FUNC_14 (int *,int) ;
 TYPE_19__* FUNC_15 (int *,int ) ;
 scalar_t__ FUNC_16 (int) ;
 int FUNC_17 (TYPE_7__*) ;
 TYPE_7__* FUNC_18 (int const,int) ;
 int FUNC_19 (TYPE_7__*,scalar_t__) ;

__attribute__((used)) static void FUNC_20( void *VAR_4, dvbpsi_atsc_eit_t* VAR_5 )
{
    ts_pid_t *VAR_6 = (ts_pid_t *) VAR_4;
    if( FUNC_16(VAR_6->type != VAR_3) )
    {
        FUNC_7( VAR_6->type == VAR_3 );
        FUNC_10( VAR_5 );
        return;
    }

    demux_t *VAR_7 = (demux_t *) VAR_6->u.p_psip->handle->p_sys;
    demux_sys_t *VAR_8 = VAR_7->p_sys;
    ts_pid_t *VAR_9 = FUNC_6(VAR_8, VAR_0);
    ts_psip_t *VAR_10 = VAR_9->u.p_psip;
    ts_psip_context_t *VAR_11 = VAR_10->p_ctx;

    if( !VAR_5->b_current_next ||
        FUNC_16(VAR_9->type != VAR_3 || !VAR_11->p_stt || !VAR_11->p_vct) )
    {
        FUNC_10( VAR_5 );
        return;
    }

    uint16_t VAR_12;
    if ( !FUNC_4( VAR_11->p_vct, VAR_5->i_source_id, &VAR_12 ) )
    {
        FUNC_12( VAR_7, "Received EIT for unknown channel %d", VAR_5->i_source_id );
        FUNC_10( VAR_5 );
        return;
    }

    const ts_pid_t *VAR_13 = FUNC_3( &VAR_8->pids, VAR_11->p_mgt,
                                                     VAR_6->u.p_psip );


    time_t VAR_14 = FUNC_8( VAR_11->p_stt->i_system_time,
                                                     VAR_11->p_stt->i_gps_utc_offset );
    FUNC_5( VAR_14 );

    const uint16_t VAR_15 = VAR_6->u.p_psip->p_ctx->i_tabletype;
    FUNC_7(VAR_15);




    vlc_epg_t *VAR_16 = FUNC_18( VAR_15 - VAR_1,
                                    VAR_12 );
    if( !VAR_16 )
    {
        FUNC_10( VAR_5 );
        return;
    }


    VAR_16->b_present = (VAR_15 == VAR_1);

    if( !VAR_11->p_a65 && !(VAR_11->p_a65 = FUNC_9( ((void*)0) )) )
        goto end;

    time_t VAR_17 = 0;
    for( const dvbpsi_atsc_eit_event_t *VAR_18 = VAR_5->p_first_event;
                                        VAR_18 ; VAR_18 = VAR_18->p_next )
    {

        const dvbpsi_atsc_ett_t *VAR_19 = ((void*)0);
        if( VAR_13 )
            VAR_19 = FUNC_2( VAR_13->u.p_psip->p_ctx,
                                         FUNC_13( VAR_5->i_source_id, VAR_18->i_event_id ),
                                         VAR_5->i_version );


        time_t VAR_20 = FUNC_0( VAR_7, VAR_11, VAR_18, VAR_19, VAR_16 );


        if( VAR_20 <= VAR_14 && VAR_20 + VAR_18->i_length_seconds > VAR_14 )
            VAR_17 = VAR_20;
    }


    if( VAR_16->b_present && VAR_17 )
    {
        FUNC_19( VAR_16, VAR_17 );
        ts_pat_t *VAR_21 = FUNC_15(&VAR_8->pids, 0)->u.p_pat;
        ts_pmt_t *VAR_22 = FUNC_14(VAR_21, VAR_12);
        if(VAR_22)
        {
            VAR_22->eit.i_event_start = VAR_16->p_current->i_start;
            VAR_22->eit.i_event_length = VAR_16->p_current->i_duration;
        }
    }

    if( VAR_16->i_event > 0 )
        FUNC_11( VAR_7->out, VAR_2, (int)VAR_12, VAR_16 );

end:
    FUNC_17( VAR_16 );
    FUNC_1( VAR_6->u.p_psip->p_ctx, VAR_5 );
}
