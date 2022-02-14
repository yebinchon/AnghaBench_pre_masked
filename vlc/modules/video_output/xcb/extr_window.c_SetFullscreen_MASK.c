
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* sys; } ;
typedef TYPE_1__ vout_window_t ;
struct TYPE_6__ {int conn; int wm_state_fullscreen; } ;
typedef TYPE_2__ vout_window_sys_t ;


 int FUNC_0 (TYPE_1__*,int,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(vout_window_t *VAR_0, const char *VAR_1)
{
    vout_window_sys_t *VAR_2 = VAR_0->sys;

    (void) VAR_1;
    FUNC_0(VAR_0, 1, VAR_2->wm_state_fullscreen);
    FUNC_1(VAR_2->conn);
}
