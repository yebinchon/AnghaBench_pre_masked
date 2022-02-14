
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_20__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_16__ ;


typedef int vlc_object_t ;
typedef char uint8_t ;
struct TYPE_25__ {char i_type; int i_length; float i_compression; } ;
typedef TYPE_3__ frame_header_t ;
struct TYPE_24__ {int i_bitspersample; int i_rate; } ;
struct TYPE_22__ {int i_height; int i_visible_height; int i_sar_num; int i_width; int i_sar_den; int i_visible_width; } ;
struct TYPE_26__ {int i_extra; TYPE_2__ audio; TYPE_1__ video; int * p_extra; } ;
typedef TYPE_4__ es_format_t ;
struct TYPE_27__ {TYPE_6__* p_sys; int pf_control; int pf_demux; int s; int out; } ;
typedef TYPE_5__ demux_t ;
struct TYPE_21__ {scalar_t__ i_video_blocks; int i_height; int d_aspect; scalar_t__ i_audio_blocks; scalar_t__ i_text_blocks; int i_width; } ;
struct TYPE_23__ {int i_audio_bits_per_sample; int i_audio_sample_rate; int i_video_fcc; } ;
struct TYPE_28__ {int i_pcr; int b_index; int i_total_frames; int i_total_length; int i_extra_f; int i_first_frame_offset; TYPE_16__ hdr; int * p_es_audio; TYPE_20__ exh; int * p_es_video; int * p_extra_f; scalar_t__ b_seekable; int idx; } ;
typedef TYPE_6__ demux_sys_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_5__*,TYPE_20__*) ;
 scalar_t__ FUNC_2 (TYPE_5__*,TYPE_3__*) ;
 scalar_t__ FUNC_3 (TYPE_5__*,TYPE_16__*) ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (TYPE_5__*,TYPE_6__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_4__*,int ,int ) ;
 void* FUNC_7 (int ,TYPE_4__*) ;
 void* FUNC_8 (int) ;
 int FUNC_9 (TYPE_6__*,int ,int) ;
 int FUNC_10 (TYPE_5__*,char*) ;
 int FUNC_11 (TYPE_5__*,char*) ;
 int FUNC_12 (TYPE_5__*,char*,...) ;
 scalar_t__ FUNC_13 (char*,char*,int) ;
 int FUNC_14 (int ,int ,scalar_t__*) ;
 int FUNC_15 (int ,char const**,int) ;
 int FUNC_16 (int ,int *,int) ;
 int FUNC_17 (int ) ;

__attribute__((used)) static int FUNC_18( vlc_object_t * VAR_9 )
{
    demux_t *VAR_10 = (demux_t*)VAR_9;
    demux_sys_t *VAR_11;
    const uint8_t *VAR_12;
    frame_header_t VAR_13;


    if( FUNC_15( VAR_10->s, &VAR_12, 12 ) != 12 ||
        ( FUNC_13( (char *)VAR_12, "MythTVVideo", 11 ) &&
          FUNC_13( (char *)VAR_12, "NuppelVideo", 11 ) ) )
        return VAR_6;

    VAR_11 = FUNC_8( sizeof( demux_sys_t ) );
    if( VAR_11 == ((void*)0) )
        return VAR_7;
    FUNC_9( VAR_11, 0, sizeof( demux_sys_t ) );
    VAR_11->p_es_video = ((void*)0);
    VAR_11->p_es_audio = ((void*)0);
    VAR_11->p_extra_f = ((void*)0);
    VAR_11->i_pcr = -1;
    VAR_11->b_index = 0;
    VAR_11->i_total_frames = -1;
    VAR_11->i_total_length = -1;
    FUNC_5( &VAR_11->idx );

    VAR_10->p_sys = VAR_11;


    FUNC_14( VAR_10->s, VAR_3, &VAR_11->b_seekable );







    if( FUNC_3( VAR_10, &VAR_11->hdr ) )
        goto error;


    if( FUNC_2( VAR_10, &VAR_13 ) || VAR_13.i_type != 'D' )
        goto error;
    if( VAR_13.i_length > 0 )
    {
        if( VAR_13.i_compression == 'F' || VAR_13.i_compression == 'R' )
        {

            VAR_11->i_extra_f = VAR_13.i_length;
            VAR_11->p_extra_f = FUNC_8( VAR_13.i_length );
            if( VAR_11->p_extra_f == ((void*)0) || FUNC_16( VAR_10->s,
                             VAR_11->p_extra_f, VAR_13.i_length ) != VAR_13.i_length )
                goto error;
        }
        else
        {
            FUNC_12( VAR_10, "unsupported 'D' frame (c=%c)", VAR_13.i_compression );
            if( FUNC_16( VAR_10->s, ((void*)0),
                                 VAR_13.i_length ) != VAR_13.i_length )
                goto error;
        }
    }


    if( FUNC_15( VAR_10->s, &VAR_12, 1 ) != 1 )
        goto error;
    if( VAR_12[0] == 'X' )
    {
        if( FUNC_2( VAR_10, &VAR_13 ) )
            goto error;
        if( VAR_13.i_length != 512 )
            goto error;

        if( FUNC_1( VAR_10, &VAR_11->exh ) )
            goto error;

        if( !VAR_11->b_seekable )
            FUNC_12( VAR_10, "stream is not seekable, skipping seektable" );
        else if( FUNC_4( VAR_10, VAR_11 ) )
        {
            VAR_11->b_index = 0;
            FUNC_12( VAR_10, "Seektable is broken, seek won't be accurate" );
        }
    }
    else
    {


        FUNC_11( VAR_10, "VLC doesn't support NUV without extended chunks (please upload samples)" );
        goto error;
    }


    if( VAR_11->hdr.i_video_blocks != 0 )
    {
        es_format_t VAR_14;

        FUNC_6( &VAR_14, VAR_4, VAR_11->exh.i_video_fcc );
        VAR_14.video.i_width = VAR_11->hdr.i_width;
        VAR_14.video.i_height = VAR_11->hdr.i_height;
        VAR_14.video.i_visible_width = VAR_14.video.i_width;
        VAR_14.video.i_visible_height = VAR_14.video.i_height;
        VAR_14.i_extra = VAR_11->i_extra_f;
        VAR_14.p_extra = VAR_11->p_extra_f;
        VAR_14.video.i_sar_num = VAR_11->hdr.d_aspect * VAR_14.video.i_height;
        VAR_14.video.i_sar_den = VAR_14.video.i_width;

        VAR_11->p_es_video = FUNC_7( VAR_10->out, &VAR_14 );
    }
    if( VAR_11->hdr.i_audio_blocks != 0 )
    {
        es_format_t VAR_15;

        FUNC_6( &VAR_15, VAR_0, VAR_5 );
        VAR_15.audio.i_rate = VAR_11->exh.i_audio_sample_rate;
        VAR_15.audio.i_bitspersample = VAR_11->exh.i_audio_bits_per_sample;

        VAR_11->p_es_audio = FUNC_7( VAR_10->out, &VAR_15 );
    }
    if( VAR_11->hdr.i_text_blocks != 0 )
    {
        FUNC_12( VAR_10, "text not yet supported (upload samples)" );
    }

    VAR_11->i_first_frame_offset = FUNC_17( VAR_10->s );


    VAR_10->pf_demux = VAR_2;
    VAR_10->pf_control = VAR_1;

    return VAR_8;

error:
    FUNC_12( VAR_10, "cannot load Nuv file" );
    FUNC_0( VAR_9 );
    VAR_10->p_sys = ((void*)0);
    return VAR_6;
}
