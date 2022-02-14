
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int frontend; int demux; int dir; int * cam; TYPE_1__* pids; int budget; } ;
typedef TYPE_2__ dvb_device_t ;
struct TYPE_5__ {int fd; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int) ;

void FUNC_3 (dvb_device_t *VAR_1)
{

    if (!VAR_1->budget)
    {
        for (size_t VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
            if (VAR_1->pids[VAR_2].fd != -1)
                FUNC_2 (VAR_1->pids[VAR_2].fd);
    }

    if (VAR_1->cam != ((void*)0))
        FUNC_0 (VAR_1->cam);
    if (VAR_1->frontend != -1)
        FUNC_2 (VAR_1->frontend);
    FUNC_2 (VAR_1->demux);
    FUNC_2 (VAR_1->dir);
    FUNC_1 (VAR_1);
}
