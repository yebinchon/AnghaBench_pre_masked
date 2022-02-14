
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* sys; } ;
typedef TYPE_1__ audio_output_t ;
struct TYPE_5__ {int hdl; scalar_t__ delay; scalar_t__ started; } ;
typedef TYPE_2__ aout_sys_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2 (audio_output_t *VAR_0)
{
    aout_sys_t *VAR_1 = VAR_0->sys;

    FUNC_1 (VAR_1->hdl);
    VAR_1->started = 0;
    VAR_1->delay = 0;
    FUNC_0 (VAR_1->hdl);
}
