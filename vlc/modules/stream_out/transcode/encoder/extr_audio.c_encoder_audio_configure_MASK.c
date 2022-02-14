
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {size_t i_channels; scalar_t__ i_sample_rate; int i_bitrate; } ;
struct TYPE_14__ {TYPE_2__ audio; int i_codec; scalar_t__ psz_lang; int p_config_chain; } ;
typedef TYPE_4__ transcode_encoder_config_t ;
struct TYPE_16__ {size_t i_channels; void* i_physical_channels; int i_format; scalar_t__ i_rate; int i_bitspersample; } ;
struct TYPE_13__ {int i_codec; void* psz_language; TYPE_6__ audio; } ;
struct TYPE_11__ {int i_bitrate; TYPE_6__ audio; int i_codec; void* psz_language; } ;
struct TYPE_15__ {TYPE_3__ fmt_in; TYPE_1__ fmt_out; int p_cfg; } ;
typedef TYPE_5__ encoder_t ;
typedef TYPE_6__ audio_format_t ;


 size_t FUNC_0 (void**) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (void*) ;
 void** VAR_1 ;
 void* FUNC_4 (scalar_t__) ;

__attribute__((used)) static int FUNC_5( const transcode_encoder_config_t *VAR_2,
                                    const audio_format_t *VAR_3,
                                    encoder_t *VAR_4, bool VAR_5 )
{
    audio_format_t *VAR_6 = &VAR_4->fmt_in.audio;
    audio_format_t *VAR_7 = &VAR_4->fmt_out.audio;

    VAR_4->p_cfg = VAR_2->p_config_chain;

    if ( VAR_2->psz_lang )
    {
        FUNC_3( VAR_4->fmt_in.psz_language );
        FUNC_3( VAR_4->fmt_out.psz_language );
        VAR_4->fmt_in.psz_language = FUNC_4( VAR_2->psz_lang );
        VAR_4->fmt_out.psz_language = FUNC_4( VAR_2->psz_lang );
    }


    VAR_4->fmt_out.i_codec = VAR_2->i_codec;
    VAR_4->fmt_out.audio.i_format = VAR_2->i_codec;
    VAR_4->fmt_out.i_bitrate = VAR_2->audio.i_bitrate;
    VAR_7->i_rate = VAR_2->audio.i_sample_rate ? VAR_2->audio.i_sample_rate
                                                   : VAR_3->i_rate;
    VAR_7->i_bitspersample = VAR_3->i_bitspersample;
    VAR_7->i_channels = VAR_2->audio.i_channels ? VAR_2->audio.i_channels
                                                    : VAR_3->i_channels;
    FUNC_1( VAR_7 );
    FUNC_2(VAR_7->i_channels > 0);
    if( VAR_7->i_channels >= FUNC_0(VAR_1) )
        VAR_7->i_channels = FUNC_0(VAR_1) - 1;

    VAR_7->i_physical_channels = VAR_1[VAR_7->i_channels];

    if( VAR_5 )
        return VAR_0;

    VAR_6->i_physical_channels = VAR_7->i_physical_channels;


    VAR_4->fmt_in.i_codec = VAR_3->i_format;
    VAR_6->i_format = VAR_3->i_format;
    VAR_6->i_rate = VAR_7->i_rate;
    VAR_6->i_physical_channels = VAR_7->i_physical_channels;
    FUNC_1( VAR_6 );


    VAR_6->i_format = VAR_4->fmt_in.i_codec;
    if( !VAR_6->i_physical_channels )
    {
        if( VAR_6->i_channels < FUNC_0(VAR_1) )
            VAR_6->i_physical_channels = VAR_1[VAR_6->i_channels];
    }
    FUNC_1( VAR_6 );

    return VAR_0;
}
