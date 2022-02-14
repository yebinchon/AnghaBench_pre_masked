
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_4__ {TYPE_2__* sys; } ;
typedef TYPE_1__ audio_output_t ;
struct TYPE_5__ {int lock; int thread; int work; int * it; int requested_device; } ;
typedef TYPE_2__ aout_sys_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(vlc_object_t *VAR_1)
{
    audio_output_t *VAR_2 = (audio_output_t *)VAR_1;
    aout_sys_t *VAR_3 = VAR_2->sys;

    FUNC_1(&VAR_3->lock);
    VAR_3->requested_device = VAR_0;
    VAR_3->it = ((void*)0);
    FUNC_3(&VAR_3->work);
    FUNC_2(&VAR_3->lock);

    FUNC_5(VAR_3->thread, ((void*)0));
    FUNC_0(&VAR_3->lock);

    FUNC_4(VAR_3);
}
