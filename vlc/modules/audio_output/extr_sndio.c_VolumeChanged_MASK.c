
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* sys; } ;
typedef TYPE_1__ audio_output_t ;
struct TYPE_6__ {unsigned int volume; } ;
typedef TYPE_2__ aout_sys_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,float) ;

__attribute__((used)) static void FUNC_2 (void *VAR_1, unsigned VAR_2)
{
    audio_output_t *VAR_3 = VAR_1;
    aout_sys_t *VAR_4 = VAR_3->sys;
    float VAR_5 = (float)VAR_2 / (float)VAR_0;

    FUNC_1 (VAR_3, VAR_5);
    FUNC_0 (VAR_3, VAR_2 == 0);
    if (VAR_2)
        VAR_4->volume = VAR_2;
}
