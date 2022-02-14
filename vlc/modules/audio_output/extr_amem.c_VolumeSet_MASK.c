
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* sys; } ;
typedef TYPE_1__ audio_output_t ;
struct TYPE_5__ {float volume; int (* set_volume ) (int ,float,int ) ;int lock; int mute; int opaque; scalar_t__ ready; } ;
typedef TYPE_2__ aout_sys_t ;


 int FUNC_0 (int ,float,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3 (audio_output_t *VAR_0, float VAR_1)
{
    aout_sys_t *VAR_2 = VAR_0->sys;
    int VAR_3;

    VAR_2->volume = VAR_1;

    FUNC_1(&VAR_2->lock);
    if (VAR_2->ready)
        VAR_3 = VAR_2->set_volume(VAR_2->opaque, VAR_1, VAR_2->mute);
    else
        VAR_3 = 0;
    FUNC_2(&VAR_2->lock);

    return VAR_3 ? -1 : 0;
}
