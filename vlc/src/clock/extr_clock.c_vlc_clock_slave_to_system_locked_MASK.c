
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
struct TYPE_6__ {double delay; TYPE_2__* owner; } ;
typedef TYPE_1__ vlc_clock_t ;
struct TYPE_7__ {scalar_t__ pause_date; double delay; } ;
typedef TYPE_2__ vlc_clock_main_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_1__*,scalar_t__,scalar_t__,double) ;

__attribute__((used)) static vlc_tick_t FUNC_2(vlc_clock_t *VAR_2,
                                                   vlc_tick_t VAR_3,
                                                   vlc_tick_t VAR_4, double VAR_5)
{
    vlc_clock_main_t *VAR_6 = VAR_2->owner;
    if (VAR_6->pause_date != VAR_1)
        return VAR_0;

    vlc_tick_t VAR_7 = FUNC_0(VAR_6, VAR_4);
    if (VAR_7 == VAR_1)
    {


        VAR_7 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5);
    }

    return VAR_7 + (VAR_2->delay - VAR_6->delay) * VAR_5;
}
