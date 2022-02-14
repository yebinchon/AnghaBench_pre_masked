
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int xcb_void_cookie_t ;
typedef int xcb_generic_error_t ;
typedef int xcb_connection_t ;
struct TYPE_7__ {TYPE_2__* sys; } ;
typedef TYPE_1__ vout_display_t ;
struct TYPE_8__ {int attached; scalar_t__ segment; int * conn; } ;
typedef TYPE_2__ vout_display_sys_t ;
typedef int vlc_tick_t ;
typedef int subpicture_t ;
struct TYPE_9__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ picture_t ;
struct TYPE_10__ {int fd; } ;
typedef TYPE_4__ picture_buffer_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int * FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,scalar_t__,int,int) ;

__attribute__((used)) static void FUNC_4(vout_display_t *VAR_0, picture_t *VAR_1, subpicture_t *VAR_2,
                    vlc_tick_t VAR_3)
{
    vout_display_sys_t *VAR_4 = VAR_0->sys;
    const picture_buffer_t *VAR_5 = VAR_1->p_sys;
    xcb_connection_t *VAR_6 = VAR_4->conn;

    VAR_4->attached = 0;

    if (VAR_4->segment == 0)
        return;
    if (VAR_5->fd == -1)
        return;

    int VAR_7 = FUNC_1(VAR_5->fd);
    if (VAR_7 == -1)
        return;

    xcb_void_cookie_t VAR_8 = FUNC_3(VAR_6, VAR_4->segment, VAR_7, 1);
    xcb_generic_error_t *VAR_9 = FUNC_2(VAR_6, VAR_8);
    if (VAR_9 != ((void*)0))
    {
        FUNC_0(VAR_9);
        return;
    }

    VAR_4->attached = 1;
    (void) VAR_2; (void) VAR_3;
}
