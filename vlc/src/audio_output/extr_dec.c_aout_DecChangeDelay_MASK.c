
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_tick_t ;
typedef int audio_output_t ;
struct TYPE_4__ {int request_delay; } ;
struct TYPE_5__ {TYPE_1__ sync; } ;
typedef TYPE_2__ aout_owner_t ;


 TYPE_2__* FUNC_0 (int *) ;

void FUNC_1(audio_output_t *VAR_0, vlc_tick_t VAR_1)
{
    aout_owner_t *VAR_2 = FUNC_0(VAR_0);

    VAR_2->sync.request_delay = VAR_1;
}
