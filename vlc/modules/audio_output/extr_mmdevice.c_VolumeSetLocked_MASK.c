
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* sys; } ;
typedef TYPE_1__ audio_output_t ;
struct TYPE_6__ {float gain; float requested_volume; } ;
typedef TYPE_2__ aout_sys_t ;


 int FUNC_0 (TYPE_1__*,float) ;

__attribute__((used)) static int FUNC_1(audio_output_t *VAR_0, float VAR_1)
{
    aout_sys_t *VAR_2 = VAR_0->sys;
    float VAR_3 = 1.f;

    VAR_1 = VAR_1 * VAR_1 * VAR_1;

    if (VAR_1 > 1.f)
    {
        VAR_3 = VAR_1;
        VAR_1 = 1.f;
    }

    FUNC_0(VAR_0, VAR_3);

    VAR_2->gain = VAR_3;
    VAR_2->requested_volume = VAR_1;
    return 0;
}
