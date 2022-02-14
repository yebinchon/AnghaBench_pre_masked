
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t int32_t ;
struct TYPE_5__ {unsigned int numfriends; TYPE_1__* friendlist; } ;
struct TYPE_4__ {scalar_t__ status; } ;
typedef TYPE_2__ Messenger ;



__attribute__((used)) static uint8_t FUNC_0(const Messenger *VAR_0, int32_t VAR_1)
{
    if ((unsigned int)VAR_1 < VAR_0->numfriends) {
        if (VAR_0->friendlist[VAR_1].status != 0) {
            return 0;
        }
    }

    return 1;
}
