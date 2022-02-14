
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
struct TYPE_4__ {double delay; int * owner; } ;
typedef TYPE_1__ vlc_clock_t ;
typedef int vlc_clock_main_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_1__*,scalar_t__,scalar_t__,double) ;

__attribute__((used)) static vlc_tick_t FUNC_2(vlc_clock_t *VAR_1,
                                                    vlc_tick_t VAR_2,
                                                    vlc_tick_t VAR_3, double VAR_4)
{
    vlc_clock_main_t *VAR_5 = VAR_1->owner;
    vlc_tick_t VAR_6 = FUNC_0(VAR_5, VAR_3);
    if (VAR_6 == VAR_0)
    {


        VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);
    }

    return VAR_6 + VAR_1->delay * VAR_4;
}
