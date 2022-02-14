
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ pa_volume_t ;
struct TYPE_5__ {TYPE_2__* sys; } ;
typedef TYPE_1__ audio_output_t ;
struct TYPE_6__ {int cvolume; } ;
typedef TYPE_2__ aout_sys_t ;


 float VAR_0 ;
 int FUNC_0 (TYPE_1__*,float) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(audio_output_t *VAR_1)
{
    aout_sys_t *VAR_2 = VAR_1->sys;
    pa_volume_t VAR_3 = FUNC_1(&VAR_2->cvolume);

    FUNC_0(VAR_1, (float)VAR_3 / VAR_0);
}
