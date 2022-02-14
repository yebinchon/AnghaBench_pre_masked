
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl_proxy {int dummy; } ;
struct wl_event_queue {int dummy; } ;
struct wl_display {int dummy; } ;
struct vlc_wl_registry {int * registry; int * names; int * interfaces; } ;


 int FUNC_0 (struct vlc_wl_registry*) ;
 struct vlc_wl_registry* FUNC_1 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct vlc_wl_registry*) ;
 int * FUNC_4 (struct wl_display*) ;
 scalar_t__ FUNC_5 (struct wl_display*,struct wl_event_queue*) ;
 struct wl_display* FUNC_6 (struct wl_display*) ;
 int FUNC_7 (struct wl_proxy*,struct wl_event_queue*) ;
 int FUNC_8 (struct wl_display*) ;
 int FUNC_9 (int *,int *,struct vlc_wl_registry*) ;

struct vlc_wl_registry *FUNC_10(struct wl_display *VAR_1,
                                            struct wl_event_queue *VAR_2)
{
    struct vlc_wl_registry *VAR_3 = FUNC_1(sizeof (*VAR_3));
    if (FUNC_2(VAR_3 == ((void*)0)))
        return ((void*)0);

    struct wl_display *VAR_4 = FUNC_6(VAR_1);
    if (FUNC_2(VAR_4 == ((void*)0)))
        goto error;

    FUNC_7((struct wl_proxy *)VAR_4, VAR_2);
    VAR_3->registry = FUNC_4(VAR_4);
    FUNC_8(VAR_4);

    if (FUNC_2(VAR_3->registry == ((void*)0)))
        goto error;

    VAR_3->interfaces = ((void*)0);
    VAR_3->names = ((void*)0);

    FUNC_9(VAR_3->registry, &VAR_0, VAR_3);


    if (FUNC_5(VAR_1, VAR_2) < 0)
    {
        FUNC_3(VAR_3);
        VAR_3 = ((void*)0);
    }

    return VAR_3;
error:
    FUNC_0(VAR_3);
    return VAR_3;
}
