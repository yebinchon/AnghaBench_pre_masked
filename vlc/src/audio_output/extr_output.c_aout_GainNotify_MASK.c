
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int audio_output_t ;
struct TYPE_3__ {int volume; int lock; } ;
typedef TYPE_1__ aout_owner_t ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int ,float) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3 (audio_output_t *VAR_0, float VAR_1)
{
    aout_owner_t *VAR_2 = FUNC_0 (VAR_0);

    FUNC_2(&VAR_2->lock);
    FUNC_1 (VAR_2->volume, VAR_1);

    return 0;
}
