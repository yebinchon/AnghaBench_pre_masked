
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct wl_display* wl; } ;
struct TYPE_5__ {TYPE_1__ display; TYPE_3__* sys; } ;
typedef TYPE_2__ vout_window_t ;
struct TYPE_6__ {int seats; } ;
typedef TYPE_3__ vout_window_sys_t ;
struct wl_display {int dummy; } ;
struct pollfd {int events; int fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pollfd*,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ,struct wl_display*) ;
 int FUNC_6 (int) ;
 int FUNC_7 () ;
 int FUNC_8 (struct wl_display*) ;
 int FUNC_9 (struct wl_display*) ;
 int FUNC_10 (struct wl_display*) ;
 scalar_t__ FUNC_11 (struct wl_display*) ;
 int FUNC_12 (struct wl_display*) ;

__attribute__((used)) static void *FUNC_13(void *VAR_2)
{
    vout_window_t *VAR_3 = VAR_2;
    vout_window_sys_t *VAR_4 = VAR_3->sys;
    struct wl_display *VAR_5 = VAR_3->display.wl;
    struct pollfd VAR_6[1];

    int VAR_7 = FUNC_7();
    FUNC_5(VAR_1, VAR_5);

    VAR_6[0].fd = FUNC_10(VAR_5);
    VAR_6[0].events = VAR_0;

    for (;;)
    {
        int VAR_8;

        while (FUNC_11(VAR_5) != 0)
            FUNC_8(VAR_5);

        FUNC_9(VAR_5);
        VAR_8 = FUNC_1(&VAR_4->seats);
        FUNC_6(VAR_7);

        int VAR_9 = FUNC_0(VAR_6, 1, VAR_8);

        VAR_7 = FUNC_7();
        if (VAR_9 == 0)
            FUNC_2(&VAR_4->seats);

        FUNC_12(VAR_5);
        FUNC_8(VAR_5);
    }
    FUNC_3();
    FUNC_4();


}
