
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int lock; TYPE_1__* sources; } ;
struct TYPE_7__ {TYPE_2__ timer; } ;
typedef TYPE_3__ vlc_player_t ;
struct TYPE_5__ {int listeners; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void
FUNC_3(vlc_player_t *VAR_1)
{
    for (size_t VAR_2 = 0; VAR_2 < VAR_0; ++VAR_2)
        FUNC_0(FUNC_1(&VAR_1->timer.sources[VAR_2].listeners));
    FUNC_2(&VAR_1->timer.lock);
}
