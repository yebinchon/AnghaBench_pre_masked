
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {TYPE_2__* p_demux; } ;
typedef TYPE_3__ vlcrdp_context_t ;
typedef int vlc_fourcc_t ;
struct TYPE_14__ {int bytesPerPixel; int width; int height; } ;
typedef TYPE_4__ rdpGdi ;
struct TYPE_15__ {TYPE_4__* gdi; } ;
typedef TYPE_5__ rdpContext ;
struct TYPE_11__ {int i_visible_width; int i_width; int i_visible_height; int i_height; int i_frame_rate_base; int i_frame_rate; int i_chroma; } ;
struct TYPE_16__ {TYPE_1__ video; } ;
typedef TYPE_6__ es_format_t ;
struct TYPE_17__ {int f_fps; int i_framebuffersize; int * es; scalar_t__ p_block; } ;
typedef TYPE_7__ demux_sys_t ;
struct TYPE_12__ {int out; TYPE_7__* p_sys; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__,int ,int) ;
 int FUNC_2 (TYPE_6__*,int ,int ) ;
 int * FUNC_3 (int ,TYPE_6__*) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5( rdpContext *VAR_4 )
{
    vlcrdp_context_t * VAR_5 = (vlcrdp_context_t *) VAR_4;
    demux_sys_t *VAR_6 = VAR_5->p_demux->p_sys;
    rdpGdi *VAR_7 = VAR_4->gdi;

    if ( VAR_6->es )
    {
        FUNC_4( VAR_5->p_demux->out, VAR_6->es );
        VAR_6->es = ((void*)0);
    }


    vlc_fourcc_t VAR_8;
    switch( VAR_7->bytesPerPixel )
    {
        default:
        case 16:
            VAR_8 = VAR_1;
            break;
        case 24:
            VAR_8 = VAR_2;
            break;
        case 32:
            VAR_8 = VAR_3;
            break;
    }
    es_format_t VAR_9;
    FUNC_2( &VAR_9, VAR_0, VAR_8 );

    VAR_9.video.i_chroma = VAR_8;
    VAR_9.video.i_visible_width =
    VAR_9.video.i_width = VAR_7->width;
    VAR_9.video.i_visible_height =
    VAR_9.video.i_height = VAR_7->height;
    VAR_9.video.i_frame_rate_base = 1000;
    VAR_9.video.i_frame_rate = 1000 * VAR_6->f_fps;
    VAR_6->i_framebuffersize = VAR_7->width * VAR_7->height * VAR_7->bytesPerPixel;

    if ( VAR_6->p_block )
        VAR_6->p_block = FUNC_1( VAR_6->p_block, 0, VAR_6->i_framebuffersize );
    else
        VAR_6->p_block = FUNC_0( VAR_6->i_framebuffersize );

    VAR_6->es = FUNC_3( VAR_5->p_demux->out, &VAR_9 );
}
