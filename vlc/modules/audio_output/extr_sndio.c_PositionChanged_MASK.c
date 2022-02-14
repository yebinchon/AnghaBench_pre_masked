
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* sys; } ;
typedef TYPE_1__ audio_output_t ;
struct TYPE_4__ {int delay; int started; } ;
typedef TYPE_2__ aout_sys_t ;



__attribute__((used)) static void FUNC_0 (void *VAR_0, int VAR_1)
{
    audio_output_t *VAR_2 = VAR_0;
    aout_sys_t *VAR_3 = VAR_2->sys;

    VAR_3->delay -= VAR_1;
    VAR_3->started = 1;
}
