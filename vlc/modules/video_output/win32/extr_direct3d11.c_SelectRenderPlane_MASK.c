
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* selectPlaneCb ) (int ,size_t) ;int outside_opaque; } ;
typedef TYPE_1__ vout_display_sys_t ;


 int FUNC_0 (int ,size_t) ;

__attribute__((used)) static bool FUNC_1(void *VAR_0, size_t VAR_1)
{
    vout_display_sys_t *VAR_2 = VAR_0;
    return VAR_2->selectPlaneCb(VAR_2->outside_opaque, VAR_1);
}
