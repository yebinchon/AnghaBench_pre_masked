
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ intf_thread_t ;
struct TYPE_6__ {scalar_t__ last_state; } ;
typedef TYPE_2__ intf_sys_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,char*,int) ;

__attribute__((used)) static void FUNC_1(intf_thread_t *VAR_2)
{
    intf_sys_t *VAR_3 = VAR_2->p_sys;

    FUNC_0(VAR_2, "%d",
              VAR_3->last_state == VAR_1 ||
              VAR_3->last_state == VAR_0);
}
