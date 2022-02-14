
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {int orientation; scalar_t__ i_visible_height; scalar_t__ i_y_offset; scalar_t__ i_visible_width; scalar_t__ i_x_offset; } ;
struct TYPE_16__ {TYPE_3__ source; int fmt; TYPE_5__* sys; } ;
typedef TYPE_4__ vout_display_t ;
struct TYPE_13__ {int height; int width; } ;
struct TYPE_14__ {TYPE_1__ place; } ;
struct TYPE_17__ {int d3d_dev; int picQuad; TYPE_2__ area; } ;
typedef TYPE_5__ vout_display_sys_t ;
struct TYPE_18__ {scalar_t__ bottom; scalar_t__ top; scalar_t__ right; scalar_t__ left; } ;
typedef TYPE_6__ RECT ;


 int FUNC_0 (TYPE_4__*,int *,int *,TYPE_6__*,int ) ;
 int FUNC_1 (TYPE_4__*,int *) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_4__*,char*,int ,int ) ;

__attribute__((used)) static void FUNC_6(vout_display_t *VAR_0)
{
    vout_display_sys_t *VAR_1 = VAR_0->sys;
    FUNC_5(VAR_0, "Detected size change %dx%d", VAR_1->area.place.width,
            VAR_1->area.place.height);

    FUNC_1(VAR_0, &VAR_0->fmt);

    FUNC_3( &VAR_1->d3d_dev );

    FUNC_2(VAR_0);

    RECT VAR_2 = {
        .left = VAR_0->source.i_x_offset,
        .right = VAR_0->source.i_x_offset + VAR_0->source.i_visible_width,
        .top = VAR_0->source.i_y_offset,
        .bottom = VAR_0->source.i_y_offset + VAR_0->source.i_visible_height,
    };
    FUNC_0(VAR_0, &VAR_1->d3d_dev, &VAR_1->picQuad, &VAR_2,
                             VAR_0->source.orientation);

    FUNC_4( &VAR_1->d3d_dev );
}
