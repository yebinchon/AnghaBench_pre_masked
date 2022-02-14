
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {char* psz_language; scalar_t__ i_extra_languages; TYPE_4__* p_extra_languages; scalar_t__ i_priority; void* psz_description; } ;
struct TYPE_10__ {TYPE_1__ fmt; } ;
typedef TYPE_3__ ts_es_t ;
struct TYPE_11__ {char* psz_language; void* psz_description; } ;
typedef TYPE_4__ extra_languages_t ;
struct TYPE_12__ {scalar_t__ i_code_count; TYPE_2__* code; } ;
typedef TYPE_5__ dvbpsi_iso639_dr_t ;
typedef int dvbpsi_descriptor_t ;
typedef int demux_t ;
struct TYPE_9__ {int i_audio_type; int iso_639_code; } ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (int) ;
 TYPE_5__* FUNC_1 (int *) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (int *,char*,char*) ;
 int FUNC_5 (int *,char*) ;

__attribute__((used)) static void FUNC_6( demux_t *VAR_1, ts_es_t *VAR_2,
                                   dvbpsi_descriptor_t *VAR_3 )
{
    dvbpsi_iso639_dr_t *VAR_4 = FUNC_1( VAR_3 );
    if( !VAR_4 )
    {
        FUNC_5( VAR_1, "      Failed to decode a ISO 639 descriptor" );
        return;
    }

    if( !VAR_2->fmt.psz_language )
    {
        VAR_2->fmt.psz_language = FUNC_2( 4 );
        if( VAR_2->fmt.psz_language )
        {
            FUNC_3( VAR_2->fmt.psz_language, VAR_4->code[0].iso_639_code, 3 );
            VAR_2->fmt.psz_language[3] = 0;
            FUNC_4( VAR_1, "      found language: %s", VAR_2->fmt.psz_language);
        }
    }

    uint8_t VAR_5 = VAR_4->code[0].i_audio_type;
    if( !VAR_2->fmt.psz_description )
        VAR_2->fmt.psz_description = FUNC_0( VAR_5 );
    if (VAR_5 == 0x00)
        VAR_2->fmt.i_priority = VAR_0 + 1;

    if( VAR_2->fmt.p_extra_languages )
        return;

    VAR_2->fmt.i_extra_languages = VAR_4->i_code_count-1;
    if( VAR_2->fmt.i_extra_languages > 0 )
        VAR_2->fmt.p_extra_languages =
            FUNC_2( sizeof(*VAR_2->fmt.p_extra_languages) *
                    VAR_2->fmt.i_extra_languages );
    if( VAR_2->fmt.p_extra_languages )
    {
        for( unsigned VAR_6 = 0; VAR_6 < VAR_2->fmt.i_extra_languages; VAR_6++ )
        {
            extra_languages_t *VAR_7 = &VAR_2->fmt.p_extra_languages[VAR_6];
            if( (VAR_7->psz_language = FUNC_2(4)) )
            {
                FUNC_3( VAR_7->psz_language, VAR_4->code[VAR_6+1].iso_639_code, 3 );
                VAR_7->psz_language[3] = '\0';
            }
            VAR_7->psz_description = FUNC_0( VAR_4->code[VAR_6].i_audio_type );
        }
    }
}
