
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int xcb_screen_t ;
struct TYPE_12__ {int root; } ;
typedef TYPE_3__ xcb_get_geometry_reply_t ;
typedef int xcb_connection_t ;
struct TYPE_11__ {int xid; } ;
struct TYPE_10__ {int x11; } ;
struct TYPE_13__ {scalar_t__ type; TYPE_2__ handle; TYPE_1__ display; } ;
typedef TYPE_4__ vout_window_t ;
typedef int vout_display_t ;
struct TYPE_14__ {TYPE_4__* window; } ;
typedef TYPE_5__ vout_display_cfg_t ;


 int * FUNC_0 (int ,int ) ;
 int * FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 TYPE_3__* FUNC_7 (int *,int ,int *) ;

vout_window_t *FUNC_8(vout_display_t *VAR_1,
                                     const vout_display_cfg_t *VAR_2,
                                     xcb_connection_t **restrict VAR_3,
                                     const xcb_screen_t **restrict VAR_4)
{
    if (VAR_2->window->type != VAR_0)
    {
        FUNC_4 (VAR_1, "window not available");
        return ((void*)0);
    }
    vout_window_t *VAR_5 = VAR_2->window;

    xcb_connection_t *VAR_6 = FUNC_0 (FUNC_2(VAR_1), VAR_5->display.x11);
    if (VAR_6 == ((void*)0))
        goto error;
    *VAR_3 = VAR_6;

    xcb_get_geometry_reply_t *VAR_7 =
        FUNC_7 (VAR_6, FUNC_6 (VAR_6, VAR_5->handle.xid),
                                ((void*)0));
    if (VAR_7 == ((void*)0))
    {
        FUNC_4 (VAR_1, "window not valid");
        goto error;
    }

    const xcb_screen_t *VAR_8 = FUNC_1 (FUNC_2(VAR_1), VAR_6, VAR_7->root);
    FUNC_3 (VAR_7);
    if (VAR_8 == ((void*)0))
        goto error;
    *VAR_4 = VAR_8;
    return VAR_5;

error:
    if (VAR_6 != ((void*)0))
        FUNC_5 (VAR_6);
    return ((void*)0);
}
