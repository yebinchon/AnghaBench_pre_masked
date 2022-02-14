
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_53__ TYPE_9__ ;
typedef struct TYPE_52__ TYPE_8__ ;
typedef struct TYPE_51__ TYPE_7__ ;
typedef struct TYPE_50__ TYPE_6__ ;
typedef struct TYPE_49__ TYPE_5__ ;
typedef struct TYPE_48__ TYPE_4__ ;
typedef struct TYPE_47__ TYPE_3__ ;
typedef struct TYPE_46__ TYPE_2__ ;
typedef struct TYPE_45__ TYPE_1__ ;


struct TYPE_49__ {TYPE_4__* p_stream; TYPE_1__* p_pat; } ;
struct TYPE_46__ {scalar_t__ i_fourcc; } ;
struct TYPE_50__ {int type; int i_pid; int i_flags; TYPE_5__ u; TYPE_2__ probed; } ;
typedef TYPE_6__ ts_pid_t ;
typedef scalar_t__ stime_t ;
struct TYPE_51__ {TYPE_8__* p_sys; } ;
typedef TYPE_7__ demux_t ;
struct TYPE_47__ {scalar_t__ status; int i_timesourcepid; } ;
struct TYPE_52__ {scalar_t__ i_pmt_es; unsigned int i_ts_read; int b_start_record; int b_valid_scrambling; int b_end_preparse; int b_access_control; int seltype; int es_creation; TYPE_3__ patfix; int stream; } ;
typedef TYPE_8__ demux_sys_t ;
struct TYPE_53__ {scalar_t__ i_buffer; int* p_buffer; int i_flags; } ;
typedef TYPE_9__ block_t ;
struct TYPE_48__ {int transport; } ;
struct TYPE_45__ {int b_generated; } ;


 int FUNC_0 (TYPE_7__*,TYPE_6__*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_7__*,TYPE_6__*,TYPE_9__*,int) ;
 int FUNC_2 (TYPE_7__*,TYPE_6__*,TYPE_9__*,int) ;
 scalar_t__ FUNC_3 (TYPE_9__*) ;
 TYPE_6__* FUNC_4 (TYPE_8__*,int ) ;
 int FUNC_5 (TYPE_7__*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_6 (TYPE_7__*,TYPE_6__*,scalar_t__) ;
 int FUNC_7 (TYPE_9__*) ;
 int VAR_7 ;
 int FUNC_8 (TYPE_7__*,TYPE_6__*,int*,int,int) ;
 TYPE_9__* FUNC_9 (TYPE_7__*,TYPE_6__*,TYPE_9__*,int*) ;
 TYPE_9__* FUNC_10 (TYPE_7__*) ;
 int FUNC_11 (TYPE_6__) ;
 int FUNC_12 (TYPE_6__*) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

 int VAR_13 ;





 int FUNC_13 (TYPE_7__*,int) ;
 int FUNC_14 (TYPE_7__*,TYPE_6__*,int) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_15 (TYPE_9__*) ;
 int FUNC_16 (TYPE_7__*) ;
 int FUNC_17 (TYPE_7__*,char*,...) ;
 int FUNC_18 (TYPE_6__*,int*) ;
 int FUNC_19 (TYPE_6__*,int*) ;
 int FUNC_20 (TYPE_6__*,int*) ;
 scalar_t__ FUNC_21 (int) ;
 int FUNC_22 (int ,int ,int,char*) ;

__attribute__((used)) static int FUNC_23( demux_t *VAR_16 )
{
    demux_sys_t *VAR_17 = VAR_16->p_sys;
    bool VAR_18 = VAR_17->i_pmt_es <= 0;


    if( VAR_17->i_pmt_es == 0 && !FUNC_12(FUNC_4(VAR_17, 0)) && VAR_17->patfix.status == VAR_6 )
    {
        FUNC_5( VAR_16 );
        VAR_17->patfix.status = VAR_5;
        FUNC_4(VAR_17, 0)->u.p_pat->b_generated = 1;
    }


    for( unsigned VAR_19 = 0; VAR_19 < VAR_17->i_ts_read; VAR_19++ )
    {
        bool VAR_20 = 0;
        int VAR_21 = 0;
        block_t *VAR_22;
        if( !(VAR_22 = FUNC_10( VAR_16 )) )
        {
            return VAR_14;
        }

        if( VAR_17->b_start_record )
        {

            FUNC_22( VAR_17->stream, VAR_8, 1,
                                "ts" );
            VAR_17->b_start_record = 0;
        }


        if( FUNC_21(VAR_22->i_buffer < VAR_10) )
        {
            FUNC_15( VAR_22 );
            continue;
        }


        if( VAR_22->p_buffer[1]&0x80 )
        {
            FUNC_17( VAR_16, "transport_error_indicator set (pid=%d)",
                     FUNC_7( VAR_22 ) );
            FUNC_15( VAR_22 );
            continue;
        }


        ts_pid_t *VAR_23 = FUNC_4( VAR_17, FUNC_7( VAR_22 ) );
        if( !FUNC_12(VAR_23) )
        {
            if( VAR_23->type == VAR_13 )
                FUNC_17( VAR_16, "pid[%d] unknown", VAR_23->i_pid );
            VAR_23->i_flags |= VAR_4;
            if( VAR_23->i_pid == 0x01 )
                VAR_17->b_valid_scrambling = 1;
        }


        VAR_22 = FUNC_9( VAR_16, VAR_23, VAR_22, &VAR_21 );
        if( !VAR_22 )
            continue;

        if( !FUNC_11(*VAR_23) != !(VAR_22->i_flags & VAR_1) )
        {
            FUNC_14( VAR_16, VAR_23, VAR_22->i_flags & VAR_1 );
        }


        stime_t VAR_24 = FUNC_3( VAR_22 );
        if( VAR_24 >= 0 )
            FUNC_6( VAR_16, VAR_23, VAR_24 );


        if( !FUNC_12( FUNC_4( VAR_17, 0 ) ) &&
            (VAR_23->probed.i_fourcc == 0 || VAR_23->i_pid == VAR_17->patfix.i_timesourcepid) &&
            (VAR_22->p_buffer[1] & 0xC0) == 0x40 &&
            (VAR_22->p_buffer[3] & 0xD0) == 0x10 )
        {
            FUNC_8( VAR_16, VAR_23, VAR_22->p_buffer + VAR_9,
                      VAR_22->i_buffer - VAR_9, VAR_22->p_buffer[3] & 0x20 );
        }

        switch( VAR_23->type )
        {
        case 132:
        case 131:

            FUNC_18( VAR_23, VAR_22->p_buffer );
            FUNC_15( VAR_22 );
            break;

        case 128:
            VAR_17->b_end_preparse = 1;

            if( VAR_17->es_creation == VAR_2 )
            {
                FUNC_17( VAR_16, "Creating delayed ES" );
                FUNC_0( VAR_16, VAR_23, 1 );
                FUNC_13( VAR_16, VAR_17->seltype == VAR_7 );
            }


            if( !VAR_17->b_access_control && !(VAR_23->i_flags & VAR_3) )
            {

                FUNC_15( VAR_22 );
                continue;
            }

            if( VAR_23->u.p_stream->transport == VAR_11 )
            {
                VAR_20 = FUNC_1( VAR_16, VAR_23, VAR_22, VAR_21 );
            }
            else if( VAR_23->u.p_stream->transport == VAR_12 )
            {
                VAR_20 = FUNC_2( VAR_16, VAR_23, VAR_22, VAR_21 );
            }
            else
            {
                FUNC_15( VAR_22 );
            }

            break;

        case 129:
            if( (VAR_22->i_flags & (VAR_1|VAR_0)) == 0 )
                FUNC_20( VAR_23, VAR_22->p_buffer );
            FUNC_15( VAR_22 );
            break;

        case 130:
            if( (VAR_22->i_flags & (VAR_1|VAR_0)) == 0 )
                FUNC_19( VAR_23, VAR_22->p_buffer );
            FUNC_15( VAR_22 );
            break;

        case 133:
        default:

            FUNC_15( VAR_22 );
            break;
        }

        if( VAR_20 || ( VAR_18 && VAR_17->i_pmt_es > 0 ) )
            break;
    }

    FUNC_16( VAR_16 );
    return VAR_15;
}
