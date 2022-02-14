
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;
struct dmx_pes_filter_params {int pid; int pes_type; int flags; int output; int input; } ;
typedef int dmx ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 scalar_t__ FUNC_0 (int,int ,struct dmx_pes_filter_params*) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (char*,int,char*,unsigned int,unsigned int) ;
 unsigned int FUNC_4 (int *,char*) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (int ) ;

int FUNC_7( vlc_object_t *VAR_30, int VAR_31, int * VAR_32, int VAR_33 )
{
    struct dmx_pes_filter_params VAR_34;
    unsigned int VAR_35, VAR_36;
    char VAR_37[128];

    VAR_35 = FUNC_4( VAR_30, "dvb-adapter" );
    VAR_36 = FUNC_4( VAR_30, "dvb-device" );

    if( FUNC_3( VAR_37, sizeof(VAR_37), VAR_0, VAR_35, VAR_36 )
            >= (int)sizeof(VAR_37) )
    {
        FUNC_2( VAR_30, "snprintf() truncated string for DMX" );
        VAR_37[sizeof(VAR_37) - 1] = '\0';
    }

    FUNC_1( VAR_30, "Opening device %s", VAR_37 );
    if( (*VAR_32 = FUNC_5(VAR_37, VAR_26)) < 0 )
    {
        FUNC_2( VAR_30, "DMXSetFilter: opening device failed: %s",
                 FUNC_6(VAR_29) );
        return VAR_27;
    }


    VAR_34.pid = VAR_31;
    VAR_34.input = VAR_2;
    VAR_34.output = VAR_3;
    VAR_34.flags = VAR_1;

    switch ( VAR_33 )
    {
        case 1:
            FUNC_1(VAR_30, "DMXSetFilter: DMX_PES_VIDEO0 for PID %d", VAR_31);
            VAR_34.pes_type = VAR_21;
            break;
        case 2:
            FUNC_1(VAR_30, "DMXSetFilter: DMX_PES_AUDIO0 for PID %d", VAR_31);
            VAR_34.pes_type = VAR_4;
            break;
        case 3:
            FUNC_1(VAR_30, "DMXSetFilter: DMX_PES_TELETEXT0 for PID %d", VAR_31);
            VAR_34.pes_type = VAR_17;
            break;
        case 4:
            FUNC_1(VAR_30, "DMXSetFilter: DMX_PES_SUBTITLE0 for PID %d", VAR_31);
            VAR_34.pes_type = VAR_13;
            break;
        case 5:
            FUNC_1(VAR_30, "DMXSetFilter: DMX_PES_PCR0 for PID %d", VAR_31);
            VAR_34.pes_type = VAR_9;
            break;

        case 6:
            FUNC_1(VAR_30, "DMXSetFilter: DMX_PES_VIDEO1 for PID %d", VAR_31);
            VAR_34.pes_type = VAR_22;
            break;
        case 7:
            FUNC_1(VAR_30, "DMXSetFilter: DMX_PES_AUDIO1 for PID %d", VAR_31);
            VAR_34.pes_type = VAR_5;
            break;
        case 8:
            FUNC_1(VAR_30, "DMXSetFilter: DMX_PES_TELETEXT1 for PID %d", VAR_31);
            VAR_34.pes_type = VAR_18;
            break;
        case 9:
            FUNC_1(VAR_30, "DMXSetFilter: DMX_PES_SUBTITLE1 for PID %d", VAR_31);
            VAR_34.pes_type = VAR_14;
            break;
        case 10:
            FUNC_1(VAR_30, "DMXSetFilter: DMX_PES_PCR1 for PID %d", VAR_31);
            VAR_34.pes_type = VAR_10;
            break;

        case 11:
            FUNC_1(VAR_30, "DMXSetFilter: DMX_PES_VIDEO2 for PID %d", VAR_31);
            VAR_34.pes_type = VAR_23;
            break;
        case 12:
            FUNC_1(VAR_30, "DMXSetFilter: DMX_PES_AUDIO2 for PID %d", VAR_31);
            VAR_34.pes_type = VAR_6;
            break;
        case 13:
            FUNC_1(VAR_30, "DMXSetFilter: DMX_PES_TELETEXT2 for PID %d", VAR_31);
            VAR_34.pes_type = VAR_19;
            break;
        case 14:
            FUNC_1(VAR_30, "DMXSetFilter: DMX_PES_SUBTITLE2 for PID %d", VAR_31);
            VAR_34.pes_type = VAR_15;
            break;
        case 15:
            FUNC_1(VAR_30, "DMXSetFilter: DMX_PES_PCR2 for PID %d", VAR_31);
            VAR_34.pes_type = VAR_11;
            break;

        case 16:
            FUNC_1(VAR_30, "DMXSetFilter: DMX_PES_VIDEO3 for PID %d", VAR_31);
            VAR_34.pes_type = VAR_24;
            break;
        case 17:
            FUNC_1(VAR_30, "DMXSetFilter: DMX_PES_AUDIO3 for PID %d", VAR_31);
            VAR_34.pes_type = VAR_7;
            break;
        case 18:
            FUNC_1(VAR_30, "DMXSetFilter: DMX_PES_TELETEXT3 for PID %d", VAR_31);
            VAR_34.pes_type = VAR_20;
            break;
        case 19:
            FUNC_1(VAR_30, "DMXSetFilter: DMX_PES_SUBTITLE3 for PID %d", VAR_31);
            VAR_34.pes_type = VAR_16;
            break;
        case 20:
            FUNC_1(VAR_30, "DMXSetFilter: DMX_PES_PCR3 for PID %d", VAR_31);
            VAR_34.pes_type = VAR_12;
            break;

        case 21:
        default:
            FUNC_1(VAR_30, "DMXSetFilter: DMX_PES_OTHER for PID %d", VAR_31);
            VAR_34.pes_type = VAR_8;
            break;
    }


    if( FUNC_0( *VAR_32, VAR_25, &VAR_34 ) )
    {
        FUNC_2( VAR_30, "setting demux PES filter failed: %s",
                 FUNC_6(VAR_29) );
        return VAR_27;
    }
    return VAR_28;
}
