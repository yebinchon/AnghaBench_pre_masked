
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* sys; } ;
typedef TYPE_1__ audio_output_t ;
struct TYPE_5__ {int * client; } ;
typedef TYPE_2__ aout_sys_t ;
typedef scalar_t__ HRESULT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(audio_output_t *VAR_2, HRESULT VAR_3)
{
    aout_sys_t* VAR_4 = VAR_2->sys;

    if (FUNC_1(VAR_3 == VAR_0 ||
                 VAR_3 == VAR_1))
    {
        VAR_4->client = ((void*)0);
    }
    return FUNC_0(VAR_3) ? 0 : -1;
}
