
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_2__ {scalar_t__ file; } ;


 size_t VAR_0 ;
 TYPE_1__* VAR_1 ;

int FUNC_0()
{
    uint32_t VAR_2;

    for (VAR_2 = 0; VAR_2 < VAR_0; ++VAR_2)
        if (VAR_1[VAR_2].file != 0)
            return 0;

    return 1;
}
