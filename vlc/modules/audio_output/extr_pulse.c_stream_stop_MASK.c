
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
struct TYPE_5__ {int * trigger; int mainloop; } ;
typedef TYPE_2__ aout_sys_t ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,int,int *,int *) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(pa_stream *VAR_0, audio_output_t *VAR_1)
{
    aout_sys_t *VAR_2 = VAR_1->sys;
    pa_operation *VAR_3;

    if (VAR_2->trigger != ((void*)0)) {
        FUNC_2(VAR_2->mainloop, VAR_2->trigger);
        VAR_2->trigger = ((void*)0);
    }

    VAR_3 = FUNC_1(VAR_0, 1, ((void*)0), ((void*)0));
    if (VAR_3 != ((void*)0))
        FUNC_0(VAR_3);
}
