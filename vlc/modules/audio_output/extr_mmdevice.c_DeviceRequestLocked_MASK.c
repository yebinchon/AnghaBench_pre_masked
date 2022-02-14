
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* sys; } ;
typedef TYPE_1__ audio_output_t ;
struct TYPE_6__ {int request_device_restart; int * dev; int * stream; int lock; int ready; int * requested_device; int work; } ;
typedef TYPE_2__ aout_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(audio_output_t *VAR_2)
{
    aout_sys_t *VAR_3 = VAR_2->sys;
    FUNC_3(VAR_3->requested_device);

    VAR_3->request_device_restart = 0;

    FUNC_1(&VAR_3->work);
    while (VAR_3->requested_device != ((void*)0))
        FUNC_0(&VAR_3->ready, &VAR_3->lock, VAR_1);

    if (VAR_3->stream != ((void*)0) && VAR_3->dev != ((void*)0))

        FUNC_2(VAR_2, VAR_0);
    return (VAR_3->dev != ((void*)0)) ? 0 : -1;
}
