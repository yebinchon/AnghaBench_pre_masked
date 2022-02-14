
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
struct aout_sys_common {scalar_t__ i_dev_latency_us; scalar_t__ const i_render_frames; int i_out_size; } ;
typedef scalar_t__ int64_t ;
struct TYPE_3__ {scalar_t__ sys; } ;
typedef TYPE_1__ audio_output_t ;


 scalar_t__ FUNC_0 (struct aout_sys_common*,int ) ;
 scalar_t__ FUNC_1 (struct aout_sys_common*,scalar_t__ const) ;

__attribute__((used)) static vlc_tick_t
FUNC_2(audio_output_t *VAR_0)
{
    struct aout_sys_common *VAR_1 = (struct aout_sys_common *) VAR_0->sys;

    const int64_t VAR_2 = FUNC_0(VAR_1, VAR_1->i_out_size);
    return FUNC_1(VAR_1, VAR_2 + VAR_1->i_render_frames)
           + VAR_1->i_dev_latency_us;
}
