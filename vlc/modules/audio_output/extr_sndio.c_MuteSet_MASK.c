
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* sys; } ;
typedef TYPE_1__ audio_output_t ;
struct TYPE_5__ {int mute; int volume; int hdl; } ;
typedef TYPE_2__ aout_sys_t ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1 (audio_output_t *VAR_0, bool VAR_1)
{
    aout_sys_t *VAR_2 = VAR_0->sys;

    if (!FUNC_0 (VAR_2->hdl, VAR_1 ? 0 : VAR_2->volume))
        return -1;

    VAR_2->mute = VAR_1;
    return 0;
}
