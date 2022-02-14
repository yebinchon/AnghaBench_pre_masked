
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* sys; } ;
typedef TYPE_1__ vout_window_t ;
struct TYPE_14__ {int length; } ;
struct TYPE_11__ {int hwnd; int i_window_style; TYPE_8__ window_placement; } ;
typedef TYPE_2__ vout_window_sys_t ;
typedef int WINDOWPLACEMENT ;
struct TYPE_13__ {int top; int left; } ;
struct TYPE_12__ {int cbSize; TYPE_6__ rcMonitor; } ;
typedef TYPE_3__ MONITORINFO ;
typedef int HMONITOR ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,TYPE_3__*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,TYPE_8__*) ;
 int VAR_1 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_6__) ;
 int FUNC_5 (TYPE_6__) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int ,int ,int ,int ,int ,int ,int) ;
 int FUNC_8 (char const*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (TYPE_1__*,char*) ;

__attribute__((used)) static void FUNC_10(vout_window_t *VAR_6, const char *VAR_7)
{
    FUNC_8(VAR_7);
    FUNC_9(VAR_6, "entering fullscreen mode");
    vout_window_sys_t *VAR_8 = VAR_6->sys;

    VAR_8->window_placement.length = sizeof(WINDOWPLACEMENT);
    FUNC_2(VAR_8->hwnd, &VAR_8->window_placement);

    VAR_8->i_window_style = FUNC_1(VAR_8->hwnd, VAR_0);


    FUNC_6(VAR_8->hwnd, VAR_0, VAR_4 | VAR_5);



    HMONITOR VAR_9 = FUNC_3(VAR_8->hwnd, VAR_1);
    MONITORINFO VAR_10;
    VAR_10.cbSize = sizeof(MONITORINFO);
    if (FUNC_0(VAR_9, &VAR_10))
        FUNC_7(VAR_8->hwnd, 0,
                     VAR_10.rcMonitor.left,
                     VAR_10.rcMonitor.top,
                     FUNC_5(VAR_10.rcMonitor),
                     FUNC_4(VAR_10.rcMonitor),
                     VAR_3|VAR_2);
}
