
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int wl; } ;
struct TYPE_6__ {TYPE_1__ display; TYPE_3__* sys; } ;
typedef TYPE_2__ vout_window_t ;
struct TYPE_7__ {unsigned long default_output; int toplevel; int registry; } ;
typedef TYPE_3__ vout_window_sys_t ;
struct wl_output {int dummy; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (int) ;
 unsigned long FUNC_1 (char const*,char**,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct wl_output*) ;
 int VAR_1 ;
 struct wl_output* FUNC_4 (int ,unsigned long,int *,int) ;
 int FUNC_5 (int ,struct wl_output*) ;

__attribute__((used)) static void FUNC_6(vout_window_t *VAR_2, const char *VAR_3)
{
    vout_window_sys_t *VAR_4 = VAR_2->sys;
    struct wl_output *VAR_5 = ((void*)0);

    if (VAR_3 != ((void*)0))
    {
        char *VAR_6;
        unsigned long VAR_7 = FUNC_1(VAR_3, &VAR_6, 10);

        FUNC_0(*VAR_6 == '\0' && VAR_7 <= VAR_0);
        VAR_5 = FUNC_4(VAR_4->registry, VAR_7,
                                  &VAR_1, 1);
    }
    else
    if (VAR_4->default_output != 0)
        VAR_5 = FUNC_4(VAR_4->registry, VAR_4->default_output,
                                  &VAR_1, 1);

    FUNC_5(VAR_4->toplevel, VAR_5);

    if (VAR_5 != ((void*)0))
        FUNC_3(VAR_5);

    FUNC_2(VAR_2->display.wl);
}
