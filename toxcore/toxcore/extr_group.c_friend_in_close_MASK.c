
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_5__ {TYPE_1__* close; } ;
struct TYPE_4__ {scalar_t__ type; scalar_t__ number; } ;
typedef TYPE_2__ Group_c ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;

__attribute__((used)) static int FUNC_0(Group_c *VAR_2, int VAR_3)
{
    unsigned int VAR_4;

    for (VAR_4 = 0; VAR_4 < VAR_1; ++VAR_4) {
        if (VAR_2->close[VAR_4].type == VAR_0)
            continue;

        if (VAR_2->close[VAR_4].number != (uint32_t)VAR_3)
            continue;

        return VAR_4;
    }

    return -1;
}
