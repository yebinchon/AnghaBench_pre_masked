
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint32_t ;
struct TYPE_5__ {size_t numpeers; TYPE_1__* group; } ;
struct TYPE_4__ {int real_pk; } ;
typedef TYPE_2__ Group_c ;


 scalar_t__ FUNC_0 (int ,int const*) ;

__attribute__((used)) static int FUNC_1(const Group_c *VAR_0, const uint8_t *VAR_1)
{
    uint32_t VAR_2;

    for (VAR_2 = 0; VAR_2 < VAR_0->numpeers; ++VAR_2)
        if (FUNC_0(VAR_0->group[VAR_2].real_pk, VAR_1))
            return VAR_2;

    return -1;
}
