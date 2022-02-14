
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint32_t ;
struct TYPE_5__ {size_t num_friends; TYPE_1__* friends_list; } ;
struct TYPE_4__ {int public_key; } ;
typedef TYPE_2__ DHT ;


 scalar_t__ FUNC_0 (int ,int const*) ;

__attribute__((used)) static int FUNC_1(const DHT *VAR_0, const uint8_t *VAR_1)
{
    uint32_t VAR_2;

    for (VAR_2 = 0; VAR_2 < VAR_0->num_friends; ++VAR_2) {
        if (FUNC_0(VAR_0->friends_list[VAR_2].public_key, VAR_1))
            return VAR_2;
    }

    return -1;
}
