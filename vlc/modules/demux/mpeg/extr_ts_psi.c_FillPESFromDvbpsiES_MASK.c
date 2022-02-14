
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_65__ TYPE_9__ ;
typedef struct TYPE_64__ TYPE_6__ ;
typedef struct TYPE_63__ TYPE_5__ ;
typedef struct TYPE_62__ TYPE_4__ ;
typedef struct TYPE_61__ TYPE_3__ ;
typedef struct TYPE_60__ TYPE_2__ ;
typedef struct TYPE_59__ TYPE_1__ ;


typedef void* ts_transport_type_t ;
struct TYPE_60__ {int i_stream_type; TYPE_9__* p_es; void* transport; } ;
typedef TYPE_2__ ts_stream_t ;
typedef int ts_pmt_t ;
typedef scalar_t__ ts_pmt_registration_type_t ;
struct TYPE_61__ {int i_program_number; } ;
typedef TYPE_3__ dvbpsi_pmt_t ;
struct TYPE_62__ {int i_type; int i_pid; } ;
typedef TYPE_4__ dvbpsi_pmt_es_t ;
struct TYPE_63__ {TYPE_6__* p_sys; } ;
typedef TYPE_5__ demux_t ;
struct TYPE_64__ {scalar_t__ b_es_id_pid; } ;
typedef TYPE_6__ demux_sys_t ;
struct TYPE_59__ {scalar_t__ i_cat; int b_packetized; int i_id; int i_group; void* i_priority; } ;
struct TYPE_65__ {TYPE_1__ fmt; } ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (TYPE_5__*,TYPE_2__*,int,void**) ;
 scalar_t__ FUNC_1 (TYPE_5__*,TYPE_4__ const*,char*) ;
 int FUNC_2 (TYPE_9__*,TYPE_4__ const*) ;
 int FUNC_3 (TYPE_5__*,TYPE_9__*,TYPE_4__ const*) ;
 int FUNC_4 (TYPE_5__*,TYPE_2__*,TYPE_4__ const*) ;
 int FUNC_5 (TYPE_3__ const*,TYPE_9__*,int) ;
 int FUNC_6 (TYPE_5__*,TYPE_9__*,TYPE_4__ const*) ;
 int FUNC_7 (TYPE_5__*,TYPE_9__*,TYPE_4__ const*) ;
 int FUNC_8 (TYPE_5__*,TYPE_9__*,TYPE_4__ const*) ;
 int FUNC_9 (TYPE_5__*,TYPE_9__*,TYPE_4__ const*) ;
 int FUNC_10 (TYPE_5__*,TYPE_9__*,TYPE_4__ const*) ;
 int FUNC_11 (TYPE_5__*,TYPE_9__*,TYPE_4__ const*) ;
 int FUNC_12 (TYPE_5__*,TYPE_9__*,TYPE_4__ const*) ;
 int FUNC_13 (TYPE_5__*,TYPE_2__*,int const*,TYPE_4__ const*) ;
 int FUNC_14 (TYPE_5__*,TYPE_9__*,TYPE_4__ const*) ;
 int FUNC_15 (TYPE_5__*,TYPE_2__*,TYPE_4__ const*) ;
 int FUNC_16 (TYPE_5__*,TYPE_9__*,TYPE_4__ const*) ;
 scalar_t__ VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int FUNC_17 (TYPE_5__*,char*,int,int) ;

__attribute__((used)) static void FUNC_18( demux_t *VAR_7,
                                 const dvbpsi_pmt_t *VAR_8,
                                 const dvbpsi_pmt_es_t *VAR_9,
                                 ts_pmt_registration_type_t VAR_10,
                                 const ts_pmt_t *VAR_11,
                                 ts_stream_t *VAR_12 )
{
    demux_sys_t *VAR_13 = VAR_7->p_sys;
    ts_transport_type_t VAR_14 = VAR_5;
    FUNC_0( VAR_7, VAR_12, VAR_9->i_type, &VAR_14 );

    VAR_12->i_stream_type = VAR_9->i_type;

    bool VAR_15 = 0;
    if ( VAR_9->i_type >= 0x80 )
    {
        if ( VAR_10 == VAR_3 )
        {
            if (( VAR_15 = FUNC_9( VAR_7, VAR_12->p_es, VAR_9 ) ))
                FUNC_17( VAR_7, "    + HDMV registration applied to pid %d type 0x%x",
                         VAR_9->i_pid, VAR_9->i_type );
        }
        else
        {
            if (( VAR_15 = FUNC_10( VAR_7, VAR_12->p_es, VAR_9 ) ))
                FUNC_17( VAR_7, "    + registration applied to pid %d type 0x%x",
                    VAR_9->i_pid, VAR_9->i_type );
        }
    }

    if ( !VAR_15 )
    {
        VAR_12->transport = VAR_14;

        switch( VAR_9->i_type )
        {
        case 0x02:
            FUNC_2( VAR_12->p_es, VAR_9 );
            break;
        case 0x05:
            VAR_12->transport = VAR_6;
            FUNC_3( VAR_7, VAR_12->p_es, VAR_9 );
            break;
        case 0x06:

            FUNC_4( VAR_7, VAR_12, VAR_9 );
            break;
        case 0x0a:
        case 0x0b:
        case 0x0c:
        case 0x0d:
            VAR_12->transport = VAR_4;
            break;

        case 0x13:
            VAR_12->transport = VAR_6;

        case 0x0f:
        case 0x10:
        case 0x11:
        case 0x12:
            FUNC_13( VAR_7, VAR_12, VAR_11, VAR_9 );
            break;
        case 0x15:
            FUNC_15( VAR_7, VAR_12, VAR_9 );
            break;
        case 0x1b:
            FUNC_11( VAR_7, VAR_12->p_es, VAR_9 );
            break;
        case 0x21:
            FUNC_14( VAR_7, VAR_12->p_es, VAR_9 );
            break;
        case 0x83:

            FUNC_5( VAR_8, VAR_12->p_es, VAR_9->i_pid );
            break;
        case 0xa0:
            FUNC_6( VAR_7, VAR_12->p_es, VAR_9 );
            break;
        case 0xd1:
            FUNC_7( VAR_7, VAR_12->p_es, VAR_9 );
            break;
        case 0xEA:
            FUNC_8( VAR_7, VAR_12->p_es, VAR_9 );
        default:
            break;
        }
    }

    if( VAR_12->p_es->fmt.i_cat == VAR_0 )
    {
        FUNC_12( VAR_7, VAR_12->p_es, VAR_9 );
    }

    FUNC_16( VAR_7, VAR_12->p_es, VAR_9 );

    if ( VAR_10 == VAR_3 )
    {







        if ( VAR_9->i_pid == 0x1015 &&
            FUNC_1( VAR_7, VAR_9, "HDMV" ) )
        {
            VAR_12->p_es->fmt.i_priority = VAR_1;
        }
        else if( (VAR_9->i_pid >= 0x1a00 && VAR_9->i_pid <= 0x1a1f) ||
                 (VAR_9->i_pid >= 0x1b00 && VAR_9->i_pid <= 0x1b1f) )
        {

            VAR_12->p_es->fmt.i_priority = VAR_1;
        }
        else
        {
            VAR_12->p_es->fmt.i_priority = 0xFFFF - (VAR_9->i_pid & 0xFFFF) +
                                                    VAR_2;
        }
    }


    VAR_12->p_es->fmt.b_packetized = 0;


    VAR_12->p_es->fmt.i_group = VAR_8->i_program_number;
    if( VAR_13->b_es_id_pid )
        VAR_12->p_es->fmt.i_id = VAR_9->i_pid;
}
