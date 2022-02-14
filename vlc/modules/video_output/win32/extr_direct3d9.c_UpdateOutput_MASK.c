
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_19__ {TYPE_6__* sys; } ;
typedef TYPE_5__ vout_display_t ;
struct TYPE_18__ {int dev; } ;
struct TYPE_15__ {int height; int width; } ;
struct TYPE_16__ {TYPE_1__ display; } ;
struct TYPE_17__ {TYPE_2__ vdcfg; } ;
struct TYPE_20__ {int outside_opaque; int (* updateOutputCb ) (int ,TYPE_9__*,int *) ;TYPE_4__ d3d_dev; TYPE_3__ area; } ;
typedef TYPE_6__ vout_display_sys_t ;
struct TYPE_21__ {int pixel_bits; int plane_count; int pixel_size; } ;
typedef TYPE_7__ vlc_chroma_description_t ;
struct TYPE_22__ {int i_chroma; scalar_t__ color_range; int transfer; int space; int primaries; } ;
typedef TYPE_8__ video_format_t ;
typedef int libvlc_video_output_cfg_t ;
struct TYPE_23__ {int bitdepth; int full_range; int device; int transfer; int colorspace; int primaries; int height; int width; } ;
typedef TYPE_9__ libvlc_video_direct3d_cfg_t ;


 scalar_t__ VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_5__*,char*) ;
 int FUNC_1 (int ,TYPE_9__*,int *) ;
 TYPE_7__* FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(vout_display_t *VAR_3, const video_format_t *VAR_4)
{
    vout_display_sys_t *VAR_5 = VAR_3->sys;
    libvlc_video_direct3d_cfg_t VAR_6;
    VAR_6.width = VAR_5->area.vdcfg.display.width;
    VAR_6.height = VAR_5->area.vdcfg.display.height;

    switch (VAR_4->i_chroma)
    {
    case 129:
        VAR_6.bitdepth = 8;
        break;
    case 128:
        VAR_6.bitdepth = 10;
        break;
    default:
        {
            const vlc_chroma_description_t *VAR_7 = FUNC_2(VAR_4->i_chroma);
            if (VAR_7 == ((void*)0))
            {
                VAR_6.bitdepth = 8;
            }
            else
            {
                VAR_6.bitdepth = VAR_7->pixel_bits == 0 ? 8 : VAR_7->pixel_bits /
                                                               (VAR_7->plane_count==1 ? VAR_7->pixel_size : 1);
            }
        }
        break;
    }

    VAR_6.full_range = VAR_4->color_range == VAR_0;
    VAR_6.primaries = VAR_4->primaries;
    VAR_6.colorspace = VAR_4->space;
    VAR_6.transfer = VAR_4->transfer;

    VAR_6.device = VAR_5->d3d_dev.dev;

    libvlc_video_output_cfg_t VAR_8;
    if (!VAR_5->updateOutputCb( VAR_5->outside_opaque, &VAR_6, &VAR_8 ))
    {
        FUNC_0(VAR_3, "Failed to set the external render size");
        return VAR_1;
    }

    return VAR_2;
}
