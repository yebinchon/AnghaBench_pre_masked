
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_37__ TYPE_9__ ;
typedef struct TYPE_36__ TYPE_8__ ;
typedef struct TYPE_35__ TYPE_7__ ;
typedef struct TYPE_34__ TYPE_6__ ;
typedef struct TYPE_33__ TYPE_5__ ;
typedef struct TYPE_32__ TYPE_4__ ;
typedef struct TYPE_31__ TYPE_3__ ;
typedef struct TYPE_30__ TYPE_2__ ;
typedef struct TYPE_29__ TYPE_24__ ;
typedef struct TYPE_28__ TYPE_1__ ;
typedef struct TYPE_27__ TYPE_17__ ;


typedef int uint8_t ;
struct TYPE_29__ {int i_size; TYPE_17__** p_elems; } ;
struct TYPE_32__ {int i_version; TYPE_9__* handle; TYPE_24__ eit; TYPE_2__* p_ctx; } ;
typedef TYPE_4__ ts_psip_t ;
struct TYPE_31__ {TYPE_4__* p_psip; TYPE_1__* p_pat; } ;
struct TYPE_33__ {scalar_t__ type; scalar_t__ i_pid; TYPE_3__ u; } ;
typedef TYPE_5__ ts_pid_t ;
typedef int dvbpsi_demux_t ;
typedef int dvbpsi_demux_subdec_t ;
struct TYPE_34__ {scalar_t__ i_table_type; scalar_t__ i_table_type_pid; struct TYPE_34__* p_next; } ;
typedef TYPE_6__ dvbpsi_atsc_mgt_table_t ;
struct TYPE_35__ {int i_version; scalar_t__ b_current_next; TYPE_6__* p_first_table; } ;
typedef TYPE_7__ dvbpsi_atsc_mgt_t ;
struct TYPE_36__ {int * p_sys; } ;
typedef TYPE_8__ demux_t ;
typedef int demux_sys_t ;
struct TYPE_37__ {scalar_t__ p_decoder; scalar_t__ p_sys; } ;
struct TYPE_30__ {scalar_t__ i_tabletype; TYPE_7__* p_mgt; int * p_vct; } ;
struct TYPE_28__ {int i_ts_id; } ;
struct TYPE_27__ {scalar_t__ type; } ;


 int FUNC_0 (TYPE_24__,TYPE_5__*) ;
 int FUNC_1 (TYPE_24__) ;
 int FUNC_2 (TYPE_9__*,int ,int const,int ,TYPE_5__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (TYPE_9__*,TYPE_5__*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 TYPE_5__* FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (TYPE_8__*,TYPE_17__*) ;
 scalar_t__ FUNC_6 (TYPE_8__*,scalar_t__,TYPE_5__*,int *) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_7 (int *,TYPE_5__*,int) ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int FUNC_8 (int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (TYPE_7__*) ;
 int FUNC_12 (int *) ;
 int * FUNC_13 (int *,int ,int) ;
 int FUNC_14 (TYPE_8__*,char*,scalar_t__,...) ;
 scalar_t__ FUNC_15 (TYPE_9__*,int ,int,int ,TYPE_5__*) ;
 scalar_t__ FUNC_16 (int) ;

__attribute__((used)) static void FUNC_17( void *VAR_16, dvbpsi_atsc_mgt_t* VAR_17 )
{
    ts_pid_t *VAR_18 = (ts_pid_t *) VAR_16;
    if( FUNC_16(VAR_18->type != VAR_14 || VAR_18->i_pid != VAR_0) )
    {
        FUNC_8( VAR_18->type == VAR_14 );
        FUNC_8( VAR_18->i_pid == VAR_0 );
        FUNC_11( VAR_17 );
        return;
    }
    ts_psip_t *VAR_19 = VAR_18->u.p_psip;
    demux_t *VAR_20 = (demux_t *) VAR_19->handle->p_sys;
    demux_sys_t *VAR_21 = VAR_20->p_sys;

    if( ( VAR_19->i_version != -1 && VAR_19->i_version == VAR_17->i_version ) ||
          VAR_17->b_current_next == 0 )
    {
        FUNC_11( VAR_17 );
        return;
    }



    if( VAR_19->i_version != -1 )
    {
        if( VAR_19->p_ctx->p_vct )
        {
            FUNC_12( VAR_19->p_ctx->p_vct );
            VAR_19->p_ctx->p_vct = ((void*)0);
        }


        for( int VAR_22=0; VAR_22 < VAR_19->eit.i_size; VAR_22++ )
        {
             FUNC_5( VAR_20, VAR_19->eit.p_elems[VAR_22] );
             FUNC_8( VAR_19->eit.p_elems[VAR_22]->type == VAR_13 );
        }
        FUNC_1(VAR_19->eit);


        dvbpsi_demux_t *VAR_23 = (dvbpsi_demux_t *) VAR_19->handle->p_decoder;
        dvbpsi_demux_subdec_t *VAR_24 = FUNC_13( VAR_23, VAR_12, 0x00 );
        if( VAR_24 )
        {
            FUNC_10( VAR_23, VAR_24 );
            FUNC_9( VAR_24 );
        }
    }

    if( VAR_19->p_ctx->p_mgt )
        FUNC_11( VAR_19->p_ctx->p_mgt );
    VAR_19->p_ctx->p_mgt = VAR_17;
    VAR_19->i_version = VAR_17->i_version;

    for( const dvbpsi_atsc_mgt_table_t *VAR_25 = VAR_17->p_first_table;
                                        VAR_25; VAR_25 = VAR_25->p_next )
    {
        if( VAR_25->i_table_type == VAR_8 ||
            VAR_25->i_table_type == VAR_3 )
        {
            const uint8_t VAR_26 = (VAR_25->i_table_type == VAR_3)
                                     ? VAR_1
                                     : VAR_9;
            if( !FUNC_2( VAR_19->handle, VAR_15, VAR_26,
                              FUNC_4(VAR_21, 0)->u.p_pat->i_ts_id, VAR_18 ) )
                FUNC_14( VAR_20, "  * pid=%d listening for ATSC VCT", VAR_18->i_pid );
        }
        else if( VAR_25->i_table_type >= VAR_4 &&
                 VAR_25->i_table_type <= VAR_4 + VAR_2 &&
                 VAR_25->i_table_type <= VAR_5 &&
                 VAR_25->i_table_type_pid != VAR_18->i_pid )
        {
            ts_pid_t *VAR_27 = FUNC_4(VAR_21, VAR_25->i_table_type_pid);
            if( FUNC_6( VAR_20, VAR_14, VAR_27, ((void*)0) ) )
            {
                FUNC_7( VAR_20->p_sys, VAR_27, 1 );
                VAR_27->u.p_psip->p_ctx->i_tabletype = VAR_25->i_table_type;
                FUNC_3( VAR_27->u.p_psip->handle, VAR_27 );
                FUNC_14( VAR_20, "  * pid=%d reserved for ATSC EIT", VAR_27->i_pid );
                FUNC_0( VAR_19->eit, VAR_27 );
            }
        }
        else if( VAR_25->i_table_type >= VAR_6 &&
                 VAR_25->i_table_type <= VAR_6 + VAR_2 &&
                 VAR_25->i_table_type <= VAR_7 &&
                 VAR_25->i_table_type_pid != VAR_18->i_pid )
        {
            ts_pid_t *VAR_28 = FUNC_4(VAR_21, VAR_25->i_table_type_pid);
            if( FUNC_6( VAR_20, VAR_14, VAR_28, ((void*)0) ) )
            {
                FUNC_7( VAR_21, VAR_28, 1 );
                VAR_28->u.p_psip->p_ctx->i_tabletype = VAR_25->i_table_type;
                FUNC_3( VAR_28->u.p_psip->handle, VAR_28 );
                FUNC_14( VAR_20, "  * pid=%d reserved for ATSC ETT", VAR_28->i_pid );
                FUNC_0( VAR_19->eit, VAR_28 );
            }
        }
        FUNC_14( VAR_20, "  * pid=%d transport for ATSC PSIP type %x",
                          VAR_25->i_table_type_pid, VAR_25->i_table_type );
    }

    if( VAR_10 == VAR_0 &&
        FUNC_15( VAR_19->handle, VAR_12, 0x00,
                                       VAR_11, VAR_18 ) )
    {
        FUNC_14( VAR_20, "  * pid=%d listening for EAS", VAR_18->i_pid );
    }
}
