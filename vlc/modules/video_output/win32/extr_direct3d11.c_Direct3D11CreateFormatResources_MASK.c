
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_44__ TYPE_8__ ;
typedef struct TYPE_43__ TYPE_7__ ;
typedef struct TYPE_42__ TYPE_6__ ;
typedef struct TYPE_41__ TYPE_5__ ;
typedef struct TYPE_40__ TYPE_4__ ;
typedef struct TYPE_39__ TYPE_3__ ;
typedef struct TYPE_38__ TYPE_2__ ;
typedef struct TYPE_37__ TYPE_23__ ;
typedef struct TYPE_36__ TYPE_1__ ;
typedef struct TYPE_35__ TYPE_16__ ;
typedef struct TYPE_34__ TYPE_15__ ;
typedef struct TYPE_33__ TYPE_11__ ;


struct TYPE_36__ {int projection_mode; int orientation; scalar_t__ i_visible_height; scalar_t__ i_y_offset; scalar_t__ i_visible_width; scalar_t__ i_x_offset; } ;
struct TYPE_41__ {TYPE_1__ source; TYPE_6__* sys; } ;
typedef TYPE_5__ vout_display_t ;
struct TYPE_40__ {int ** texture; int renderSrc; } ;
struct TYPE_33__ {TYPE_23__* textureFormat; } ;
struct TYPE_34__ {scalar_t__ feature_level; int d3ddevice; } ;
struct TYPE_35__ {int i_chroma; } ;
struct TYPE_38__ {int viewpoint; } ;
struct TYPE_39__ {TYPE_16__ texture_source; TYPE_2__ vdcfg; } ;
struct TYPE_42__ {int legacy_shader; TYPE_4__ stagingSys; TYPE_11__ picQuad; TYPE_15__ d3d_dev; int stagingPlanes; TYPE_3__ area; int display; int hd3d; } ;
typedef TYPE_6__ vout_display_sys_t ;
struct TYPE_43__ {scalar_t__ color_range; int i_chroma; int primaries; int transfer; } ;
typedef TYPE_7__ video_format_t ;
struct TYPE_44__ {scalar_t__ bottom; scalar_t__ top; scalar_t__ right; scalar_t__ left; } ;
struct TYPE_37__ {int fourcc; } ;
typedef TYPE_8__ RECT ;
typedef int ID3D11Texture2D ;
typedef int ID3D10Multithread ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (TYPE_5__*,TYPE_15__*,TYPE_23__*,TYPE_16__*,int,int **,int ) ;
 scalar_t__ FUNC_1 (TYPE_5__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (TYPE_5__*) ;
 scalar_t__ FUNC_3 (TYPE_5__*,TYPE_15__*,int ,TYPE_11__*) ;
 scalar_t__ FUNC_4 (TYPE_5__*,int ,TYPE_23__*,int **,int ,int ) ;
 int FUNC_5 (TYPE_5__*,int *,int,TYPE_15__*,int *,int ,int ,int,TYPE_11__*) ;
 int VAR_1 ;
 scalar_t__ FUNC_6 (TYPE_5__*,TYPE_15__*,TYPE_16__*,TYPE_11__*,int *,TYPE_8__*,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int ,int *,void**) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (TYPE_5__*,TYPE_11__*,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (TYPE_5__*,char*,...) ;

__attribute__((used)) static int FUNC_15(vout_display_t *VAR_9, const video_format_t *VAR_10)
{
    vout_display_sys_t *VAR_11 = VAR_9->sys;
    HRESULT VAR_12;

    VAR_11->legacy_shader = VAR_11->d3d_dev.feature_level < VAR_2 || !FUNC_2(VAR_9) ||
            FUNC_1(VAR_9);

    VAR_12 = FUNC_5(VAR_9, &VAR_11->hd3d, VAR_11->legacy_shader, &VAR_11->d3d_dev,
                                  &VAR_11->display, VAR_10->transfer, VAR_10->primaries,
                                  VAR_10->color_range == VAR_0,
                                  &VAR_11->picQuad);
    if (FUNC_7(VAR_12))
    {
        FUNC_14(VAR_9, "Failed to create the pixel shader. (hr=0x%lX)", VAR_12);
        return VAR_7;
    }

    if (FUNC_3(VAR_9, &VAR_11->d3d_dev, VAR_9->source.projection_mode, &VAR_11->picQuad) != VAR_8)
    {
        FUNC_14(VAR_9, "Could not allocate quad buffers.");
       return VAR_7;
    }

    RECT VAR_13 = {
        .left = VAR_9->source.i_x_offset,
        .right = VAR_9->source.i_x_offset + VAR_9->source.i_visible_width,
        .top = VAR_9->source.i_y_offset,
        .bottom = VAR_9->source.i_y_offset + VAR_9->source.i_visible_height,
    };
    if (FUNC_6( VAR_9, &VAR_11->d3d_dev, &VAR_11->area.texture_source, &VAR_11->picQuad, &VAR_11->display,
                         &VAR_13,
                         VAR_9->source.orientation ) != VAR_8) {
        FUNC_14(VAR_9, "Could not Create the main quad picture.");
        return VAR_7;
    }

    if ( VAR_9->source.projection_mode == VAR_5 ||
         VAR_9->source.projection_mode == VAR_4 )
        FUNC_12( VAR_9, &VAR_11->picQuad, &VAR_11->area.vdcfg.viewpoint );

    if (FUNC_13(VAR_10->i_chroma)) {
        ID3D10Multithread *VAR_14;
        VAR_12 = FUNC_10( VAR_11->d3d_dev.d3ddevice, &VAR_3, (void **)&VAR_14);
        if (FUNC_11(VAR_12)) {
            FUNC_9(VAR_14, VAR_6);
            FUNC_8(VAR_14);
        }
    }
    return VAR_8;
}
