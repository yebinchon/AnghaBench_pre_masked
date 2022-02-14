
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_10__ ;


struct TYPE_22__ {int member_8; int matrix12; int matrix21; int matrix11; int matrix22; int member_7; int member_6; int member_5; int member_4; int member_3; int member_2; int member_1; int member_0; } ;
typedef TYPE_5__ xcb_render_transform_t ;
typedef int xcb_connection_t ;
struct TYPE_17__ {int i_visible_width; int i_visible_height; int orientation; } ;
struct TYPE_23__ {TYPE_7__* sys; TYPE_10__ source; } ;
typedef TYPE_6__ vout_display_t ;
struct TYPE_21__ {int crop; int scale; } ;
struct TYPE_25__ {int height; int width; } ;
struct TYPE_20__ {int argb; } ;
struct TYPE_19__ {int scale; int crop; } ;
struct TYPE_24__ {int src_x; int src_y; int * filter; TYPE_4__ picture; TYPE_8__ place; TYPE_3__ format; TYPE_2__ drawable; int root; int * conn; } ;
typedef TYPE_7__ vout_display_sys_t ;
typedef TYPE_8__ vout_display_place_t ;
struct TYPE_18__ {int width; int height; } ;
struct TYPE_26__ {TYPE_1__ display; } ;
typedef TYPE_9__ vout_display_cfg_t ;
typedef TYPE_10__ video_format_t ;
typedef int int32_t ;




 scalar_t__ FUNC_0 (int) ;






 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_8__*,TYPE_10__ const*,TYPE_9__ const*) ;
 int FUNC_4 (int *,int,int ,int ,int,int) ;
 int FUNC_5 (int *,int ,int ,int ,int ,int *) ;
 int FUNC_6 (int *,int ,int ,int *,int ,int *) ;
 int FUNC_7 (int *,int ,TYPE_5__) ;

__attribute__((used)) static void FUNC_8(vout_display_t *VAR_0, const vout_display_cfg_t *VAR_1)
{
    const video_format_t *VAR_2 = &VAR_0->source;
    vout_display_sys_t *VAR_3 = VAR_0->sys;
    xcb_connection_t *VAR_4 = VAR_3->conn;

    FUNC_4(VAR_4, 32, VAR_3->drawable.crop, VAR_3->root,
                      VAR_2->i_visible_width, VAR_2->i_visible_height);
    FUNC_4(VAR_4, 32, VAR_3->drawable.scale, VAR_3->root,
                      VAR_1->display.width, VAR_1->display.height);
    FUNC_5(VAR_4, VAR_3->picture.crop, VAR_3->drawable.crop,
                              VAR_3->format.argb, 0, ((void*)0));
    FUNC_5(VAR_4, VAR_3->picture.scale, VAR_3->drawable.scale,
                              VAR_3->format.argb, 0, ((void*)0));

    vout_display_place_t *VAR_5 = &VAR_3->place;
    FUNC_3(VAR_5, VAR_2, VAR_1);



    int32_t VAR_6 = VAR_5->height;
    int32_t VAR_7 = VAR_5->width;
    int32_t VAR_8 = 0;
    int32_t VAR_9 = 0;

    switch (VAR_2->orientation) {
        case 129:
        case 132:
            break;
        case 128:
        case 130:
            VAR_6 *= -1;
            VAR_8 -= VAR_5->width;
            break;
        case 135:
        case 133:
            VAR_7 *= -1;
            VAR_9 -= VAR_5->height;
            break;
        case 134:
        case 131:
            VAR_6 *= -1;
            VAR_7 *= -1;
            VAR_8 -= VAR_5->width;
            VAR_9 -= VAR_5->height;
            break;
    }

    VAR_3->src_x = VAR_8;
    VAR_3->src_y = VAR_9;

    xcb_render_transform_t VAR_10 = {
        0, 0, 0,
        0, 0, 0,

        0, 0, VAR_5->width * VAR_5->height,
    };

    if (FUNC_0(VAR_2->orientation)) {
        VAR_10.matrix12 = VAR_7 * VAR_2->i_visible_width;
        VAR_10.matrix21 = VAR_6 * VAR_2->i_visible_height;
    } else {
        VAR_10.matrix11 = VAR_6 * VAR_2->i_visible_width;
        VAR_10.matrix22 = VAR_7 * VAR_2->i_visible_height;
    }

    FUNC_7(VAR_4, VAR_3->picture.crop, VAR_10);

    if (FUNC_1(VAR_3->filter != ((void*)0)))
        FUNC_6(VAR_4, VAR_3->picture.crop,
                                      FUNC_2(VAR_3->filter), VAR_3->filter,
                                      0, ((void*)0));
}
