
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_5__ {TYPE_1__* pids; int demux; scalar_t__ budget; } ;
typedef TYPE_2__ dvb_device_t ;
struct TYPE_4__ {scalar_t__ pid; int fd; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,int ,scalar_t__*) ;
 int FUNC_1 (int) ;

void FUNC_2 (dvb_device_t *VAR_2, uint16_t VAR_3)
{
    if (VAR_2->budget)
        return;




    for (size_t VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
    {
        if (VAR_2->pids[VAR_4].pid == VAR_3)
        {
            FUNC_1 (VAR_2->pids[VAR_4].fd);
            VAR_2->pids[VAR_4].pid = VAR_2->pids[VAR_4].fd = -1;
            return;
        }
    }

}
