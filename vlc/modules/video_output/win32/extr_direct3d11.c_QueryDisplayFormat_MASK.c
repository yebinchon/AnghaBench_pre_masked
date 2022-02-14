
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_19__ {TYPE_5__* sys; } ;
typedef TYPE_4__ vout_display_t ;
struct TYPE_16__ {int height; int width; } ;
struct TYPE_17__ {TYPE_1__ display; } ;
struct TYPE_18__ {TYPE_2__ vdcfg; } ;
struct TYPE_20__ {int outside_opaque; int (* updateOutputCb ) (int ,TYPE_8__*,int *) ;TYPE_3__ area; } ;
typedef TYPE_5__ vout_display_sys_t ;
struct TYPE_21__ {int pixel_bits; int plane_count; int pixel_size; } ;
typedef TYPE_6__ vlc_chroma_description_t ;
struct TYPE_22__ {int i_chroma; scalar_t__ color_range; scalar_t__ transfer; scalar_t__ space; scalar_t__ primaries; } ;
typedef TYPE_7__ video_format_t ;
typedef scalar_t__ libvlc_video_transfer_func_t ;
typedef int libvlc_video_output_cfg_t ;
struct TYPE_23__ {int bitdepth; int full_range; int height; int width; scalar_t__ transfer; scalar_t__ colorspace; scalar_t__ primaries; } ;
typedef TYPE_8__ libvlc_video_direct3d_cfg_t ;
typedef scalar_t__ libvlc_video_color_space_t ;
typedef scalar_t__ libvlc_video_color_primaries_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_4__*,int *,TYPE_7__ const*) ;




 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_4__*,char*,int ,int ,int) ;
 int FUNC_3 (int ,TYPE_8__*,int *) ;
 TYPE_6__* FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(vout_display_t *VAR_2, const video_format_t *VAR_3)
{
    vout_display_sys_t *VAR_4 = VAR_2->sys;
    libvlc_video_direct3d_cfg_t VAR_5;

    VAR_5.width = VAR_4->area.vdcfg.display.width;
    VAR_5.height = VAR_4->area.vdcfg.display.height;

    switch (VAR_3->i_chroma)
    {
    case 131:
        VAR_5.bitdepth = 8;
        break;
    case 128:
    case 129:
        VAR_5.bitdepth = 8;
        break;
    case 130:
        VAR_5.bitdepth = 10;
        break;
    default:
        {
            const vlc_chroma_description_t *VAR_6 = FUNC_4(VAR_3->i_chroma);
            if (VAR_6 == ((void*)0))
            {
                VAR_5.bitdepth = 8;
            }
            else
            {
                VAR_5.bitdepth = VAR_6->pixel_bits == 0 ? 8 : VAR_6->pixel_bits /
                                                               (VAR_6->plane_count==1 ? VAR_6->pixel_size : 1);
            }
        }
        break;
    }
    VAR_5.full_range = VAR_3->color_range == VAR_0 ||

                     FUNC_1(VAR_3->i_chroma) ||
                     FUNC_5(VAR_3->i_chroma);
    VAR_5.primaries = (libvlc_video_color_primaries_t) VAR_3->primaries;
    VAR_5.colorspace = (libvlc_video_color_space_t) VAR_3->space;
    VAR_5.transfer = (libvlc_video_transfer_func_t) VAR_3->transfer;

    libvlc_video_output_cfg_t VAR_7;
    if (!VAR_4->updateOutputCb( VAR_4->outside_opaque, &VAR_5, &VAR_7 ))
    {
        FUNC_2(VAR_2, "Failed to set format %dx%d %d bits on output", VAR_5.width, VAR_5.height, VAR_5.bitdepth);
        return VAR_1;
    }

    return FUNC_0(VAR_2, &VAR_7, VAR_3);
}
