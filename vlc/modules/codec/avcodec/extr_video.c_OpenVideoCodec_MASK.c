
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_20__ {double i_frame_rate_base; scalar_t__ i_frame_rate; int i_bits_per_pixel; int i_height; int i_width; int i_visible_height; int i_visible_width; } ;
struct TYPE_15__ {TYPE_7__ video; } ;
struct TYPE_16__ {TYPE_1__ fmt_in; TYPE_3__* p_sys; } ;
typedef TYPE_2__ decoder_t ;
struct TYPE_17__ {int profile; int level; int cc; int pix_fmt; TYPE_5__* p_codec; TYPE_4__* p_context; } ;
typedef TYPE_3__ decoder_sys_t ;
struct TYPE_19__ {scalar_t__ id; int name; } ;
struct TYPE_18__ {scalar_t__ extradata_size; int active_thread_type; int thread_count; int flags; int bits_per_coded_sample; int coded_height; int coded_width; int height; int width; } ;
typedef TYPE_4__ AVCodecContext ;
typedef TYPE_5__ AVCodec ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*,TYPE_4__*,TYPE_5__ const*) ;
 int FUNC_2 (TYPE_2__*,char*,int) ;
 int FUNC_3 (TYPE_2__*,char*,...) ;
 int FUNC_4 (TYPE_7__*,TYPE_4__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*,char*) ;

__attribute__((used)) static int FUNC_6( decoder_t *VAR_4 )
{
    decoder_sys_t *VAR_5 = VAR_4->p_sys;
    AVCodecContext *VAR_6 = VAR_5->p_context;
    const AVCodec *VAR_7 = VAR_5->p_codec;
    int VAR_8;

    if( VAR_6->extradata_size <= 0 )
    {
        if( VAR_7->id == VAR_2 ||
            VAR_7->id == VAR_1 )
        {
            FUNC_3( VAR_4, "waiting for extra data for codec %s",
                      VAR_7->name );
            return 1;
        }
    }

    VAR_6->width = VAR_4->fmt_in.video.i_visible_width;
    VAR_6->height = VAR_4->fmt_in.video.i_visible_height;

    VAR_6->coded_width = VAR_4->fmt_in.video.i_width;
    VAR_6->coded_height = VAR_4->fmt_in.video.i_height;

    VAR_6->bits_per_coded_sample = VAR_4->fmt_in.video.i_bits_per_pixel;
    VAR_5->pix_fmt = VAR_3;
    VAR_5->profile = -1;
    VAR_5->level = -1;
    FUNC_0( &VAR_5->cc );

    FUNC_4( &VAR_4->fmt_in.video, VAR_6 );
    if( VAR_4->fmt_in.video.i_frame_rate_base &&
        VAR_4->fmt_in.video.i_frame_rate &&
        (double) VAR_4->fmt_in.video.i_frame_rate /
                 VAR_4->fmt_in.video.i_frame_rate_base < 6 )
    {
        VAR_6->flags |= VAR_0;
    }

    if( FUNC_5(VAR_4, "low-delay") )
    {
        VAR_6->flags |= VAR_0;
        VAR_6->active_thread_type = 128;
    }

    VAR_8 = FUNC_1( VAR_4, VAR_6, VAR_7 );
    if( VAR_8 < 0 )
        return VAR_8;

    switch( VAR_6->active_thread_type )
    {
        case 129:
            FUNC_2( VAR_4, "using frame thread mode with %d threads",
                     VAR_6->thread_count );
            break;
        case 128:
            FUNC_2( VAR_4, "using slice thread mode with %d threads",
                     VAR_6->thread_count );
            break;
        case 0:
            if( VAR_6->thread_count > 1 )
                FUNC_3( VAR_4, "failed to enable threaded decoding" );
            break;
        default:
            FUNC_3( VAR_4, "using unknown thread mode with %d threads",
                      VAR_6->thread_count );
            break;
    }
    return 0;
}
