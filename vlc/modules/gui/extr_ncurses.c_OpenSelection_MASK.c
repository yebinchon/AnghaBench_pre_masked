
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ intf_thread_t ;
struct TYPE_6__ {int plidx_follow; int open_chain; } ;
typedef TYPE_2__ intf_sys_t ;


 int FUNC_0 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_1(intf_thread_t *VAR_0)
{
    intf_sys_t *VAR_1 = VAR_0->p_sys;

    FUNC_0(VAR_0, VAR_1->open_chain);
    VAR_1->plidx_follow = 1;
}
