
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef size_t uint32_t ;
struct TYPE_5__ {scalar_t__ userstatus; size_t numfriends; TYPE_1__* friendlist; } ;
struct TYPE_4__ {scalar_t__ userstatus_sent; } ;
typedef TYPE_2__ Messenger ;


 scalar_t__ VAR_0 ;

int FUNC_0(Messenger *VAR_1, uint8_t VAR_2)
{
    if (VAR_2 >= VAR_0)
        return -1;

    if (VAR_1->userstatus == VAR_2)
        return 0;

    VAR_1->userstatus = VAR_2;
    uint32_t VAR_3;

    for (VAR_3 = 0; VAR_3 < VAR_1->numfriends; ++VAR_3)
        VAR_1->friendlist[VAR_3].userstatus_sent = 0;

    return 0;
}
