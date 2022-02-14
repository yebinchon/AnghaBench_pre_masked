
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_5__ {scalar_t__ numfriends; TYPE_1__* friendlist; } ;
struct TYPE_4__ {scalar_t__ status; } ;
typedef TYPE_2__ Messenger ;



uint32_t FUNC_0(Messenger const *VAR_0, uint32_t *VAR_1, uint32_t VAR_2)
{
    if (!VAR_1)
        return 0;

    if (VAR_0->numfriends == 0) {
        return 0;
    }

    uint32_t VAR_3;
    uint32_t VAR_4 = 0;

    for (VAR_3 = 0; VAR_3 < VAR_0->numfriends; VAR_3++) {
        if (VAR_4 >= VAR_2) {
            break;
        }

        if (VAR_0->friendlist[VAR_3].status > 0) {
            VAR_1[VAR_4] = VAR_3;
            VAR_4++;
        }
    }

    return VAR_4;
}
