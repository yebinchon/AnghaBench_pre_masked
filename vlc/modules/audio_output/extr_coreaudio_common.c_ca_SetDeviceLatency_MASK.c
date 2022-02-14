
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_tick_t ;
struct aout_sys_common {int i_dev_latency_us; } ;
struct TYPE_3__ {scalar_t__ sys; } ;
typedef TYPE_1__ audio_output_t ;


 int FUNC_0 (struct aout_sys_common*) ;
 int FUNC_1 (struct aout_sys_common*) ;

void FUNC_2(audio_output_t *VAR_0, vlc_tick_t VAR_1)
{
    struct aout_sys_common *VAR_2 = (struct aout_sys_common *) VAR_0->sys;

    FUNC_0(VAR_2);
    VAR_2->i_dev_latency_us = VAR_1;
    FUNC_1(VAR_2);
}
