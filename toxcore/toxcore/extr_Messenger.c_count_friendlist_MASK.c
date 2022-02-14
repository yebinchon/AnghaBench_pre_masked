
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_5__ {size_t numfriends; TYPE_1__* friendlist; } ;
struct TYPE_4__ {scalar_t__ status; } ;
typedef TYPE_2__ Messenger ;



uint32_t FUNC_0(const Messenger *VAR_0)
{
    uint32_t VAR_1 = 0;
    uint32_t VAR_2;

    for (VAR_2 = 0; VAR_2 < VAR_0->numfriends; VAR_2++) {
        if (VAR_0->friendlist[VAR_2].status > 0) {
            VAR_1++;
        }
    }

    return VAR_1;
}
