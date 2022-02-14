
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* sys; } ;
typedef TYPE_1__ audio_output_t ;
struct TYPE_6__ {int * acquired_device; int * requested_device; } ;
typedef TYPE_2__ aout_sys_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int * VAR_0 ;

__attribute__((used)) static int FUNC_2(audio_output_t *VAR_1)
{
    aout_sys_t *VAR_2 = VAR_1->sys;
    FUNC_1(VAR_2->requested_device == ((void*)0));
    VAR_2->requested_device = VAR_2->acquired_device ? VAR_2->acquired_device
                                                 : VAR_0;
    return FUNC_0(VAR_1);
}
