
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int locked; int mutex; scalar_t__ contention; int dynamic; } ;
typedef TYPE_1__ vlc_mutex_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (TYPE_1__*) ;

void FUNC_5 (vlc_mutex_t *VAR_2)
{
    if (!VAR_2->dynamic)
    {
        FUNC_0(&VAR_0);
        FUNC_3 (VAR_2->locked);
        VAR_2->locked = 0;
        if (VAR_2->contention)
            FUNC_2(&VAR_1);
        FUNC_1(&VAR_0);
    }
    else
        FUNC_1 (&VAR_2->mutex);

    FUNC_4(VAR_2);
}
