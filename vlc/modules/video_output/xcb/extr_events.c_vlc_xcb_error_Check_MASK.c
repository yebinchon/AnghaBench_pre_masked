
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int xcb_void_cookie_t ;
struct TYPE_4__ {int error_code; } ;
typedef TYPE_1__ xcb_generic_error_t ;
typedef int xcb_connection_t ;
typedef int vout_display_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,char*,char const*,int) ;
 TYPE_1__* FUNC_3 (int *,int ) ;

int FUNC_4(vout_display_t *VAR_0, xcb_connection_t *VAR_1,
                        const char *VAR_2, xcb_void_cookie_t VAR_3)
{
    xcb_generic_error_t *VAR_4;

    VAR_4 = FUNC_3 (VAR_1, VAR_3);
    if (VAR_4)
    {
        int VAR_5 = VAR_4->error_code;

        FUNC_1 (VAR_4);
        FUNC_2 (VAR_0, "%s: X11 error %d", VAR_2, VAR_5);
        FUNC_0 (VAR_5 != 0);
        return VAR_5;
    }
    return 0;
}
