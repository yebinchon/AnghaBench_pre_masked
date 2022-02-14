
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
struct TYPE_3__ {scalar_t__ offset; scalar_t__ coeff; scalar_t__ rate; } ;
typedef TYPE_1__ vlc_clock_main_t ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static vlc_tick_t FUNC_0(vlc_clock_main_t *VAR_1,
                                        vlc_tick_t VAR_2)
{
    if (VAR_1->offset == VAR_0)
        return VAR_0;
    return (vlc_tick_t)
        (VAR_2 * VAR_1->coeff / VAR_1->rate + VAR_1->offset);
}
