
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
struct TYPE_6__ {scalar_t__ delay; TYPE_2__* owner; } ;
typedef TYPE_1__ vlc_clock_t ;
struct TYPE_7__ {scalar_t__ delay; int lock; } ;
typedef TYPE_2__ vlc_clock_main_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*,int ,int ,float,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(vlc_clock_t *VAR_1)
{
    vlc_clock_main_t *VAR_2 = VAR_1->owner;

    FUNC_3(&VAR_2->lock);
    FUNC_1(VAR_2);

    FUNC_0(VAR_2->delay <= 0);
    FUNC_0(VAR_1->delay >= 0);

    if (VAR_1->delay != 0 && VAR_2->delay != 0)
    {
        vlc_tick_t VAR_3 = VAR_1->delay + VAR_2->delay;
        if (VAR_3 > 0)
        {
            VAR_1->delay = VAR_3;
            VAR_2->delay = 0;
        }
        else
        {
            VAR_1->delay = 0;
            VAR_2->delay = VAR_3;
        }
    }

    FUNC_4(&VAR_2->lock);

    FUNC_2(VAR_1, VAR_0, VAR_0, 1.f, 0, 0);
}
