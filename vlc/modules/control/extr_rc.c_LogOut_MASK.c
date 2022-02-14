
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ intf_thread_t ;
struct TYPE_5__ {int i_socket; } ;
typedef TYPE_2__ intf_sys_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(intf_thread_t *VAR_0)
{
    intf_sys_t *VAR_1 = VAR_0->p_sys;


    if (VAR_1->i_socket != -1)
    {
        FUNC_0(VAR_1->i_socket);
        VAR_1->i_socket = -1;
    }
}
