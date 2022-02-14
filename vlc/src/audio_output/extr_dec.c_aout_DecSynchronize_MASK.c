
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
struct TYPE_12__ {scalar_t__ (* time_get ) (TYPE_2__*,scalar_t__*) ;} ;
typedef TYPE_2__ audio_output_t ;
struct TYPE_11__ {int rate; int clock; scalar_t__ discontinuity; } ;
struct TYPE_13__ {TYPE_1__ sync; } ;
typedef TYPE_3__ aout_owner_t ;


 int FUNC_0 (TYPE_2__*,scalar_t__,scalar_t__) ;
 int FUNC_1 (TYPE_2__*,scalar_t__,scalar_t__) ;
 TYPE_3__* FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,scalar_t__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*,scalar_t__*) ;
 scalar_t__ FUNC_5 (int ,scalar_t__,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_6(audio_output_t *VAR_0, vlc_tick_t VAR_1,
                                vlc_tick_t VAR_2)
{
    aout_owner_t *VAR_3 = FUNC_2 (VAR_0);
    vlc_tick_t VAR_4;

    if (VAR_0->time_get(VAR_0, &VAR_4) != 0)
        return;

    if (VAR_3->sync.discontinuity)
    {
        vlc_tick_t VAR_5 =
            FUNC_5(VAR_3->sync.clock, VAR_1 + VAR_4,
                                      VAR_2, VAR_3->sync.rate);
        vlc_tick_t VAR_6 = VAR_5 - VAR_1;
        if (VAR_6 > 0)
        {
            FUNC_0 (VAR_0, VAR_6, VAR_2 - VAR_4);
            if (VAR_0->time_get(VAR_0, &VAR_4) != 0)
                return;
        }
    }

    FUNC_1(VAR_0, VAR_1 + VAR_4, VAR_2);
}
