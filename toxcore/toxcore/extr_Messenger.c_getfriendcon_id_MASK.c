
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t int32_t ;
struct TYPE_6__ {TYPE_1__* friendlist; } ;
struct TYPE_5__ {int friendcon_id; } ;
typedef TYPE_2__ Messenger ;


 scalar_t__ FUNC_0 (TYPE_2__ const*,size_t) ;

int FUNC_1(const Messenger *VAR_0, int32_t VAR_1)
{
    if (FUNC_0(VAR_0, VAR_1))
        return -1;

    return VAR_0->friendlist[VAR_1].friendcon_id;
}
