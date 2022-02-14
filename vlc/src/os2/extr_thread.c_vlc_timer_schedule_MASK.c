
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* vlc_timer_t ;
typedef int vlc_tick_t ;
struct TYPE_3__ {scalar_t__ htimer; scalar_t__ hev; scalar_t__ interval; } ;
typedef int HSEM ;


 scalar_t__ FUNC_0 (scalar_t__,int ,scalar_t__*) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 () ;

void FUNC_5 (vlc_timer_t VAR_2, bool VAR_3,
                         vlc_tick_t VAR_4, vlc_tick_t VAR_5)
{
    if (VAR_2->htimer != VAR_0)
    {
        FUNC_1 (VAR_2->htimer);
        VAR_2->htimer = VAR_0;
        VAR_2->interval = 0;
    }

    if (VAR_4 == VAR_1)
        return;

    if (VAR_3)
        VAR_4 -= FUNC_4 ();
    VAR_4 = (VAR_4 + 999) / 1000;
    VAR_5 = (VAR_5 + 999) / 1000;

    VAR_2->interval = FUNC_2(VAR_5);
    if (FUNC_0 (FUNC_2(VAR_4), (HSEM)VAR_2->hev, &VAR_2->htimer))
        FUNC_3 ();
}
