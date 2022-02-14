
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_12__ ;


typedef int vlc_object_t ;
typedef int vlc_fourcc_t ;
struct TYPE_20__ {char* psz_name; int i_codec; int p_config_chain; } ;
typedef TYPE_1__ transcode_encoder_config_t ;
typedef int module_t ;
struct TYPE_23__ {int i_channels; int i_format; int i_physical_channels; } ;
struct TYPE_21__ {TYPE_4__ audio; } ;
typedef TYPE_2__ es_format_t ;
struct TYPE_19__ {int i_codec; TYPE_4__ audio; } ;
struct TYPE_22__ {TYPE_12__ fmt_out; TYPE_12__ fmt_in; int p_cfg; } ;
typedef TYPE_3__ encoder_t ;
typedef TYPE_4__ audio_format_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_1__ const*,TYPE_4__*,TYPE_3__*,int) ;
 int FUNC_1 (TYPE_12__*) ;
 int FUNC_2 (TYPE_2__*,TYPE_12__*) ;
 int FUNC_3 (TYPE_12__*,int ,int ) ;
 int * FUNC_4 (TYPE_3__*,char*,char*,int) ;
 int FUNC_5 (TYPE_3__*,int *) ;
 int FUNC_6 (int *,char*,char*,char*) ;
 TYPE_3__* FUNC_7 (int *) ;
 int FUNC_8 (TYPE_3__*) ;

int FUNC_9( vlc_object_t *VAR_4,
                                  const transcode_encoder_config_t *VAR_5,
                                  const es_format_t *VAR_6,
                                  vlc_fourcc_t VAR_7,
                                  es_format_t *VAR_8 )
{
    encoder_t *VAR_9 = FUNC_7( VAR_4 );
    if( !VAR_9 )
        return VAR_2;

    VAR_9->p_cfg = VAR_5->p_config_chain;

    FUNC_3( &VAR_9->fmt_in, VAR_1, VAR_7 );
    VAR_9->fmt_in.audio = VAR_6->audio;
    FUNC_3( &VAR_9->fmt_out, VAR_1, VAR_5->i_codec );

    audio_format_t *VAR_10 = &VAR_9->fmt_out.audio;

    if( FUNC_0( VAR_5, &VAR_6->audio, VAR_9, 0 ) )
    {
        FUNC_1( &VAR_9->fmt_in );
        FUNC_1( &VAR_9->fmt_out );
        FUNC_8(VAR_9);
        return VAR_2;
    }

    VAR_9->fmt_in.audio.i_format = VAR_7;

    if( VAR_10->i_channels == 0 )
    {
        VAR_10->i_channels = 2;
        VAR_10->i_physical_channels = VAR_0;
    }

    module_t *VAR_11 = FUNC_4( VAR_9, "encoder", VAR_5->psz_name, 1 );
    if( !VAR_11 )
    {
        FUNC_6( VAR_4, "cannot find audio encoder (module:%s fourcc:%4.4s). "
                           "Take a look few lines earlier to see possible reason.",
                           VAR_5->psz_name ? VAR_5->psz_name : "any",
                           (char *)&VAR_5->i_codec );
    }
    else
    {


        FUNC_5( VAR_9, VAR_11 );
    }

    VAR_9->fmt_in.audio.i_format = VAR_9->fmt_in.i_codec;


    FUNC_2( VAR_8, &VAR_9->fmt_in );

    FUNC_1( &VAR_9->fmt_in );
    FUNC_1( &VAR_9->fmt_out );

    FUNC_8(VAR_9);

    return VAR_11 != ((void*)0) ? VAR_3 : VAR_2;
}
