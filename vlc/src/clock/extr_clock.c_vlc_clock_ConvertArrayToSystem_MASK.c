
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_tick_t ;
struct TYPE_5__ {int (* to_system_locked ) (TYPE_1__*,int ,int ,double) ;TYPE_2__* owner; } ;
typedef TYPE_1__ vlc_clock_t ;
struct TYPE_6__ {int lock; } ;
typedef TYPE_2__ vlc_clock_main_t ;


 int FUNC_0 (TYPE_1__*,int ,int ,double) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(vlc_clock_t *VAR_0, vlc_tick_t VAR_1,
                                    vlc_tick_t *VAR_2, size_t VAR_3,
                                    double VAR_4)
{
    vlc_clock_main_t *VAR_5 = VAR_0->owner;
    FUNC_1(&VAR_5->lock);
    for (size_t VAR_6 = 0; VAR_6 < VAR_3; ++VAR_6)
        VAR_2[VAR_6] = VAR_0->to_system_locked(VAR_0, VAR_1, VAR_2[VAR_6],
                                              VAR_4);
    FUNC_2(&VAR_5->lock);
}
