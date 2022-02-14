
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_5__ {TYPE_1__* pids; scalar_t__ budget; } ;
typedef TYPE_2__ dvb_device_t ;
struct TYPE_4__ {scalar_t__ pid; } ;


 size_t VAR_0 ;

bool FUNC_0 (const dvb_device_t *VAR_1, uint16_t VAR_2)
{
    if (VAR_1->budget)
        return 1;

    for (size_t VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
        if (VAR_1->pids[VAR_3].pid == VAR_2)
            return 1;

    return 0;
}
