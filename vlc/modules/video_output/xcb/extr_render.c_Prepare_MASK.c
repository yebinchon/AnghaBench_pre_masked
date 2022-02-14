
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_40__ TYPE_9__ ;
typedef struct TYPE_39__ TYPE_8__ ;
typedef struct TYPE_38__ TYPE_7__ ;
typedef struct TYPE_37__ TYPE_6__ ;
typedef struct TYPE_36__ TYPE_5__ ;
typedef struct TYPE_35__ TYPE_4__ ;
typedef struct TYPE_34__ TYPE_3__ ;
typedef struct TYPE_33__ TYPE_2__ ;
typedef struct TYPE_32__ TYPE_1__ ;
typedef struct TYPE_31__ TYPE_14__ ;
typedef struct TYPE_30__ TYPE_13__ ;
typedef struct TYPE_29__ TYPE_12__ ;
typedef struct TYPE_28__ TYPE_11__ ;
typedef struct TYPE_27__ TYPE_10__ ;


struct TYPE_38__ {int member_3; int member_2; int member_1; int member_0; } ;
typedef TYPE_7__ xcb_render_color_t ;
struct TYPE_39__ {int member_3; int member_2; int member_1; int member_0; } ;
typedef TYPE_8__ xcb_rectangle_t ;
typedef int xcb_connection_t ;
struct TYPE_28__ {int i_visible_height; int i_visible_width; int i_y_offset; int i_x_offset; } ;
struct TYPE_40__ {TYPE_4__* cfg; TYPE_10__* sys; TYPE_11__ source; } ;
typedef TYPE_9__ vout_display_t ;
struct TYPE_37__ {int height; int width; int y; int x; } ;
struct TYPE_36__ {int scale; int crop; int source; } ;
struct TYPE_32__ {int source; } ;
struct TYPE_27__ {TYPE_6__ place; int src_y; int src_x; TYPE_5__ picture; int gc; TYPE_1__ drawable; int segment; int * conn; } ;
typedef TYPE_10__ vout_display_sys_t ;
typedef int vlc_tick_t ;
typedef TYPE_11__ video_format_t ;
struct TYPE_29__ {TYPE_13__* p_region; } ;
typedef TYPE_12__ subpicture_t ;
struct TYPE_30__ {struct TYPE_30__* p_next; } ;
typedef TYPE_13__ subpicture_region_t ;
struct TYPE_31__ {TYPE_2__* p; } ;
typedef TYPE_14__ picture_t ;
struct TYPE_34__ {int height; int width; } ;
struct TYPE_35__ {TYPE_3__ display; } ;
struct TYPE_33__ {int i_pitch; int i_pixel_pitch; int i_lines; int p_pixels; } ;


 int FUNC_0 (TYPE_8__*) ;
 size_t FUNC_1 (TYPE_9__*,TYPE_14__*) ;
 int FUNC_2 (TYPE_9__*) ;
 int FUNC_3 (TYPE_9__*,TYPE_12__*,TYPE_13__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int ,int ,int,int,int ,int ,int ,int,int,int ) ;
 int FUNC_6 (int *,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_7 (int *,int ,int ,TYPE_7__ const,int ,TYPE_8__*) ;
 int FUNC_8 (int *,int ,int ,int,int,int ,int ,int,int,int ,int ,int,int ,int ,int ,size_t) ;

__attribute__((used)) static void FUNC_9(vout_display_t *VAR_3, picture_t *VAR_4, subpicture_t *VAR_5,
                    vlc_tick_t VAR_6)
{
    const video_format_t *VAR_7 = &VAR_3->source;
    vout_display_sys_t *VAR_8 = VAR_3->sys;
    xcb_connection_t *VAR_9 = VAR_8->conn;

    size_t VAR_10 = FUNC_1(VAR_3, VAR_4);
    if (VAR_10 != (size_t)-1) {
        FUNC_8(VAR_9, VAR_8->drawable.source, VAR_8->gc,
                          VAR_4->p->i_pitch / VAR_4->p->i_pixel_pitch,
                          VAR_4->p->i_lines, 0, 0,
                          VAR_4->p->i_pitch / VAR_4->p->i_pixel_pitch,
                          VAR_4->p->i_lines, 0, 0, 32, VAR_0,
                          0, VAR_8->segment, VAR_10);
    } else {
        FUNC_5(VAR_9, VAR_0, VAR_8->drawable.source,
                      VAR_8->gc, VAR_4->p->i_pitch / VAR_4->p->i_pixel_pitch,
                      VAR_4->p->i_lines, 0, 0, 0, 32,
                      VAR_4->p->i_pitch * VAR_4->p->i_lines, VAR_4->p->p_pixels);
    }


    FUNC_6(VAR_9, VAR_2,
                         VAR_8->picture.source, VAR_1,
                         VAR_8->picture.crop,
                         VAR_7->i_x_offset, VAR_7->i_y_offset, 0, 0,
                         0, 0, VAR_7->i_visible_width, VAR_7->i_visible_height);


    static const xcb_render_color_t VAR_11 = { 0, 0, 0, 0xffff };
    xcb_rectangle_t VAR_12[] = {
        { 0, 0, VAR_3->cfg->display.width, VAR_3->cfg->display.height },
    };

    FUNC_7(VAR_9, VAR_2,
                               VAR_8->picture.scale, VAR_11,
                               FUNC_0(VAR_12), VAR_12);


    FUNC_6(VAR_9, VAR_2,
                         VAR_8->picture.crop, VAR_1,
                         VAR_8->picture.scale, VAR_8->src_x, VAR_8->src_y, 0, 0,
                         VAR_8->place.x, VAR_8->place.y,
                         VAR_8->place.width, VAR_8->place.height);
    if (VAR_10 != (size_t)-1)
        FUNC_2(VAR_3);


    if (VAR_5 != ((void*)0))
        for (subpicture_region_t *VAR_13 = VAR_5->p_region; VAR_13 != ((void*)0);
             VAR_13 = VAR_13->p_next)
            FUNC_3(VAR_3, VAR_5, VAR_13);

    FUNC_4(VAR_9);
    (void) VAR_6;
}
