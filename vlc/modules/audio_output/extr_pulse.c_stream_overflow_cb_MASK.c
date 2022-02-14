
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int pa_stream ;
typedef int pa_operation ;
struct TYPE_4__ {TYPE_2__* sys; } ;
typedef TYPE_1__ audio_output_t ;
struct TYPE_5__ {int last_date; } ;
typedef TYPE_2__ aout_sys_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,int *,int *) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(pa_stream *VAR_1, void *VAR_2)
{
    audio_output_t *VAR_3 = VAR_2;
    aout_sys_t *VAR_4 = VAR_3->sys;
    pa_operation *VAR_5;

    FUNC_0(VAR_3, "overflow, flushing");
    VAR_5 = FUNC_2(VAR_1, ((void*)0), ((void*)0));
    if (FUNC_3(VAR_5 == ((void*)0)))
        return;
    FUNC_1(VAR_5);
    VAR_4->last_date = VAR_0;
}
