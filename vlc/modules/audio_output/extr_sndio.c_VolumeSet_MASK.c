
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* sys; } ;
typedef TYPE_1__ audio_output_t ;
struct TYPE_5__ {unsigned int volume; int hdl; int mute; } ;
typedef TYPE_2__ aout_sys_t ;


 float VAR_0 ;
 unsigned int FUNC_0 (float) ;
 int FUNC_1 (int ,unsigned int) ;

__attribute__((used)) static int FUNC_2 (audio_output_t *VAR_1, float VAR_2)
{
    aout_sys_t *VAR_3 = VAR_1->sys;
    unsigned VAR_4;

    if (VAR_2 < 0)
        VAR_2 = 0;
    if (VAR_2 > 1)
        VAR_2 = 1;
    VAR_4 = FUNC_0 (VAR_2 * VAR_0);
    if (!VAR_3->mute && !FUNC_1 (VAR_3->hdl, VAR_4))
        return -1;
    VAR_3->volume = VAR_4;
    return 0;
}
