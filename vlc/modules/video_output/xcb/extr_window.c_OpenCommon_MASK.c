
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef void* xcb_window_t ;
typedef int xcb_intern_atom_cookie_t ;
typedef int xcb_connection_t ;
typedef void* xcb_atom_t ;
struct TYPE_15__ {char* x11; } ;
struct TYPE_14__ {void* xid; } ;
struct TYPE_17__ {TYPE_5__* sys; int * ops; TYPE_2__ display; TYPE_1__ handle; int type; } ;
typedef TYPE_4__ vout_window_t ;
struct TYPE_16__ {int * ctx; } ;
struct TYPE_18__ {int thread; void* motif_wm_hints; void* wm_state_fullscreen; void* wm_state_below; void* wm_state_above; void* wm_state; TYPE_3__ xkb; void* root; int * conn; } ;
typedef TYPE_5__ vout_window_sys_t ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_4__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 void* FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,char*) ;
 int VAR_10 ;
 int FUNC_7 (int *,void*,void*,char*) ;
 int FUNC_8 (int *,void*) ;
 int FUNC_9 (int *,void*,void*,void*,char*) ;
 int FUNC_10 (int *,void*) ;
 scalar_t__ FUNC_11 (TYPE_4__*,char*) ;
 char* FUNC_12 (TYPE_4__*,char*) ;
 scalar_t__ FUNC_13 (int *,int ,TYPE_4__*,int ) ;
 TYPE_5__* FUNC_14 (int ,int) ;
 char* FUNC_15 (char*,char*) ;
 int FUNC_16 (int *,int ,void*,int ,int ,int,int,char*) ;

__attribute__((used)) static int FUNC_17(vout_window_t *VAR_11, char *VAR_12,
                      xcb_connection_t *VAR_13,
                      xcb_window_t VAR_14, xcb_window_t VAR_15)
{
    vout_window_sys_t *VAR_16 = FUNC_14(FUNC_2(VAR_11), sizeof (*VAR_16));
    if (VAR_16 == ((void*)0))
        return VAR_1;

    VAR_11->type = VAR_4;
    VAR_11->handle.xid = VAR_15;
    VAR_11->display.x11 = VAR_12;
    VAR_11->ops = &VAR_10;
    VAR_11->sys = VAR_16;

    VAR_16->conn = VAR_13;
    VAR_16->root = VAR_14;
    FUNC_7(VAR_13, VAR_15, VAR_8,





                   FUNC_15("ASCII", "VLC media player"));

    FUNC_7(VAR_13, VAR_15, VAR_7,


                   FUNC_15("ASCII", "VLC"));

    FUNC_10(VAR_13, VAR_15);
    FUNC_16(VAR_13, VAR_9, VAR_15, VAR_6,
                        VAR_5, 8, 8, "vlc\0Vlc");
    FUNC_8(VAR_13, VAR_15);


    xcb_intern_atom_cookie_t VAR_17 =
        FUNC_6(VAR_13, "UTF8_STRING");
    xcb_intern_atom_cookie_t VAR_18 =
        FUNC_6(VAR_13, "_NET_WM_NAME");
    xcb_intern_atom_cookie_t VAR_19 =
        FUNC_6(VAR_13, "_NET_WM_ICON_NAME");
    xcb_intern_atom_cookie_t VAR_20 =
        FUNC_6(VAR_13, "WM_WINDOW_ROLE");
    xcb_intern_atom_cookie_t VAR_21 =
        FUNC_6(VAR_13, "_NET_WM_STATE");
    xcb_intern_atom_cookie_t VAR_22 =
        FUNC_6(VAR_13, "_NET_WM_STATE_ABOVE");
    xcb_intern_atom_cookie_t VAR_23 =
        FUNC_6(VAR_13, "_NET_WM_STATE_BELOW");
    xcb_intern_atom_cookie_t VAR_24 =
        FUNC_6(VAR_13, "_NET_WM_STATE_FULLSCREEN");
    xcb_intern_atom_cookie_t VAR_25 =
        FUNC_6(VAR_13, "_MOTIF_WM_HINTS");

    xcb_atom_t VAR_26 = FUNC_5(VAR_13, VAR_17);
    xcb_atom_t VAR_27 = FUNC_5(VAR_13, VAR_18);
    char *VAR_28 = FUNC_12(VAR_11, "video-title");

    if (VAR_28 != ((void*)0))
    {
        FUNC_9(VAR_13, VAR_15, VAR_26, VAR_27, VAR_28);
        FUNC_4(VAR_28);
    }
    else
        FUNC_9(VAR_13, VAR_15, VAR_26, VAR_27, FUNC_3("VLC media player"));

    xcb_atom_t VAR_29 = FUNC_5(VAR_13, VAR_19);
    FUNC_9(VAR_13, VAR_15, VAR_26, VAR_29, FUNC_3("VLC"));

    xcb_atom_t VAR_30 = FUNC_5(VAR_13, VAR_20);
    FUNC_7(VAR_13, VAR_15, VAR_30, "vlc-video");


    VAR_16->wm_state = FUNC_5(VAR_13, VAR_21);
    VAR_16->wm_state_above = FUNC_5(VAR_13, VAR_22);
    VAR_16->wm_state_below = FUNC_5(VAR_13, VAR_23);
    VAR_16->wm_state_fullscreen = FUNC_5(VAR_13, VAR_24);
    VAR_16->motif_wm_hints = FUNC_5(VAR_13, VAR_25);



    if (FUNC_13(&VAR_16->thread, VAR_0, VAR_11, VAR_3))
    {
        FUNC_0(VAR_11);
        return VAR_1;
    }

    return VAR_2;
}
