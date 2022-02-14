
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* sources; int lock; } ;
struct TYPE_10__ {TYPE_2__ timer; } ;
typedef TYPE_4__ vlc_player_t ;
struct TYPE_9__ {int system_date; } ;
struct TYPE_7__ {int * es; TYPE_3__ point; int listeners; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_4__*) ;

void
FUNC_3(vlc_player_t *VAR_2)
{
    FUNC_1(&VAR_2->timer.lock);

    for (size_t VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3)
    {
        FUNC_0(&VAR_2->timer.sources[VAR_3].listeners);
        VAR_2->timer.sources[VAR_3].point.system_date = VAR_1;
        VAR_2->timer.sources[VAR_3].es = ((void*)0);
    }
    FUNC_2(VAR_2);
}
