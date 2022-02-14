
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* sys; } ;
typedef TYPE_2__ vout_window_t ;
struct TYPE_7__ {struct wl_surface* cursor_surface; TYPE_1__* cursor; } ;
typedef TYPE_3__ vout_window_sys_t ;
struct wl_surface {int dummy; } ;
struct wl_cursor_image {int hotspot_y; int hotspot_x; int height; int width; } ;
typedef int int32_t ;
struct TYPE_5__ {scalar_t__ image_count; struct wl_cursor_image** images; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct wl_cursor_image*) ;
 int FUNC_4 (struct wl_surface*,int ,int ,int ) ;
 int FUNC_5 (struct wl_surface*) ;
 int FUNC_6 (struct wl_surface*,int ,int ,int ,int ) ;

struct wl_surface *FUNC_7(vout_window_t *VAR_0, int32_t *restrict VAR_1,
                                     int32_t *restrict VAR_2)
{
    vout_window_sys_t *VAR_3 = VAR_0->sys;

    if (FUNC_2(VAR_3->cursor == ((void*)0)))
        return ((void*)0);

    FUNC_0(VAR_3->cursor->image_count > 0);


    struct wl_cursor_image *VAR_4 = VAR_3->cursor->images[0];
    struct wl_surface *VAR_5 = VAR_3->cursor_surface;

    if (FUNC_1(VAR_5 != ((void*)0)))
    {
        FUNC_4(VAR_5, FUNC_3(VAR_4), 0, 0);
        FUNC_6(VAR_5, 0, 0, VAR_4->width, VAR_4->height);
        FUNC_5(VAR_5);
    }

    *VAR_1 = VAR_4->hotspot_x;
    *VAR_2 = VAR_4->hotspot_y;
    return VAR_5;
}
