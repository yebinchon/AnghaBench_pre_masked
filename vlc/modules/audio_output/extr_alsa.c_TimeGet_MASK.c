
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_tick_t ;
typedef int snd_pcm_sframes_t ;
struct TYPE_5__ {TYPE_2__* sys; } ;
typedef TYPE_1__ audio_output_t ;
struct TYPE_6__ {int rate; int pcm; } ;
typedef TYPE_2__ aout_sys_t ;


 int FUNC_0 (TYPE_1__*,char*,int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4 (audio_output_t *VAR_0, vlc_tick_t *restrict VAR_1)
{
    aout_sys_t *VAR_2 = VAR_0->sys;
    snd_pcm_sframes_t VAR_3;

    int VAR_4 = FUNC_1 (VAR_2->pcm, &VAR_3);
    if (VAR_4)
    {
        FUNC_0 (VAR_0, "cannot estimate delay: %s", FUNC_2 (VAR_4));
        return -1;
    }
    *VAR_1 = FUNC_3(VAR_3, VAR_2->rate);
    return 0;
}
