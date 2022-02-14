
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct timeval {int dummy; } ;
typedef int pa_time_event ;
typedef int pa_mainloop_api ;
struct TYPE_5__ {TYPE_2__* sys; } ;
typedef TYPE_1__ audio_output_t ;
struct TYPE_6__ {int stream; int * trigger; int mainloop; } ;
typedef TYPE_2__ aout_sys_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(pa_mainloop_api *VAR_0, pa_time_event *VAR_1,
                              const struct timeval *VAR_2, void *VAR_3)
{
    audio_output_t *VAR_4 = VAR_3;
    aout_sys_t *VAR_5 = VAR_4->sys;

    FUNC_0 (VAR_5->trigger == VAR_1);

    FUNC_1(VAR_4, "starting deferred");
    FUNC_3(VAR_5->mainloop, VAR_5->trigger);
    VAR_5->trigger = ((void*)0);
    FUNC_2(VAR_5->stream, VAR_4);
    (void) VAR_0; (void) VAR_1; (void) VAR_2;
}
