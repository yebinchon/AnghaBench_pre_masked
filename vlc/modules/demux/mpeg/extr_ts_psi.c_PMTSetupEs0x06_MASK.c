
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_38__ TYPE_9__ ;
typedef struct TYPE_37__ TYPE_8__ ;
typedef struct TYPE_36__ TYPE_7__ ;
typedef struct TYPE_35__ TYPE_6__ ;
typedef struct TYPE_34__ TYPE_5__ ;
typedef struct TYPE_33__ TYPE_4__ ;
typedef struct TYPE_32__ TYPE_3__ ;
typedef struct TYPE_31__ TYPE_2__ ;
typedef struct TYPE_30__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_32__ {TYPE_1__* p_es; } ;
typedef TYPE_3__ ts_stream_t ;
struct TYPE_33__ {int b_packetized; scalar_t__ i_cat; void* psz_description; void* psz_language; int i_profile; } ;
typedef TYPE_4__ es_format_t ;
struct TYPE_34__ {int i_subtitles_number; TYPE_2__* p_subtitle; } ;
typedef TYPE_5__ dvbpsi_subtitling_dr_t ;
struct TYPE_35__ {int i_component_tag; } ;
typedef TYPE_6__ dvbpsi_stream_identifier_dr_t ;
typedef int dvbpsi_pmt_es_t ;
struct TYPE_36__ {int i_length; int* p_data; } ;
typedef TYPE_7__ dvbpsi_descriptor_t ;
struct TYPE_37__ {TYPE_9__* p_sys; } ;
typedef TYPE_8__ demux_t ;
struct TYPE_38__ {scalar_t__ standard; } ;
typedef TYPE_9__ demux_sys_t ;
struct TYPE_31__ {int i_subtitling_type; } ;
struct TYPE_30__ {TYPE_4__ fmt; } ;


 int VAR_0 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (TYPE_8__*,int*,int,TYPE_4__*) ;
 TYPE_7__* FUNC_2 (int const*,int) ;
 scalar_t__ FUNC_3 (int const*,int,int) ;
 scalar_t__ FUNC_4 (TYPE_8__*,int const*,char*) ;
 int FUNC_5 (TYPE_8__*,TYPE_3__*,int const*) ;
 int FUNC_6 (TYPE_8__*,TYPE_3__*,int const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_7 (TYPE_8__*,TYPE_7__*,TYPE_4__*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_8 (char,char,char,char) ;
 int FUNC_9 (char*) ;
 TYPE_6__* FUNC_10 (TYPE_7__*) ;
 TYPE_5__* FUNC_11 (TYPE_7__*) ;
 int FUNC_12 (TYPE_4__*,int ,int ) ;
 int FUNC_13 (TYPE_8__*,char*,int ) ;
 int FUNC_14 (TYPE_8__*,char*,int) ;
 void* FUNC_15 (int ) ;
 void* FUNC_16 (char*,int) ;

__attribute__((used)) static void FUNC_17( demux_t *VAR_14, ts_stream_t *VAR_15,
                            const dvbpsi_pmt_es_t *VAR_16 )
{
    demux_sys_t *VAR_17 = VAR_14->p_sys;
    es_format_t *VAR_18 = &VAR_15->p_es->fmt;
    dvbpsi_descriptor_t *VAR_19 = FUNC_2( VAR_16, 0x59 );
    dvbpsi_descriptor_t *VAR_20;
    if( FUNC_4( VAR_14, VAR_16, "EAC3" ) ||
        FUNC_2( VAR_16, 0x7a ) )
    {

        FUNC_12( VAR_18, VAR_0, VAR_11 );
    }
    else if( FUNC_4( VAR_14, VAR_16, "AC-3" ) ||
             FUNC_2( VAR_16, 0x6a ) ||
             FUNC_2( VAR_16, 0x81 ) )
    {
        FUNC_12( VAR_18, VAR_0, VAR_7 );
    }
    else if( FUNC_4( VAR_14, VAR_16, "DTS1" ) ||
             FUNC_4( VAR_14, VAR_16, "DTS2" ) ||
             FUNC_4( VAR_14, VAR_16, "DTS3" ) ||
             FUNC_2( VAR_16, 0x73 ) )
    {

        FUNC_12( VAR_18, VAR_0, VAR_10 );
    }
    else if( FUNC_4( VAR_14, VAR_16, "BSSD" ) && !VAR_19 )
    {


        FUNC_12( VAR_18, VAR_0, VAR_6 );
        VAR_18->b_packetized = 1;
    }
    else if( FUNC_4( VAR_14, VAR_16, "HEVC" ) )
    {
        FUNC_12( VAR_18, VAR_5, VAR_12 );
    }
    else if( (VAR_20 = FUNC_2( VAR_16, 0x7f )) &&
             VAR_20->i_length >= 2 )
    {

        switch( VAR_20->p_data[0] )
        {
            case 0x80:


                if( FUNC_4(VAR_14, VAR_16, "Opus") )
                    FUNC_1(VAR_14, VAR_20->p_data, VAR_20->i_length, VAR_18);
                break;
            case 0x0E:
                FUNC_12( VAR_18, VAR_0, VAR_10 );
                VAR_18->i_profile = VAR_1;
                break;
            case 0x0F:
                FUNC_12( VAR_18, VAR_0, VAR_10 );
                break;
            case 0x15:
                FUNC_12( VAR_18, VAR_0, FUNC_8('A', 'C', '-', '4') );
                break;
            case 0x20:
                FUNC_12( VAR_18, VAR_2, VAR_13 );
                FUNC_7( VAR_14, VAR_20, VAR_18 );
                break;
        }
    }
    else if( VAR_17->standard == VAR_3 )
    {

        dvbpsi_descriptor_t *VAR_21 = FUNC_2( VAR_16, 0xFD );

        if ( VAR_21 && VAR_21->i_length >= 2 )
        {

            const uint16_t VAR_22 = FUNC_0(VAR_21->p_data);
            if( VAR_22 == 0x0008 &&
                FUNC_3( VAR_16, 0x30, 0x37 ) )
            {
                FUNC_12( VAR_18, VAR_2, VAR_8 );
                VAR_18->psz_language = FUNC_16 ( "jpn", 3 );
                VAR_18->psz_description = FUNC_15( FUNC_9("ARIB subtitles") );
            }
            else if( VAR_22 == 0x0012 &&
                     FUNC_3( VAR_16, 0x87, 0x88 ) )
            {
                FUNC_12( VAR_18, VAR_2, VAR_9 );
                VAR_18->psz_language = FUNC_16 ( "jpn", 3 );
                VAR_18->psz_description = FUNC_15( FUNC_9("ARIB subtitles") );
            }
        }
    }
    else
    {

        dvbpsi_subtitling_dr_t *VAR_23;
        if( VAR_19 && ( VAR_23 = FUNC_11( VAR_19 ) ) )
        {
            for( int VAR_24 = 0; VAR_24 < VAR_23->i_subtitles_number; VAR_24++ )
            {
                if( VAR_18->i_cat != VAR_4 )
                    break;

                switch( VAR_23->p_subtitle[VAR_24].i_subtitling_type )
                {
                case 0x01:
                case 0x02:
                case 0x03:
                    FUNC_6( VAR_14, VAR_15, VAR_16 );
                    break;
                case 0x10:
                case 0x11:
                case 0x12:
                case 0x13:
                case 0x14:
                case 0x20:
                case 0x21:
                case 0x22:
                case 0x23:
                case 0x24:
                    FUNC_5( VAR_14, VAR_15, VAR_16 );
                    break;
                default:
                    FUNC_14( VAR_14, "Unrecognized DVB subtitle type (0x%x)",
                             VAR_23->p_subtitle[VAR_24].i_subtitling_type );
                    break;
                }
            }
        }

        if( VAR_18->i_cat == VAR_4 &&
            ( FUNC_2( VAR_16, 0x45 ) ||
              FUNC_2( VAR_16, 0x46 ) ||
              FUNC_2( VAR_16, 0x56 ) ) )
        {

            FUNC_6( VAR_14, VAR_15, VAR_16 );
        }
    }


    if( FUNC_2( VAR_16, 0x52 ) )
    {
        dvbpsi_descriptor_t *VAR_25 = FUNC_2( VAR_16, 0x52 );
        dvbpsi_stream_identifier_dr_t *VAR_26 = FUNC_10( VAR_25 );

        FUNC_13( VAR_14, "    * Stream Component Identifier: %d", VAR_26->i_component_tag );
    }
}
