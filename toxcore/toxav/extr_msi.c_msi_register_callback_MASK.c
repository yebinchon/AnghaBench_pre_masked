
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int msi_action_cb ;
struct TYPE_3__ {int mutex; int ** callbacks; } ;
typedef TYPE_1__ MSISession ;
typedef size_t MSICallbackID ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

void FUNC_2 (MSISession *VAR_0, msi_action_cb *VAR_1, MSICallbackID VAR_2)
{
    if (!VAR_0)
        return;

    FUNC_0(VAR_0->mutex);
    VAR_0->callbacks[VAR_2] = VAR_1;
    FUNC_1(VAR_0->mutex);
}
