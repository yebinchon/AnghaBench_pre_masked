
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {TYPE_2__* sys; } ;
typedef TYPE_1__ vout_display_t ;
struct TYPE_14__ {scalar_t__ color; scalar_t__ transfer; scalar_t__ primaries; scalar_t__ b_full_range; scalar_t__ luminance_peak; TYPE_5__ const* pixelFormat; int member_0; } ;
struct TYPE_12__ {TYPE_4__ display; } ;
typedef TYPE_2__ vout_display_sys_t ;
typedef scalar_t__ video_transfer_func_t ;
typedef int video_format_t ;
typedef scalar_t__ video_color_space_t ;
typedef scalar_t__ video_color_primaries_t ;
struct TYPE_13__ {int transfer; scalar_t__ full_range; scalar_t__ primaries; scalar_t__ colorspace; scalar_t__ surface_format; } ;
typedef TYPE_3__ libvlc_video_output_cfg_t ;
typedef TYPE_4__ display_info_t ;
struct TYPE_15__ {scalar_t__ formatTexture; int fourcc; int * name; } ;
typedef TYPE_5__ d3d_format_t ;
typedef scalar_t__ DXGI_FORMAT ;


 void* VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int const*) ;
 TYPE_5__* FUNC_1 () ;
 scalar_t__ VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(vout_display_t *VAR_4, libvlc_video_output_cfg_t *VAR_5,
                               const video_format_t *VAR_6)
{
    vout_display_sys_t *VAR_7 = VAR_4->sys;
    display_info_t VAR_8 = { 0 };

    for (const d3d_format_t *VAR_9 = FUNC_1();
         VAR_9->name != ((void*)0); ++VAR_9)
    {
        if (VAR_9->formatTexture == (DXGI_FORMAT)VAR_5->surface_format &&
            !FUNC_2(VAR_9->fourcc))
        {
            VAR_8.pixelFormat = VAR_9;
            break;
        }
    }
    if (FUNC_4(VAR_8.pixelFormat == ((void*)0)))
    {
        FUNC_3(VAR_4, "Could not find the output format.");
        return VAR_2;
    }

    VAR_8.color = (video_color_space_t) VAR_5->colorspace;
    VAR_8.transfer = (video_transfer_func_t) VAR_5->transfer;
    VAR_8.primaries = (video_color_primaries_t) VAR_5->primaries;
    VAR_8.b_full_range = VAR_5->full_range;


    switch (VAR_5->transfer)
    {
    case 130:
    case 128:
        VAR_8.luminance_peak = VAR_0;
        break;
    case 129:
        VAR_8.luminance_peak = VAR_1;
        break;
    default:
        VAR_8.luminance_peak = VAR_0;
        break;
    }

    if ( VAR_7->display.pixelFormat == ((void*)0) ||
         ( VAR_7->display.pixelFormat != VAR_8.pixelFormat ||
           VAR_7->display.luminance_peak != VAR_8.luminance_peak ||
           VAR_7->display.color != VAR_8.color ||
           VAR_7->display.transfer != VAR_8.transfer ||
           VAR_7->display.primaries != VAR_8.primaries ||
           VAR_7->display.b_full_range != VAR_8.b_full_range ))
    {
        VAR_7->display = VAR_8;

        if (FUNC_0(VAR_4, VAR_6)) {
            FUNC_3(VAR_4, "Failed to allocate format resources");
            return VAR_2;
        }
    }

    return VAR_3;
}
