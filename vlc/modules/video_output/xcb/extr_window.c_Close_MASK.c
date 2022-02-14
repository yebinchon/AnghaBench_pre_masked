
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int xcb_connection_t ;
struct TYPE_6__ {int x11; } ;
struct TYPE_7__ {TYPE_1__ display; TYPE_3__* sys; } ;
typedef TYPE_2__ vout_window_t ;
struct TYPE_8__ {int thread; int * conn; } ;
typedef TYPE_3__ vout_window_sys_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5 (vout_window_t *VAR_0)
{
    vout_window_sys_t *VAR_1 = VAR_0->sys;
    xcb_connection_t *VAR_2 = VAR_1->conn;

    FUNC_2 (VAR_1->thread);
    FUNC_3 (VAR_1->thread, ((void*)0));

    FUNC_0(VAR_0);
    FUNC_4 (VAR_2);
    FUNC_1 (VAR_0->display.x11);
}
