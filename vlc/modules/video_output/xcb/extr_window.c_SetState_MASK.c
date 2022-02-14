
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* sys; } ;
typedef TYPE_1__ vout_window_t ;
struct TYPE_6__ {int conn; int wm_state_below; int wm_state_above; } ;
typedef TYPE_2__ vout_window_sys_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(vout_window_t *VAR_2, unsigned VAR_3)
{
    vout_window_sys_t *VAR_4 = VAR_2->sys;
    bool VAR_5 = (VAR_3 & VAR_0) != 0;
    bool VAR_6 = (VAR_3 & VAR_1) != 0;

    FUNC_0(VAR_2, VAR_5, VAR_4->wm_state_above);
    FUNC_0(VAR_2, VAR_6, VAR_4->wm_state_below);
    FUNC_1(VAR_4->conn);
}
