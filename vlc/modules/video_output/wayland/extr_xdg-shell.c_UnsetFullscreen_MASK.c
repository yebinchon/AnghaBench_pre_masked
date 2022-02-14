
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
struct TYPE_7__ {int toplevel; } ;
typedef TYPE_3__ vout_window_sys_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(vout_window_t *VAR_0)
{
    vout_window_sys_t *VAR_1 = VAR_0->sys;

    FUNC_1(VAR_1->toplevel);
    FUNC_0(VAR_0->display.wl);
}
