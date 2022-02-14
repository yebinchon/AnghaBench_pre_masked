
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int xcb_connection_t ;
struct TYPE_5__ {int xid; } ;
struct TYPE_6__ {TYPE_1__ handle; TYPE_3__* sys; } ;
typedef TYPE_2__ vout_window_t ;
struct TYPE_7__ {int * conn; } ;
typedef TYPE_3__ vout_window_sys_t ;
typedef unsigned int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int,unsigned int const*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(vout_window_t *VAR_2, unsigned VAR_3, unsigned VAR_4)
{
    vout_window_sys_t *VAR_5 = VAR_2->sys;
    xcb_connection_t *VAR_6 = VAR_5->conn;
    const uint32_t VAR_7[] = { VAR_3, VAR_4, };

    FUNC_0(VAR_6, VAR_2->handle.xid,
                         VAR_1 | VAR_0,
                         VAR_7);
    FUNC_1(VAR_6);
}
