
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int wl; } ;
struct TYPE_8__ {TYPE_1__ display; } ;
typedef TYPE_2__ vout_window_t ;
typedef int vlc_object_t ;
struct TYPE_9__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ vlc_inhibit_t ;
struct TYPE_10__ {int eventq; int manager; int * inhibitor; } ;
typedef TYPE_4__ vlc_inhibit_sys_t ;


 TYPE_2__* FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(vlc_object_t *VAR_0)
{
    vlc_inhibit_t *VAR_1 = (vlc_inhibit_t *)VAR_0;
    vlc_inhibit_sys_t *VAR_2 = VAR_1->p_sys;
    vout_window_t *VAR_3 = FUNC_0(VAR_1);

    if (VAR_2->inhibitor != ((void*)0))
        FUNC_4(VAR_2->inhibitor);

    FUNC_3(VAR_2->manager);
    FUNC_1(VAR_3->display.wl);
    FUNC_2(VAR_2->eventq);
}
