
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
typedef size_t int32_t ;
struct TYPE_6__ {TYPE_1__* friendlist; } ;
struct TYPE_5__ {int last_seen_time; } ;
typedef TYPE_2__ Messenger ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__ const*,size_t) ;

uint64_t FUNC_1(const Messenger *VAR_1, int32_t VAR_2)
{
    if (FUNC_0(VAR_1, VAR_2))
        return VAR_0;

    return VAR_1->friendlist[VAR_2].last_seen_time;
}
