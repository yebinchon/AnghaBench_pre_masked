
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* sys; } ;
typedef TYPE_1__ vout_window_t ;
struct TYPE_8__ {scalar_t__ length; } ;
struct TYPE_7__ {int hwnd; TYPE_5__ window_placement; int i_window_style; } ;
typedef TYPE_2__ vout_window_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,TYPE_5__*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_1__*,char*) ;

__attribute__((used)) static void FUNC_4(vout_window_t *VAR_2)
{
    FUNC_3(VAR_2, "leaving fullscreen mode");
    vout_window_sys_t *VAR_3 = VAR_2->sys;


    if (VAR_3->window_placement.length)
    {
        FUNC_0(VAR_3->hwnd, VAR_0, VAR_3->i_window_style);
        FUNC_1(VAR_3->hwnd, &VAR_3->window_placement);
        VAR_3->window_placement.length = 0;
    }
    FUNC_2(VAR_3->hwnd, VAR_1);
}
