
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int pa_stream ;
struct TYPE_4__ {TYPE_2__* sys; } ;
typedef TYPE_1__ audio_output_t ;
struct TYPE_5__ {int mainloop; int * stream; int * trigger; } ;
typedef TYPE_2__ aout_sys_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int *,int *,int *) ;
 int FUNC_4 (int *,int *,int *) ;
 int FUNC_5 (int *,int *,int *) ;
 int FUNC_6 (int *,int *,int *) ;
 int FUNC_7 (int *,int *,int *) ;
 int FUNC_8 (int *,int *,int *) ;
 int FUNC_9 (int *,int *,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (int ,int *) ;

__attribute__((used)) static void FUNC_15(audio_output_t *VAR_0)
{
    aout_sys_t *VAR_1 = VAR_0->sys;
    pa_stream *VAR_2 = VAR_1->stream;

    FUNC_11(VAR_1->mainloop);
    if (FUNC_13(VAR_1->trigger != ((void*)0)))
        FUNC_14(VAR_1->mainloop, VAR_1->trigger);
    FUNC_0(VAR_2);


    FUNC_7(VAR_2, ((void*)0), ((void*)0));
    FUNC_1(VAR_2, ((void*)0), ((void*)0));
    FUNC_2(VAR_2, ((void*)0), ((void*)0));
    FUNC_3(VAR_2, ((void*)0), ((void*)0));
    FUNC_4(VAR_2, ((void*)0), ((void*)0));
    FUNC_5(VAR_2, ((void*)0), ((void*)0));
    FUNC_6(VAR_2, ((void*)0), ((void*)0));
    FUNC_8(VAR_2, ((void*)0), ((void*)0));
    FUNC_9(VAR_2, ((void*)0), ((void*)0));

    FUNC_10(VAR_2);
    VAR_1->stream = ((void*)0);
    FUNC_12(VAR_1->mainloop);
}
