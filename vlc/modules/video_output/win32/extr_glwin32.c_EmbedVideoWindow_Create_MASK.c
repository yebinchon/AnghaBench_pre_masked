
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int hwnd; } ;
struct TYPE_12__ {int * ops; TYPE_1__ handle; int type; } ;
typedef TYPE_3__ vout_window_t ;
struct TYPE_13__ {TYPE_5__* sys; } ;
typedef TYPE_4__ vout_display_t ;
struct TYPE_11__ {int hvideownd; } ;
struct TYPE_14__ {TYPE_2__ sys; } ;
typedef TYPE_5__ vout_display_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (TYPE_4__*,int) ;

__attribute__((used)) static vout_window_t *FUNC_1(vout_display_t *VAR_2)
{
    vout_display_sys_t *VAR_3 = VAR_2->sys;

    vout_window_t *VAR_4 = FUNC_0(VAR_2, sizeof(vout_window_t));
    if (!VAR_4)
        return ((void*)0);

    VAR_4->type = VAR_0;
    VAR_4->handle.hwnd = VAR_3->sys.hvideownd;
    VAR_4->ops = &VAR_1;
    return VAR_4;
}
