
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_2__ {int stop; int start; int * sys; } ;
typedef TYPE_1__ audio_output_t ;
typedef int aout_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2 (vlc_object_t *VAR_4)
{
    audio_output_t *VAR_5 = (audio_output_t *)VAR_4;
    aout_sys_t *VAR_6 = FUNC_0 (sizeof (*VAR_6));
    if (FUNC_1(VAR_6 == ((void*)0)))
        return VAR_2;

    VAR_5->sys = VAR_6;
    VAR_5->start = VAR_0;
    VAR_5->stop = VAR_1;

    return VAR_3;
}
