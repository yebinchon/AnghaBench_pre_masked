
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_tick_t ;
struct TYPE_4__ {TYPE_2__* owner; } ;
typedef TYPE_1__ vlc_clock_t ;
struct TYPE_5__ {int lock; int output_dejitter; } ;
typedef TYPE_2__ vlc_clock_main_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(vlc_clock_t *VAR_0, vlc_tick_t VAR_1)
{
    vlc_clock_main_t *VAR_2 = VAR_0->owner;

    FUNC_0(&VAR_2->lock);
    VAR_2->output_dejitter = VAR_1;
    FUNC_1(&VAR_2->lock);
}
