
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hwnd; } ;
typedef TYPE_1__ vout_window_sys_t ;
struct vout_window_t {TYPE_1__* sys; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(struct vout_window_t *VAR_1)
{
    vout_window_sys_t *VAR_2 = VAR_1->sys;
    FUNC_0( VAR_2->hwnd, VAR_0 );
}
