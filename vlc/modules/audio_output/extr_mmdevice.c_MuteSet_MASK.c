
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* sys; } ;
typedef TYPE_1__ audio_output_t ;
struct TYPE_5__ {int requested_mute; int lock; int work; } ;
typedef TYPE_2__ aout_sys_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(audio_output_t *VAR_0, bool VAR_1)
{
    aout_sys_t *VAR_2 = VAR_0->sys;

    FUNC_0(&VAR_2->lock);
    VAR_2->requested_mute = VAR_1;
    FUNC_2(&VAR_2->work);
    FUNC_1(&VAR_2->lock);
    return 0;
}
