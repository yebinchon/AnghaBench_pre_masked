
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int orientation; int i_x_offset; int i_visible_width; int i_y_offset; int i_visible_height; } ;
struct TYPE_10__ {TYPE_8__ source; int cfg; } ;
typedef TYPE_1__ vout_display_t ;
struct TYPE_11__ {int const width; int const height; int x; int y; } ;
typedef TYPE_2__ vout_display_place_t ;
struct TYPE_12__ {int i_x; int i_y; int b_double_click; int i_pressed; } ;
typedef TYPE_3__ vlc_mouse_t ;
typedef int int64_t ;
 int FUNC_0 (TYPE_3__*,int ,int) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_2__*,TYPE_8__*,int ) ;

void FUNC_3(vout_display_t *VAR_0, vlc_mouse_t *VAR_1,
                                      const vlc_mouse_t *VAR_2)
{
    vout_display_place_t VAR_3;


    FUNC_2(&VAR_3, &VAR_0->source, VAR_0->cfg);

    if (VAR_3.width <= 0 || VAR_3.height <= 0) {
        FUNC_0(VAR_1, 0, sizeof (*VAR_1));
        return;
    }

    const int VAR_4 = VAR_2->i_x, VAR_5 = VAR_2->i_y;
    int VAR_6, VAR_7;

    switch (VAR_0->source.orientation) {
        case 129:
            VAR_6 = VAR_4;
            VAR_7 = VAR_5;
            break;
        case 128:
            VAR_6 = VAR_3.width - VAR_4;
            VAR_7 = VAR_5;
            break;
        case 135:
            VAR_6 = VAR_4;
            VAR_7 = VAR_3.height - VAR_5;
            break;
        case 134:
            VAR_6 = VAR_3.width - VAR_4;
            VAR_7 = VAR_3.height - VAR_5;
            break;
        case 132:
            VAR_6 = VAR_5;
            VAR_7 = VAR_4;
            break;
        case 133:
            VAR_6 = VAR_5;
            VAR_7 = VAR_3.width - VAR_4;
            break;
        case 130:
            VAR_6 = VAR_3.height - VAR_5;
            VAR_7 = VAR_4;
            break;
        case 131:
            VAR_6 = VAR_3.height - VAR_5;
            VAR_7 = VAR_3.width - VAR_4;
            break;
        default:
            FUNC_1();
    }

    VAR_1->i_x = VAR_0->source.i_x_offset
        + (int64_t)(VAR_6 - VAR_3.x) * VAR_0->source.i_visible_width / VAR_3.width;
    VAR_1->i_y = VAR_0->source.i_y_offset
        + (int64_t)(VAR_7 - VAR_3.y) * VAR_0->source.i_visible_height / VAR_3.height;
    VAR_1->i_pressed = VAR_2->i_pressed;
    VAR_1->b_double_click = VAR_2->b_double_click;
}
