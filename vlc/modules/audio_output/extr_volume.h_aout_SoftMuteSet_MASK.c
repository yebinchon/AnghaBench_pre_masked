
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* sys; } ;
typedef TYPE_1__ audio_output_t ;
struct TYPE_7__ {float soft_gain; int soft_mute; } ;
typedef TYPE_2__ aout_sys_t ;


 scalar_t__ FUNC_0 (TYPE_1__*,float) ;
 int FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_2 (audio_output_t *VAR_0, bool VAR_1)
{
    aout_sys_t *VAR_2 = VAR_0->sys;

    if (FUNC_0(VAR_0, VAR_1 ? 0.f : VAR_2->soft_gain))
        return -1;
    VAR_2->soft_mute = VAR_1;

    FUNC_1(VAR_0, VAR_1);
    return 0;
}
