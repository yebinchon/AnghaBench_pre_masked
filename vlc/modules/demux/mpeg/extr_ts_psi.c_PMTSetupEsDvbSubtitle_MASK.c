
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_9__ ;
typedef struct TYPE_30__ TYPE_8__ ;
typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_10__ ;


struct TYPE_25__ {TYPE_4__* p_es; } ;
typedef TYPE_3__ ts_stream_t ;
struct TYPE_23__ {int i_id; } ;
struct TYPE_24__ {TYPE_1__ dvb; } ;
struct TYPE_27__ {scalar_t__ i_extra; TYPE_2__ subs; int * psz_description; int * psz_language; scalar_t__ p_extra; } ;
struct TYPE_26__ {TYPE_5__ fmt; int p_program; } ;
typedef TYPE_4__ ts_es_t ;
typedef TYPE_5__ es_format_t ;
struct TYPE_28__ {int i_subtitles_number; TYPE_7__* p_subtitle; } ;
typedef TYPE_6__ dvbpsi_subtitling_dr_t ;
struct TYPE_29__ {int i_subtitling_type; int i_composition_page_id; int i_ancillary_page_id; scalar_t__ i_iso6392_language_code; } ;
typedef TYPE_7__ dvbpsi_subtitle_t ;
typedef int dvbpsi_pmt_es_t ;
struct TYPE_30__ {scalar_t__ i_length; int p_data; } ;
typedef TYPE_8__ dvbpsi_descriptor_t ;
struct TYPE_31__ {TYPE_10__* p_sys; } ;
typedef TYPE_9__ demux_t ;
struct TYPE_22__ {int b_split_es; } ;
typedef TYPE_10__ demux_sys_t ;


 TYPE_8__* FUNC_0 (int const*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 TYPE_6__* FUNC_2 (TYPE_8__*) ;
 int FUNC_3 (TYPE_5__*,int ,int ) ;
 int FUNC_4 (TYPE_5__*,TYPE_5__*) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__,int ,scalar_t__) ;
 void* FUNC_8 (int ) ;
 int * FUNC_9 (char*,int) ;
 TYPE_4__* FUNC_10 (int ) ;
 int FUNC_11 (TYPE_3__*,TYPE_4__*,int) ;

__attribute__((used)) static void FUNC_12( demux_t *VAR_2, ts_stream_t *VAR_3,
                                   const dvbpsi_pmt_es_t *VAR_4 )
{
    demux_sys_t *VAR_5 = VAR_2->p_sys;
    es_format_t *VAR_6 = &VAR_3->p_es->fmt;

    FUNC_3( VAR_6, VAR_0, VAR_1 );

    dvbpsi_descriptor_t *VAR_7 = FUNC_0( VAR_4, 0x59 );
    int VAR_8 = 0;
    dvbpsi_subtitling_dr_t *VAR_9 = FUNC_2( VAR_7 );
    for( int VAR_10 = 0; VAR_9 && VAR_10 < VAR_9->i_subtitles_number; VAR_10++ )
    {
        const int VAR_11 = VAR_9->p_subtitle[VAR_10].i_subtitling_type;
        if( ( VAR_11 >= 0x10 && VAR_11 <= 0x14 ) ||
            ( VAR_11 >= 0x20 && VAR_11 <= 0x24 ) )
            VAR_8++;
    }

    if( !VAR_5->b_split_es || VAR_8 <= 0 )
    {
        VAR_6->subs.dvb.i_id = -1;
        VAR_6->psz_description = FUNC_8( FUNC_1("DVB subtitles") );

        if( !VAR_5->b_split_es && VAR_7 && VAR_7->i_length > 0 )
        {

            VAR_6->p_extra = FUNC_6( VAR_7->i_length );
            if( VAR_6->p_extra )
            {
                VAR_6->i_extra = VAR_7->i_length;
                FUNC_7( VAR_6->p_extra, VAR_7->p_data, VAR_7->i_length );
            }
        }
    }
    else
    {
        for( int VAR_12 = 0; VAR_12 < VAR_9->i_subtitles_number; VAR_12++ )
        {
            ts_es_t *VAR_13;


            if( VAR_12 == 0 )
            {
                VAR_13 = VAR_3->p_es;
            }
            else
            {
                VAR_13 = FUNC_10( VAR_3->p_es->p_program );
                if( !VAR_13 )
                    break;

                FUNC_4( &VAR_13->fmt, VAR_6 );
                FUNC_5( VAR_13->fmt.psz_language );
                FUNC_5( VAR_13->fmt.psz_description );
                VAR_13->fmt.psz_language = ((void*)0);
                VAR_13->fmt.psz_description = ((void*)0);

                FUNC_11( VAR_3, VAR_13, 1 );
            }


            const dvbpsi_subtitle_t *VAR_14 = &VAR_9->p_subtitle[VAR_12];
            VAR_13->fmt.psz_language = FUNC_9( (char *)VAR_14->i_iso6392_language_code, 3 );
            switch( VAR_14->i_subtitling_type )
            {
            case 0x10:
            case 0x11:
            case 0x12:
            case 0x13:
            case 0x14:
                VAR_13->fmt.psz_description = FUNC_8( FUNC_1("DVB subtitles") );
                break;
            case 0x20:
            case 0x21:
            case 0x22:
            case 0x23:
            case 0x24:
                VAR_13->fmt.psz_description = FUNC_8( FUNC_1("DVB subtitles: hearing impaired") );
                break;
            default:
                break;
            }


            VAR_13->fmt.subs.dvb.i_id = ( VAR_14->i_composition_page_id << 0 ) |
                                      ( VAR_14->i_ancillary_page_id << 16 );
        }
    }
}
