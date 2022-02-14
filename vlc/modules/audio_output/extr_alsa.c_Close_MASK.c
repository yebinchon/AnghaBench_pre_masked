
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_4__ {TYPE_2__* sys; } ;
typedef TYPE_1__ audio_output_t ;
struct TYPE_5__ {struct TYPE_5__* device; } ;
typedef TYPE_2__ aout_sys_t ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_1(vlc_object_t *VAR_0)
{
    audio_output_t *VAR_1 = (audio_output_t *)VAR_0;
    aout_sys_t *VAR_2 = VAR_1->sys;

    FUNC_0 (VAR_2->device);
    FUNC_0 (VAR_2);
}
