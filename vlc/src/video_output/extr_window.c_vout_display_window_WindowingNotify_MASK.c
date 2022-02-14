
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* sys; } ;
struct TYPE_7__ {TYPE_1__ owner; } ;
typedef TYPE_2__ vout_window_t ;
typedef int vout_thread_t ;
struct TYPE_8__ {int * vout; } ;
typedef TYPE_3__ vout_display_window_t ;


 int FUNC_0 (TYPE_2__*,char*) ;
 int FUNC_1 (int *,char*,int) ;

__attribute__((used)) static void FUNC_2(vout_window_t *VAR_0)
{
    vout_display_window_t *VAR_1 = VAR_0->owner.sys;
    vout_thread_t *VAR_2 = VAR_1->vout;

    FUNC_0(VAR_0, "window set windowed");
    FUNC_1(VAR_2, "window-fullscreen", 0);
}
