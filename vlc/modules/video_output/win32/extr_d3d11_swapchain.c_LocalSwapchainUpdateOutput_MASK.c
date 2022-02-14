
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct d3d11_local_swapchain {TYPE_1__* colorspace; TYPE_2__* pixelFormat; } ;
typedef scalar_t__ libvlc_video_transfer_func_t ;
struct TYPE_7__ {scalar_t__ transfer; scalar_t__ primaries; scalar_t__ colorspace; int full_range; int surface_format; } ;
typedef TYPE_3__ libvlc_video_output_cfg_t ;
typedef int libvlc_video_direct3d_cfg_t ;
typedef scalar_t__ libvlc_video_color_space_t ;
typedef scalar_t__ libvlc_video_color_primaries_t ;
struct TYPE_6__ {int formatTexture; } ;
struct TYPE_5__ {scalar_t__ transfer; scalar_t__ primaries; scalar_t__ color; int b_full_range; } ;


 int FUNC_0 (struct d3d11_local_swapchain*,int const*) ;

bool FUNC_1( void *VAR_0, const libvlc_video_direct3d_cfg_t *VAR_1, libvlc_video_output_cfg_t *VAR_2 )
{
    struct d3d11_local_swapchain *VAR_3 = VAR_0;
    if ( !FUNC_0( VAR_3, VAR_1 ) )
        return 0;
    VAR_2->surface_format = VAR_3->pixelFormat->formatTexture;
    VAR_2->full_range = VAR_3->colorspace->b_full_range;
    VAR_2->colorspace = (libvlc_video_color_space_t) VAR_3->colorspace->color;
    VAR_2->primaries = (libvlc_video_color_primaries_t) VAR_3->colorspace->primaries;
    VAR_2->transfer = (libvlc_video_transfer_func_t) VAR_3->colorspace->transfer;
    return 1;
}
