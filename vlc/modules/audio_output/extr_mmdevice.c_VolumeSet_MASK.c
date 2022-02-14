
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* sys; } ;
typedef TYPE_1__ audio_output_t ;
struct TYPE_6__ {int lock; int work; } ;
typedef TYPE_2__ aout_sys_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,float) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(audio_output_t *VAR_0, float VAR_1)
{
    aout_sys_t *VAR_2 = VAR_0->sys;

    FUNC_0(&VAR_2->lock);
    int VAR_3 = FUNC_2(VAR_0, VAR_1);
    FUNC_3(&VAR_2->work);
    FUNC_1(&VAR_2->lock);
    return VAR_3;
}
