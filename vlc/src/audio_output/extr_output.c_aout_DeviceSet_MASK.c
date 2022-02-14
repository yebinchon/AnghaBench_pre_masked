
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int (* device_select ) (TYPE_1__*,char const*) ;} ;
typedef TYPE_1__ audio_output_t ;
struct TYPE_8__ {int lock; } ;
typedef TYPE_2__ aout_owner_t ;


 TYPE_2__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,char const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4 (audio_output_t *VAR_0, const char *VAR_1)
{
    aout_owner_t *VAR_2 = FUNC_0(VAR_0);
    int VAR_3;

    FUNC_2(&VAR_2->lock);
    VAR_3 = VAR_0->device_select(VAR_0, VAR_1);
    FUNC_3(&VAR_2->lock);
    return VAR_3 ? -1 : 0;
}
