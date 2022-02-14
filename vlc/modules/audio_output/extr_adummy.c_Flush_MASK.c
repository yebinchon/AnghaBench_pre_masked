
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct aout_sys {scalar_t__ length; int first_play_date; } ;
struct TYPE_3__ {struct aout_sys* sys; } ;
typedef TYPE_1__ audio_output_t ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(audio_output_t *VAR_1)
{
    struct aout_sys *VAR_2 = VAR_1->sys;

    VAR_2->first_play_date = VAR_0;
    VAR_2->length = 0;
}
