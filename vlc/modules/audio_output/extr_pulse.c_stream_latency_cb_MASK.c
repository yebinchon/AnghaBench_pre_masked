
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int pa_stream ;
struct TYPE_4__ {TYPE_2__* sys; } ;
typedef TYPE_1__ audio_output_t ;
struct TYPE_5__ {scalar_t__ last_date; } ;
typedef TYPE_2__ aout_sys_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_1__*,scalar_t__) ;

__attribute__((used)) static void FUNC_2(pa_stream *VAR_1, void *VAR_2)
{
    audio_output_t *VAR_3 = VAR_2;
    aout_sys_t *VAR_4 = VAR_3->sys;


    if (VAR_4->last_date == VAR_0)
        return;
    if (FUNC_0(VAR_1) > 0)
        FUNC_1(VAR_1, VAR_3, VAR_4->last_date);
}
