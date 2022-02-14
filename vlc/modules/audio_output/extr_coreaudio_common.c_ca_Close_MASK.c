
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct aout_sys_common {int flush_sem; } ;
struct TYPE_3__ {scalar_t__ sys; } ;
typedef TYPE_1__ audio_output_t ;


 int FUNC_0 (struct aout_sys_common*) ;
 int FUNC_1 (int *) ;

void
FUNC_2(audio_output_t *VAR_0)
{
    struct aout_sys_common *VAR_1 = (struct aout_sys_common *) VAR_0->sys;

    FUNC_1(&VAR_1->flush_sem);
    FUNC_0(VAR_1);
}
