
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint32_t ;
typedef size_t int32_t ;
struct TYPE_5__ {size_t numfriends; TYPE_1__* friendlist; } ;
struct TYPE_4__ {scalar_t__ status; int real_pk; } ;
typedef TYPE_2__ Messenger ;


 scalar_t__ FUNC_0 (int const*,int ) ;

int32_t FUNC_1(const Messenger *VAR_0, const uint8_t *VAR_1)
{
    uint32_t VAR_2;

    for (VAR_2 = 0; VAR_2 < VAR_0->numfriends; ++VAR_2) {
        if (VAR_0->friendlist[VAR_2].status > 0)
            if (FUNC_0(VAR_1, VAR_0->friendlist[VAR_2].real_pk))
                return VAR_2;
    }

    return -1;
}
