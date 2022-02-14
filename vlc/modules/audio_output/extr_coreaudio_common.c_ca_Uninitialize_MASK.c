
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct aout_sys_common {scalar_t__ i_out_max_size; } ;
struct TYPE_4__ {scalar_t__ sys; } ;
typedef TYPE_1__ audio_output_t ;


 int FUNC_0 (TYPE_1__*) ;

void
FUNC_1(audio_output_t *VAR_0)
{
    struct aout_sys_common *VAR_1 = (struct aout_sys_common *) VAR_0->sys;
    FUNC_0(VAR_0);
    VAR_1->i_out_max_size = 0;
}
