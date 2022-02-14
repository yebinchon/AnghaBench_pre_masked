
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
struct TYPE_5__ {scalar_t__ (* to_system_locked ) (TYPE_1__*,scalar_t__,scalar_t__,double) ;TYPE_2__* owner; } ;
typedef TYPE_1__ vlc_clock_t ;
struct TYPE_6__ {scalar_t__ pause_date; int lock; int cond; int abort; } ;
typedef TYPE_2__ vlc_clock_main_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__ const) ;
 scalar_t__ FUNC_1 (TYPE_1__*,scalar_t__,scalar_t__,double) ;
 scalar_t__ FUNC_2 (int *,int *,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(vlc_clock_t *VAR_2, vlc_tick_t VAR_3, vlc_tick_t VAR_4,
                   double VAR_5, vlc_tick_t VAR_6)
{
    vlc_clock_main_t *VAR_7 = VAR_2->owner;
    FUNC_3(&VAR_7->lock);
    const vlc_tick_t VAR_8 =
        VAR_6 > 0 ? VAR_3 + VAR_6 : VAR_0;
    while (!VAR_7->abort)
    {
        vlc_tick_t VAR_9;
        if (VAR_7->pause_date != VAR_1)
            VAR_9 = VAR_0;
        else
            VAR_9 = VAR_2->to_system_locked(VAR_2, VAR_3, VAR_4, VAR_5);
        VAR_9 = FUNC_0(VAR_9, VAR_8);

        if (FUNC_2(&VAR_7->cond, &VAR_7->lock, VAR_9))
        {
            FUNC_4(&VAR_7->lock);
            return 0;
        }
    }
    FUNC_4(&VAR_7->lock);
    return -1;
}
