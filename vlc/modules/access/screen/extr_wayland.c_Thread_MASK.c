
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct wl_display {int dummy; } ;
struct pollfd {int events; int fd; } ;
struct TYPE_8__ {int out; TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_9__ {float rate; int * es; struct wl_display* display; } ;
typedef TYPE_2__ demux_sys_t ;
struct TYPE_10__ {int i_pts; int i_dts; } ;
typedef TYPE_3__ block_t ;


 float VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,struct wl_display*) ;
 int VAR_1 ;
 TYPE_3__* FUNC_1 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_2 (int ,int *,TYPE_3__*) ;
 int FUNC_3 (int ,int ) ;
 unsigned int FUNC_4 (float) ;
 scalar_t__ FUNC_5 (struct pollfd*,int,unsigned int) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,struct wl_display*) ;
 int FUNC_8 (int) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (struct wl_display*) ;
 int FUNC_12 (struct wl_display*) ;
 int FUNC_13 (struct wl_display*) ;
 scalar_t__ FUNC_14 (struct wl_display*) ;
 int FUNC_15 (struct wl_display*) ;

__attribute__((used)) static void *FUNC_16(void *VAR_3)
{
    demux_t *VAR_4 = VAR_3;
    demux_sys_t *VAR_5 = VAR_4->p_sys;
    struct wl_display *VAR_6 = VAR_5->display;
    struct pollfd VAR_7[1];
    unsigned VAR_8 = FUNC_4(VAR_0 / (VAR_5->rate * 1000.f));

    int VAR_9 = FUNC_9();
    FUNC_7(VAR_2, VAR_6);

    VAR_7[0].fd = FUNC_13(VAR_6);
    VAR_7[0].events = VAR_1;

    for (;;)
    {
        if (FUNC_0(VAR_4, VAR_6))
            break;

        if (VAR_5->es != ((void*)0))
        {
            block_t *VAR_10 = FUNC_1(VAR_4);

            VAR_10->i_pts = VAR_10->i_dts = FUNC_10();
            FUNC_3(VAR_4->out, VAR_10->i_pts);
            FUNC_2(VAR_4->out, VAR_5->es, VAR_10);
        }

        while (FUNC_14(VAR_6) != 0)
            FUNC_11(VAR_6);
        FUNC_12(VAR_6);
        FUNC_8(VAR_9);

        while (FUNC_5(VAR_7, 1, VAR_8) < 0);

        VAR_9 = FUNC_9();
        FUNC_15(VAR_6);
        FUNC_11(VAR_6);
    }
    FUNC_6();
    FUNC_8(VAR_9);
    return ((void*)0);
}
