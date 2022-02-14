
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct aout_sys_common {int b_do_flush; int b_played; scalar_t__ i_render_frames; scalar_t__ i_first_render_host_time; scalar_t__ i_render_host_time; int flush_sem; scalar_t__ b_paused; } ;
struct TYPE_4__ {scalar_t__ sys; } ;
typedef TYPE_1__ audio_output_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct aout_sys_common*) ;
 int FUNC_3 (struct aout_sys_common*) ;
 int FUNC_4 (int *) ;

void
FUNC_5(audio_output_t *VAR_0)
{
    struct aout_sys_common *VAR_1 = (struct aout_sys_common *) VAR_0->sys;

    FUNC_2(VAR_1);

    FUNC_0(!VAR_1->b_do_flush);
    if (VAR_1->b_paused)
        FUNC_1(VAR_0);
    else
    {
        VAR_1->b_do_flush = 1;
        FUNC_3(VAR_1);
        FUNC_4(&VAR_1->flush_sem);
        FUNC_2(VAR_1);
    }

    VAR_1->i_render_host_time = VAR_1->i_first_render_host_time = 0;
    VAR_1->i_render_frames = 0;
    FUNC_3(VAR_1);

    VAR_1->b_played = 0;
}
