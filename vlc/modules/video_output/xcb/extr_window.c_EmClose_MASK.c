
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int xcb_window_t ;
struct TYPE_6__ {int xid; } ;
struct TYPE_7__ {TYPE_1__ handle; } ;
typedef TYPE_2__ vout_window_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_3 (vout_window_t *VAR_0)
{
    xcb_window_t VAR_1 = VAR_0->handle.xid;

    FUNC_0 (VAR_0);
    FUNC_1 (FUNC_2(VAR_0), VAR_1);
}
