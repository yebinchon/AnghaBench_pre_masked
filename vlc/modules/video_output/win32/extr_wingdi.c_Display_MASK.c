
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ i_visible_width; scalar_t__ i_visible_height; scalar_t__ i_x_offset; scalar_t__ i_y_offset; } ;
struct TYPE_18__ {TYPE_5__ source; TYPE_8__* sys; } ;
typedef TYPE_7__ vout_display_t ;
struct TYPE_17__ {int hvideownd; } ;
struct TYPE_14__ {scalar_t__ width; scalar_t__ height; int y; int x; } ;
struct TYPE_12__ {int height; int width; } ;
struct TYPE_13__ {TYPE_1__ display; } ;
struct TYPE_15__ {int place_changed; TYPE_3__ place; TYPE_2__ vdcfg; } ;
struct TYPE_19__ {TYPE_6__ sys; int off_dc; TYPE_4__ area; int off_bitmap; } ;
typedef TYPE_8__ vout_display_sys_t ;
typedef int picture_t ;
struct TYPE_20__ {int bottom; int top; int right; int left; } ;
typedef TYPE_9__ RECT ;
typedef int HDC ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,scalar_t__,scalar_t__,int ,scalar_t__,scalar_t__,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,TYPE_9__*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int VAR_2 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ,int ,scalar_t__,scalar_t__,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(vout_display_t *VAR_3, picture_t *VAR_4)
{
    vout_display_sys_t *VAR_5 = VAR_3->sys;
    FUNC_8(VAR_4);

    HDC VAR_6 = FUNC_2(VAR_5->sys.hvideownd);

    if (VAR_5->area.place_changed)
    {

        RECT VAR_7 = {
            .left = 0,
            .right = VAR_5->area.vdcfg.display.width,
            .top = 0,
            .bottom = VAR_5->area.vdcfg.display.height,
        };
        FUNC_1(VAR_6, &VAR_7, FUNC_3(VAR_0));
        VAR_5->area.place_changed = 0;
    }

    FUNC_5(VAR_5->off_dc, VAR_5->off_bitmap);

    if (VAR_5->area.place.width != VAR_3->source.i_visible_width ||
        VAR_5->area.place.height != VAR_3->source.i_visible_height) {
        FUNC_6(VAR_6, VAR_1);

        FUNC_7(VAR_6, VAR_5->area.place.x, VAR_5->area.place.y,
                   VAR_5->area.place.width, VAR_5->area.place.height,
                   VAR_5->off_dc,
                   VAR_3->source.i_x_offset, VAR_3->source.i_y_offset,
                   VAR_3->source.i_x_offset + VAR_3->source.i_visible_width,
                   VAR_3->source.i_y_offset + VAR_3->source.i_visible_height,
                   VAR_2);
    } else {
        FUNC_0(VAR_6, VAR_5->area.place.x, VAR_5->area.place.y,
               VAR_5->area.place.width, VAR_5->area.place.height,
               VAR_5->off_dc,
               VAR_3->source.i_x_offset, VAR_3->source.i_y_offset,
               VAR_2);
    }

    FUNC_4(VAR_5->sys.hvideownd, VAR_6);
}
