
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
struct aout_sys_common {scalar_t__ i_render_host_time; scalar_t__ i_first_render_host_time; } ;
struct TYPE_4__ {scalar_t__ sys; } ;
typedef TYPE_1__ audio_output_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ const FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct aout_sys_common*) ;
 int FUNC_3 (struct aout_sys_common*) ;
 scalar_t__ const FUNC_4 () ;

int
FUNC_5(audio_output_t *VAR_0, vlc_tick_t *VAR_1)
{
    struct aout_sys_common *VAR_2 = (struct aout_sys_common *) VAR_0->sys;

    FUNC_2(VAR_2);

    if (VAR_2->i_render_host_time == 0 || VAR_2->i_first_render_host_time == 0)
    {

        FUNC_3(VAR_2);
        return -1;
    }

    const vlc_tick_t VAR_3 = FUNC_0(VAR_2->i_render_host_time);
    const vlc_tick_t VAR_4 = VAR_3 - FUNC_4();

    *VAR_1 = FUNC_1(VAR_0) + VAR_4;
    FUNC_3(VAR_2);
    return 0;
}
