
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {unsigned int num_friends; TYPE_1__* friends_list; } ;
struct TYPE_4__ {scalar_t__ status; int real_public_key; } ;
typedef TYPE_2__ Onion_Client ;


 scalar_t__ FUNC_0 (int const*,int ) ;

int FUNC_1(const Onion_Client *VAR_0, const uint8_t *VAR_1)
{
    unsigned int VAR_2;

    for (VAR_2 = 0; VAR_2 < VAR_0->num_friends; ++VAR_2) {
        if (VAR_0->friends_list[VAR_2].status == 0)
            continue;

        if (FUNC_0(VAR_1, VAR_0->friends_list[VAR_2].real_public_key) == 0)
            return VAR_2;
    }

    return -1;
}
