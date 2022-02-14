
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int has_double_click; } ;
struct TYPE_12__ {int owner; int * sys; TYPE_1__ info; int handle; } ;
struct TYPE_11__ {int inhibit_windowed; int active; int fullscreen; int lock; int * inhibit; int module; TYPE_3__ wnd; } ;
typedef TYPE_2__ window_t ;
typedef TYPE_3__ vout_window_t ;
typedef int vout_window_owner_t ;
typedef int vlc_object_t ;
typedef int vlc_inhibit_t ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *,char*) ;
 TYPE_2__* FUNC_4 (int *,int,char*) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (TYPE_3__*,char*,char const*,int,int ,TYPE_3__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_3__*) ;
 int VAR_0 ;

vout_window_t *FUNC_12(vlc_object_t *VAR_1, const char *VAR_2,
                               const vout_window_owner_t *VAR_3)
{
    window_t *VAR_4 = FUNC_4(VAR_1, sizeof(*VAR_4), "window");
    vout_window_t *VAR_5 = &VAR_4->wnd;

    FUNC_2(&VAR_5->handle, 0, sizeof(VAR_5->handle));
    VAR_5->info.has_double_click = 0;
    VAR_5->sys = ((void*)0);
    FUNC_1(VAR_3 != ((void*)0));
    VAR_5->owner = *VAR_3;

    int VAR_6 = FUNC_3(VAR_1, "disable-screensaver");

    VAR_4->inhibit = ((void*)0);
    VAR_4->inhibit_windowed = VAR_6 == 1;
    VAR_4->active = 0;
    VAR_4->fullscreen = 0;
    FUNC_8(&VAR_4->lock);

    VAR_4->module = FUNC_6(VAR_5, "vout window", VAR_2, 0,
                                VAR_0, VAR_5);
    if (!VAR_4->module) {
        FUNC_7(&VAR_4->lock);
        FUNC_11(VAR_5);
        return ((void*)0);
    }


    if (VAR_6 > 0) {
        vlc_inhibit_t *VAR_7 = FUNC_5(FUNC_0(VAR_5));

        FUNC_9(&VAR_4->lock);
        VAR_4->inhibit = VAR_7;
        FUNC_10(&VAR_4->lock);
    }
    return VAR_5;
}
