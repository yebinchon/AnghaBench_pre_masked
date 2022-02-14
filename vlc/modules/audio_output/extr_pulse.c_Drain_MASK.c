
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
typedef int pa_stream ;
typedef int pa_operation ;
struct TYPE_7__ {TYPE_2__* sys; } ;
typedef TYPE_1__ audio_output_t ;
struct TYPE_8__ {int mainloop; int last_date; int * trigger; int * stream; } ;
typedef TYPE_2__ aout_sys_t ;


 scalar_t__ FUNC_0 (TYPE_1__*,scalar_t__*) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,int *,int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,TYPE_1__*) ;
 int FUNC_8 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (scalar_t__) ;

__attribute__((used)) static void FUNC_12(audio_output_t *VAR_1)
{
    aout_sys_t *VAR_2 = VAR_1->sys;
    pa_stream *VAR_3 = VAR_2->stream;

    FUNC_5(VAR_2->mainloop);

    if (FUNC_9(FUNC_4(VAR_3) > 0))
    {




        if (VAR_2->trigger != ((void*)0))
        {
            FUNC_10(VAR_2->mainloop, VAR_2->trigger);
            VAR_2->trigger = ((void*)0);
        }
        FUNC_7(VAR_3, VAR_1);
    }

    pa_operation *VAR_4 = FUNC_3(VAR_3, ((void*)0), ((void*)0));
    if (VAR_4 != ((void*)0))
        FUNC_2(VAR_4);
    VAR_2->last_date = VAR_0;



    vlc_tick_t VAR_5;
    if (FUNC_0(VAR_1, &VAR_5) == 0 && VAR_5 <= FUNC_1(5))
    {
        FUNC_6(VAR_2->mainloop);
        FUNC_11(VAR_5);
        FUNC_5(VAR_2->mainloop);
    }

    FUNC_8(VAR_3, VAR_1);
    FUNC_6(VAR_2->mainloop);
}
