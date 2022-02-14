
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct aout_sys_common {int b_paused; int b_do_flush; int b_played; int flush_sem; } ;
struct TYPE_4__ {scalar_t__ sys; } ;
typedef TYPE_1__ audio_output_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct aout_sys_common*) ;
 int FUNC_2 (struct aout_sys_common*) ;
 int FUNC_3 (int *) ;

void
FUNC_4(audio_output_t *VAR_0, bool VAR_1)
{
    struct aout_sys_common *VAR_2 = (struct aout_sys_common *) VAR_0->sys;

    FUNC_1(VAR_2);

    bool VAR_3 = 0;
    VAR_2->b_paused = !VAR_1;
    if (!VAR_1 && VAR_2->b_do_flush)
    {
        FUNC_0(VAR_0);
        VAR_2->b_played = 0;
        VAR_2->b_do_flush = 0;
        VAR_3 = 1;
    }

    FUNC_2(VAR_2);

    if (VAR_3)
        FUNC_3(&VAR_2->flush_sem);
}
