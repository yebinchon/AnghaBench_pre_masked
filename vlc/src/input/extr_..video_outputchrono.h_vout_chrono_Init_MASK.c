
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int shift; int avg_initial; int avg; int shift_var; int var; int start; } ;
typedef TYPE_1__ vout_chrono_t ;
typedef int vlc_tick_t ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(vout_chrono_t *VAR_1, int VAR_2, vlc_tick_t VAR_3)
{
    VAR_1->shift = VAR_2;
    VAR_1->avg_initial =
    VAR_1->avg = VAR_3;

    VAR_1->shift_var = VAR_2+1;
    VAR_1->var = VAR_3 / 2;

    VAR_1->start = VAR_0;
}
