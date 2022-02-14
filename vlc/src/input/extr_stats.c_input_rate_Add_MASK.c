
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
typedef scalar_t__ uintmax_t ;
struct TYPE_5__ {int lock; TYPE_2__* samples; int value; int updates; } ;
typedef TYPE_1__ input_rate_t ;
struct TYPE_6__ {scalar_t__ date; int value; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_2__*,TYPE_2__*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 () ;

void FUNC_5(input_rate_t *VAR_1, uintmax_t VAR_2)
{
    FUNC_2(&VAR_1->lock);
    VAR_1->updates++;
    VAR_1->value += VAR_2;


    vlc_tick_t VAR_3 = FUNC_4();
    if (VAR_1->samples[0].date != VAR_0
     && (VAR_3 - VAR_1->samples[0].date) < FUNC_0(1))
    {
        FUNC_3(&VAR_1->lock);
        return;
    }

    FUNC_1(VAR_1->samples + 1, VAR_1->samples,
           sizeof (VAR_1->samples[0]));

    VAR_1->samples[0].value = VAR_1->value;
    VAR_1->samples[0].date = VAR_3;
    FUNC_3(&VAR_1->lock);
}
