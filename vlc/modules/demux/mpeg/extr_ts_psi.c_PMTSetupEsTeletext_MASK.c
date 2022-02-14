
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_40__ TYPE_9__ ;
typedef struct TYPE_39__ TYPE_8__ ;
typedef struct TYPE_38__ TYPE_7__ ;
typedef struct TYPE_37__ TYPE_6__ ;
typedef struct TYPE_36__ TYPE_5__ ;
typedef struct TYPE_35__ TYPE_4__ ;
typedef struct TYPE_34__ TYPE_3__ ;
typedef struct TYPE_33__ TYPE_2__ ;
typedef struct TYPE_32__ TYPE_1__ ;
typedef struct TYPE_31__ TYPE_13__ ;
typedef struct TYPE_30__ TYPE_12__ ;
typedef struct TYPE_29__ TYPE_11__ ;
typedef struct TYPE_28__ TYPE_10__ ;


struct TYPE_34__ {int i_type; int i_magazine; int i_page; scalar_t__ p_iso639; } ;
typedef TYPE_3__ ts_teletext_page_t ;
struct TYPE_35__ {TYPE_5__* p_es; } ;
typedef TYPE_4__ ts_stream_t ;
struct TYPE_32__ {int i_magazine; int i_page; } ;
struct TYPE_33__ {TYPE_1__ teletext; } ;
struct TYPE_37__ {int i_extra; int * psz_language; int * psz_description; TYPE_2__ subs; int i_priority; scalar_t__ p_extra; } ;
struct TYPE_36__ {TYPE_6__ fmt; int p_program; } ;
typedef TYPE_5__ ts_es_t ;
typedef int p_page ;
typedef TYPE_6__ es_format_t ;
typedef enum txt_pass_s { ____Placeholder_txt_pass_s } txt_pass_s ;
struct TYPE_38__ {int i_teletext_type; int i_teletext_magazine_number; int i_teletext_page_number; int i_iso6392_language_code; } ;
typedef TYPE_7__ dvbpsi_teletextpage_t ;
struct TYPE_39__ {int i_pages_number; TYPE_7__* p_pages; } ;
typedef TYPE_8__ dvbpsi_teletext_dr_t ;
struct TYPE_40__ {int i_subtitles_number; TYPE_10__* p_subtitle; } ;
typedef TYPE_9__ dvbpsi_subtitling_dr_t ;
struct TYPE_28__ {int i_subtitling_type; int i_composition_page_id; int i_iso6392_language_code; } ;
typedef TYPE_10__ dvbpsi_subtitle_t ;
typedef int dvbpsi_pmt_es_t ;
struct TYPE_29__ {int i_length; int p_data; } ;
typedef TYPE_11__ dvbpsi_descriptor_t ;
struct TYPE_30__ {TYPE_13__* p_sys; } ;
typedef TYPE_12__ demux_t ;
struct TYPE_31__ {int b_split_es; } ;
typedef TYPE_13__ demux_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_11__* FUNC_0 (int const*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 TYPE_9__* FUNC_2 (TYPE_11__*) ;
 TYPE_8__* FUNC_3 (TYPE_11__*) ;
 int FUNC_4 (TYPE_6__*,int ,int ) ;
 int FUNC_5 (TYPE_6__*,TYPE_6__*) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (scalar_t__,int ,int) ;
 int FUNC_9 (TYPE_12__*,char*,int *,int *,int,int) ;
 int * VAR_4 ;
 void* FUNC_10 (int ) ;
 int * FUNC_11 (scalar_t__,int) ;
 TYPE_5__* FUNC_12 (int ) ;
 int FUNC_13 (TYPE_4__*,TYPE_5__*,int) ;
 int FUNC_14 (int ) ;

__attribute__((used)) static void FUNC_15( demux_t *VAR_5, ts_stream_t *VAR_6,
                                const dvbpsi_pmt_es_t *VAR_7 )
{
    demux_sys_t *VAR_8 = VAR_5->p_sys;
    es_format_t *VAR_9 = &VAR_6->p_es->fmt;

    ts_teletext_page_t VAR_10[2 * 64 + 20];
    unsigned VAR_11 = 0;
    dvbpsi_descriptor_t *VAR_12;


    for( unsigned VAR_13 = 0; VAR_13 < 2; VAR_13++ )
    {
        VAR_12 = FUNC_0( VAR_7, VAR_13 == 0 ? 0x46 : 0x56 );
        if( !VAR_12 )
            continue;

        dvbpsi_teletext_dr_t *VAR_14 = FUNC_3( VAR_12 );
        if( !VAR_14 )
            continue;

        for( int VAR_15 = 0; VAR_15 < VAR_14->i_pages_number; VAR_15++ )
        {
            const dvbpsi_teletextpage_t *VAR_16 = &VAR_14->p_pages[VAR_15];

            if( VAR_16->i_teletext_type >= 0x06 )
                continue;

            FUNC_1( VAR_11 < sizeof(VAR_10)/sizeof(*VAR_10) );

            ts_teletext_page_t *VAR_17 = &VAR_10[VAR_11++];

            VAR_17->i_type = VAR_16->i_teletext_type;
            VAR_17->i_magazine = VAR_16->i_teletext_magazine_number
                ? VAR_16->i_teletext_magazine_number : 8;
            VAR_17->i_page = VAR_16->i_teletext_page_number;
            FUNC_8( VAR_17->p_iso639, VAR_16->i_iso6392_language_code, 3 );
        }
    }

    VAR_12 = FUNC_0( VAR_7, 0x59 );
    if( VAR_12 )
    {
        dvbpsi_subtitling_dr_t *VAR_18 = FUNC_2( VAR_12 );
        for( int VAR_19 = 0; VAR_18 && VAR_19 < VAR_18->i_subtitles_number; VAR_19++ )
        {
            dvbpsi_subtitle_t *VAR_20 = &VAR_18->p_subtitle[VAR_19];

            if( VAR_20->i_subtitling_type < 0x01 || VAR_20->i_subtitling_type > 0x03 )
                continue;

            FUNC_1( VAR_11 < sizeof(VAR_10)/sizeof(*VAR_10) );

            ts_teletext_page_t *VAR_21 = &VAR_10[VAR_11++];

            switch( VAR_20->i_subtitling_type )
            {
            case 0x01:
                VAR_21->i_type = 0x02;
                break;
            default:
                VAR_21->i_type = 0x03;
                break;
            }

            VAR_21->i_magazine = (VAR_20->i_composition_page_id >> 8)
                ? (VAR_20->i_composition_page_id >> 8) : 8;
            VAR_21->i_page = VAR_20->i_composition_page_id & 0xff;
            FUNC_8( VAR_21->p_iso639, VAR_20->i_iso6392_language_code, 3 );
        }
    }


    FUNC_4(VAR_9, VAR_2, VAR_3 );

    if( !VAR_8->b_split_es || VAR_11 <= 0 )
    {
        VAR_9->subs.teletext.i_magazine = 255;
        VAR_9->subs.teletext.i_page = 0;
        VAR_9->psz_description = FUNC_10( FUNC_14(VAR_4[1]) );

        VAR_12 = FUNC_0( VAR_7, 0x46 );
        if( !VAR_12 )
            VAR_12 = FUNC_0( VAR_7, 0x56 );

        if( !VAR_8->b_split_es && VAR_12 && VAR_12->i_length > 0 )
        {

            VAR_9->p_extra = FUNC_7( VAR_12->i_length );
            if( VAR_9->p_extra )
            {
                VAR_9->i_extra = VAR_12->i_length;
                FUNC_8( VAR_9->p_extra, VAR_12->p_data, VAR_12->i_length );
            }
        }
    }
    else
    {
        ts_es_t *VAR_22 = VAR_6->p_es;
        enum txt_pass_s
        {
            TXT_SUBTITLES = 0,
            TXT_INDEX_PAGE,
            TXT_OTHER,
        };
        for( enum txt_pass_s VAR_23 = TXT_SUBTITLES; VAR_23 <= TXT_OTHER; VAR_23++ )
        {
            for( unsigned VAR_24 = 0; VAR_24 < VAR_11; VAR_24++ )
            {
                const ts_teletext_page_t *VAR_25 = &VAR_10[VAR_24];
                if(VAR_25->i_magazine == 1 && VAR_23 != TXT_INDEX_PAGE)
                    continue;
                if((VAR_25->i_type == 0x02 || VAR_25->i_type == 0x05) && VAR_23 != TXT_SUBTITLES)
                    continue;


                if( !VAR_22 )
                {
                    VAR_22 = FUNC_12( VAR_6->p_es->p_program );
                    if( !VAR_22 )
                        break;

                    FUNC_5( &VAR_22->fmt, VAR_9 );
                    FUNC_6( VAR_22->fmt.psz_language );
                    FUNC_6( VAR_22->fmt.psz_description );
                    VAR_22->fmt.psz_language = ((void*)0);
                    VAR_22->fmt.psz_description = ((void*)0);
                    FUNC_13( VAR_6, VAR_22, 1 );
                }


                VAR_22->fmt.i_priority = (VAR_23 == TXT_SUBTITLES) ?
                          VAR_1 : VAR_0;
                VAR_22->fmt.psz_language = FUNC_11( VAR_25->p_iso639, 3 );
                VAR_22->fmt.psz_description = FUNC_10(FUNC_14(VAR_4[VAR_25->i_type]));
                VAR_22->fmt.subs.teletext.i_magazine = VAR_25->i_magazine;
                VAR_22->fmt.subs.teletext.i_page = VAR_25->i_page;

                FUNC_9( VAR_5,
                             "    * ttxt type=%s lan=%s page=%d%02x",
                             VAR_22->fmt.psz_description,
                             VAR_22->fmt.psz_language,
                             VAR_25->i_magazine, VAR_25->i_page );

                VAR_22 = ((void*)0);
            }
        }
    }
}
