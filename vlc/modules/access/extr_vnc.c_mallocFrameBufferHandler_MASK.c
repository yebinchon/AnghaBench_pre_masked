
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_11__ ;


typedef int vlc_fourcc_t ;
struct TYPE_16__ {int bitsPerPixel; int redShift; int greenShift; int blueShift; int redMax; int greenMax; int blueMax; } ;
struct TYPE_18__ {int width; int height; TYPE_1__ format; } ;
typedef TYPE_3__ rfbClient ;
typedef int rfbBool ;
struct TYPE_17__ {int i_chroma; int i_visible_width; int i_width; int i_visible_height; int i_height; int i_frame_rate_base; int i_frame_rate; int i_bits_per_pixel; int i_rmask; int i_gmask; int i_bmask; int i_sar_num; int i_sar_den; } ;
struct TYPE_19__ {TYPE_2__ video; } ;
typedef TYPE_4__ es_format_t ;
struct TYPE_20__ {int out; TYPE_6__* p_sys; } ;
typedef TYPE_5__ demux_t ;
struct TYPE_21__ {int i_framebuffersize; int f_fps; int * es; TYPE_11__* p_block; } ;
typedef TYPE_6__ demux_sys_t ;
struct TYPE_15__ {int i_buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 int VAR_2 ;
 int VAR_3 ;



 int VAR_4 ;
 TYPE_11__* FUNC_1 (int) ;
 TYPE_11__* FUNC_2 (TYPE_11__*,int ,int) ;
 int FUNC_3 (TYPE_4__*,int ,int) ;
 int * FUNC_4 (int ,TYPE_4__*) ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (TYPE_3__*,int ) ;

__attribute__((used)) static rfbBool FUNC_7( rfbClient* VAR_5 )
{
    vlc_fourcc_t VAR_6;
    demux_t *VAR_7 = (demux_t *) FUNC_6( VAR_5, VAR_0 );
    demux_sys_t *VAR_8 = VAR_7->p_sys;

    if ( VAR_8->es )
    {
        FUNC_5( VAR_7->out, VAR_8->es );
        VAR_8->es = ((void*)0);
    }

    int VAR_9 = VAR_5->width;
    int VAR_10 = VAR_5->height;
    int VAR_11 = VAR_5->format.bitsPerPixel;

    switch( VAR_11 )
    {
        case 8:
            VAR_6 = VAR_4;
            break;
        default:
        case 16:
            VAR_6 = 130;
            break;
        case 24:
            VAR_6 = 129;
            break;
        case 32:
            VAR_6 = 128;
            break;
    }

    switch( VAR_6 )
    {
        case 130:
            VAR_5->format.redShift = 11;
            VAR_5->format.greenShift = 5;
            VAR_5->format.blueShift = 0;
            VAR_5->format.redMax = 0x1f;
            VAR_5->format.greenMax = 0x3f;
            VAR_5->format.blueMax = 0x1f;
            break;
        case 129:
        case 128:
            VAR_5->format.redShift = 16;
            VAR_5->format.greenShift = 8;
            VAR_5->format.blueShift = 0;
            VAR_5->format.redMax = 0xff;
            VAR_5->format.greenMax = 0xff;
            VAR_5->format.blueMax = 0xff;
            break;
    }


    VAR_8->i_framebuffersize = VAR_9 * VAR_10 * VAR_11 / 8;


    if ( VAR_8->p_block )
        VAR_8->p_block = FUNC_2( VAR_8->p_block, 0, VAR_8->i_framebuffersize );
    else
        VAR_8->p_block = FUNC_1( VAR_8->i_framebuffersize );

    if ( VAR_8->p_block )
        VAR_8->p_block->i_buffer = VAR_8->i_framebuffersize;
    else
        return VAR_1;


    FUNC_0( VAR_5 );


    es_format_t VAR_12;
    FUNC_3( &VAR_12, VAR_3, VAR_6 );


    VAR_12.video.i_chroma = VAR_6;
    VAR_12.video.i_visible_width =
            VAR_12.video.i_width = VAR_9;

    VAR_12.video.i_visible_height =
            VAR_12.video.i_height = VAR_10;

    VAR_12.video.i_frame_rate_base = 1000;
    VAR_12.video.i_frame_rate = 1000 * VAR_8->f_fps;

    VAR_12.video.i_bits_per_pixel = VAR_11;
    VAR_12.video.i_rmask = VAR_5->format.redMax << VAR_5->format.redShift;
    VAR_12.video.i_gmask = VAR_5->format.greenMax << VAR_5->format.greenShift;
    VAR_12.video.i_bmask = VAR_5->format.blueMax << VAR_5->format.blueShift;

    VAR_12.video.i_sar_num = VAR_12.video.i_sar_den = 1;


    VAR_8->es = FUNC_4( VAR_7->out, &VAR_12 );

    return VAR_2;
}
