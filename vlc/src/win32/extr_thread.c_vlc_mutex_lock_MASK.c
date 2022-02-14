
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int locked; int mutex; int contention; int dynamic; } ;
typedef TYPE_1__ vlc_mutex_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (TYPE_1__*) ;

void FUNC_4 (vlc_mutex_t *VAR_3)
{
    if (!VAR_3->dynamic)
    {
        FUNC_0(&VAR_1);
        while (VAR_3->locked)
        {
            VAR_3->contention++;
            FUNC_2(&VAR_2, &VAR_1, VAR_0);
            VAR_3->contention--;
        }
        VAR_3->locked = 1;
        FUNC_1(&VAR_1);
    }
    else
        FUNC_0 (&VAR_3->mutex);

    FUNC_3(VAR_3);
}
