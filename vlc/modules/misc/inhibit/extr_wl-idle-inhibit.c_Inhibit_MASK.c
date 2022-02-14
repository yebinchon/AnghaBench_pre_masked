
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int wl; } ;
struct TYPE_9__ {TYPE_1__ handle; } ;
typedef TYPE_2__ vout_window_t ;
struct TYPE_10__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ vlc_inhibit_t ;
struct TYPE_11__ {int manager; int * inhibitor; } ;
typedef TYPE_4__ vlc_inhibit_sys_t ;


 unsigned int VAR_0 ;
 TYPE_2__* FUNC_0 (TYPE_3__*) ;
 int * FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3 (vlc_inhibit_t *VAR_1, unsigned VAR_2)
{
    vout_window_t *VAR_3 = FUNC_0(VAR_1);
    vlc_inhibit_sys_t *VAR_4 = VAR_1->p_sys;
    bool VAR_5 = (VAR_2 & VAR_0) != 0;

    if (VAR_4->inhibitor != ((void*)0)) {
        FUNC_2(VAR_4->inhibitor);
        VAR_4->inhibitor = ((void*)0);
    }

    if (VAR_5)
        VAR_4->inhibitor = FUNC_1(
            VAR_4->manager, VAR_3->handle.wl);

}
