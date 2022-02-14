
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_tick_t ;
typedef int snd_pcm_t ;
struct TYPE_4__ {TYPE_2__* sys; } ;
typedef TYPE_1__ audio_output_t ;
struct TYPE_5__ {int * pcm; } ;
typedef TYPE_2__ aout_sys_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2 (audio_output_t *VAR_0, bool VAR_1, vlc_tick_t VAR_2)
{
    aout_sys_t *VAR_3 = VAR_0->sys;
    snd_pcm_t *VAR_4 = VAR_3->pcm;


    if (VAR_1)
        FUNC_0 (VAR_4);
    else
        FUNC_1 (VAR_4);
    (void) VAR_2;
}
