
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {TYPE_1__* closest_peers; } ;
struct TYPE_4__ {int real_pk; int entry; } ;
typedef TYPE_2__ Group_c ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *) ;

__attribute__((used)) static unsigned int FUNC_1(Group_c *VAR_1, uint8_t *VAR_2)
{
    unsigned int VAR_3;

    for (VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3) {
        if (!VAR_1->closest_peers[VAR_3].entry)
            continue;

        if (FUNC_0(VAR_1->closest_peers[VAR_3].real_pk, VAR_2) == 0)
            return 1;

    }

    return 0;
}
