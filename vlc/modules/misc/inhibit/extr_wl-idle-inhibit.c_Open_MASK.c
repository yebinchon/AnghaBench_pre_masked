
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {struct wl_display* wl; } ;
struct TYPE_10__ {scalar_t__ type; TYPE_1__ display; } ;
typedef TYPE_2__ vout_window_t ;
typedef int vlc_object_t ;
struct TYPE_11__ {int inhibit; TYPE_4__* p_sys; } ;
typedef TYPE_3__ vlc_inhibit_t ;
struct TYPE_12__ {int * eventq; int * manager; int * inhibitor; } ;
typedef TYPE_4__ vlc_inhibit_sys_t ;
struct wl_registry {int dummy; } ;
struct wl_proxy {int dummy; } ;
struct wl_display {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (TYPE_3__*) ;
 TYPE_4__* FUNC_2 (int *,int) ;
 int * FUNC_3 (struct wl_display*) ;
 struct wl_registry* FUNC_4 (struct wl_display*) ;
 int FUNC_5 (struct wl_display*,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct wl_proxy*,int *) ;
 int FUNC_8 (struct wl_registry*,int *,TYPE_3__*) ;
 int FUNC_9 (struct wl_registry*) ;

__attribute__((used)) static int FUNC_10(vlc_object_t *VAR_6)
{
    vlc_inhibit_t *VAR_7 = (vlc_inhibit_t *)VAR_6;
    vout_window_t *VAR_8 = FUNC_1(VAR_7);

    if (VAR_8->type != VAR_4)
        return VAR_1;

    vlc_inhibit_sys_t *VAR_9 = FUNC_2(VAR_6, sizeof (*VAR_9));
    if (FUNC_0(VAR_9 == ((void*)0)))
        return VAR_2;

    VAR_9->manager = ((void*)0);
    VAR_9->inhibitor = ((void*)0);
    VAR_7->p_sys = VAR_9;

    struct wl_display *VAR_10 = VAR_8->display.wl;

    VAR_9->eventq = FUNC_3(VAR_10);
    if (VAR_9->eventq == ((void*)0))
        return VAR_2;

    struct wl_registry *VAR_11 = FUNC_4(VAR_10);
    if (VAR_11 == ((void*)0))
        goto error;

    FUNC_8(VAR_11, &VAR_5, VAR_7);
    FUNC_7((struct wl_proxy *)VAR_11, VAR_9->eventq);
    FUNC_5(VAR_10, VAR_9->eventq);
    FUNC_9(VAR_11);

    if (VAR_9->manager == ((void*)0))
        goto error;

    VAR_7->inhibit = VAR_0;
    return VAR_3;

error:
    if (VAR_9->eventq != ((void*)0))
        FUNC_6(VAR_9->eventq);
    return VAR_1;
}
