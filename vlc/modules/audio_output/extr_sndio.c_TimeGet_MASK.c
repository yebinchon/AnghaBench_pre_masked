
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_tick_t ;
struct TYPE_4__ {TYPE_2__* sys; } ;
typedef TYPE_1__ audio_output_t ;
struct TYPE_5__ {int rate; int delay; int started; } ;
typedef TYPE_2__ aout_sys_t ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1 (audio_output_t *VAR_0, vlc_tick_t *restrict VAR_1)
{
    aout_sys_t *VAR_2 = VAR_0->sys;

    if (!VAR_2->started)
        return -1;
    *VAR_1 = FUNC_0(VAR_2->delay, VAR_2->rate);
    return 0;
}
