
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* sys; } ;
typedef TYPE_1__ audio_output_t ;
struct TYPE_8__ {float soft_gain; scalar_t__ soft_mute; } ;
typedef TYPE_2__ aout_sys_t ;


 scalar_t__ FUNC_0 (TYPE_1__*,float) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,float) ;

__attribute__((used)) static void FUNC_3 (audio_output_t *VAR_0)
{
    aout_sys_t *VAR_1 = VAR_0->sys;

    if (FUNC_0(VAR_0, VAR_1->soft_mute ? 0.f : VAR_1->soft_gain))
    {
        FUNC_1(VAR_0, 0);
        FUNC_2(VAR_0, 1.f);
    }
}
