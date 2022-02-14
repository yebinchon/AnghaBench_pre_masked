
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int locked; int mutex; int dynamic; } ;
typedef TYPE_1__ vlc_mutex_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__*) ;

int FUNC_4 (vlc_mutex_t *VAR_2)
{
    int VAR_3;

    if (!VAR_2->dynamic)
    {
        FUNC_0(&VAR_1);
        if (!VAR_2->locked)
        {
            VAR_2->locked = 1;
            VAR_3 = 0;
        }
        else
            VAR_3 = VAR_0;
        FUNC_1(&VAR_1);
    }
    else
        VAR_3 = FUNC_2 (&VAR_2->mutex) ? 0 : VAR_0;

    if (VAR_3 == 0)
        FUNC_3(VAR_2);

    return VAR_3;
}
