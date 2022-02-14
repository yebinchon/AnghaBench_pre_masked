
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_15__ ;


typedef int vlc_object_t ;
typedef scalar_t__ vlc_fourcc_t ;
struct TYPE_22__ {int i_width; int i_height; int i_visible_width; int i_visible_height; scalar_t__ i_chroma; int i_frame_rate_base; int i_frame_rate; } ;
typedef TYPE_3__ video_format_t ;
struct TYPE_20__ {int i_count; } ;
struct TYPE_21__ {int i_width; int i_height; int i_bitrate; TYPE_1__ threads; } ;
struct TYPE_23__ {char* psz_name; scalar_t__ i_codec; TYPE_2__ video; int p_config_chain; } ;
typedef TYPE_4__ transcode_encoder_config_t ;
typedef int module_t ;
struct TYPE_24__ {TYPE_3__ video; } ;
typedef TYPE_5__ es_format_t ;
struct TYPE_19__ {scalar_t__ i_codec; TYPE_3__ video; int i_bitrate; } ;
struct TYPE_25__ {TYPE_15__ fmt_out; TYPE_15__ fmt_in; int p_cfg; int i_threads; } ;
typedef TYPE_6__ encoder_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_15__*) ;
 int FUNC_2 (TYPE_5__*,TYPE_15__*) ;
 int FUNC_3 (TYPE_15__*,int ,scalar_t__) ;
 scalar_t__ FUNC_4 (int) ;
 int * FUNC_5 (TYPE_6__*,char*,char*,int) ;
 int FUNC_6 (TYPE_6__*,int *) ;
 int FUNC_7 (int *,char*,char*,char*) ;
 TYPE_6__* FUNC_8 (int *) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_6__*) ;

int FUNC_11( vlc_object_t *VAR_5,
                                  const transcode_encoder_config_t *VAR_6,
                                  const es_format_t *VAR_7,
                                  vlc_fourcc_t VAR_8,
                                  es_format_t *VAR_9 )
{
    encoder_t *VAR_10 = FUNC_8( VAR_5 );
    if( !VAR_10 )
        return VAR_3;

    VAR_10->i_threads = VAR_6->video.threads.i_count;
    VAR_10->p_cfg = VAR_6->p_config_chain;

    FUNC_3( &VAR_10->fmt_in, VAR_2, VAR_8 );
    FUNC_3( &VAR_10->fmt_out, VAR_2, VAR_6->i_codec );

    const video_format_t *VAR_11 = &VAR_7->video;
    video_format_t *VAR_12 = &VAR_10->fmt_in.video;
    video_format_t *VAR_13 = &VAR_10->fmt_out.video;


    VAR_13->i_width = VAR_6->video.i_width & ~1;
    VAR_13->i_height = VAR_6->video.i_height & ~1;
    VAR_10->fmt_out.i_bitrate = VAR_6->video.i_bitrate;




    VAR_12->i_chroma = VAR_8;
    VAR_12->i_width = FUNC_0( VAR_13->i_width, VAR_11->i_width, 16 ) & ~1;
    VAR_12->i_height = FUNC_0( VAR_13->i_height, VAR_11->i_height, 16 ) & ~1;
    VAR_12->i_visible_width = FUNC_0( VAR_13->i_visible_width,
                                             VAR_11->i_visible_width, VAR_12->i_width ) & ~1;
    VAR_12->i_visible_height = FUNC_0( VAR_13->i_visible_height,
                                              VAR_11->i_visible_height, VAR_12->i_height ) & ~1;
    VAR_12->i_frame_rate = VAR_0;
    VAR_12->i_frame_rate_base = VAR_1;

    module_t *VAR_14 = FUNC_5( VAR_10, "encoder", VAR_6->psz_name, 1 );
    if( !VAR_14 )
    {
        FUNC_7( VAR_5, "cannot find video encoder (module:%s fourcc:%4.4s). "
                           "Take a look few lines earlier to see possible reason.",
                 VAR_6->psz_name ? VAR_6->psz_name : "any",
                 (char *)&VAR_6->i_codec );
    }
    else
    {


        FUNC_6( VAR_10, VAR_14 );
    }

    if( FUNC_4(!VAR_10->fmt_in.video.i_chroma) )
        VAR_10->fmt_in.video.i_chroma = VAR_10->fmt_in.i_codec;


    FUNC_2( VAR_9, &VAR_10->fmt_in );
    FUNC_9( &VAR_9->video );

    FUNC_1( &VAR_10->fmt_in );
    FUNC_1( &VAR_10->fmt_out );

    FUNC_10(VAR_10);

    return VAR_14 != ((void*)0) ? VAR_4 : VAR_3;
}
