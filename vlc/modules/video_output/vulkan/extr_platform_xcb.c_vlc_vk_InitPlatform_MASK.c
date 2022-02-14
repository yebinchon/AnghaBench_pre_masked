
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int xcb_connection_t ;
struct TYPE_8__ {int * platform_sys; TYPE_2__* window; } ;
typedef TYPE_3__ vlc_vk_t ;
struct TYPE_6__ {char* x11; } ;
struct TYPE_7__ {scalar_t__ type; TYPE_1__ display; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_3__*,char*,char const*) ;
 int * FUNC_1 (char const*,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(vlc_vk_t *VAR_3)
{
    if (VAR_3->window->type != VAR_2)
        return VAR_0;

    const char *VAR_4 = VAR_3->window->display.x11;
    xcb_connection_t *VAR_5 = VAR_3->platform_sys = FUNC_1(VAR_4, ((void*)0));
    if (FUNC_2(VAR_5))
    {
        FUNC_0(VAR_3, "Failed connecting to X server (%s)",
                VAR_4 ? VAR_4 : "default");
        FUNC_3(VAR_5);
        return VAR_0;
    }

    return VAR_1;
}
