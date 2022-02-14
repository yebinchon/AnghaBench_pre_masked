
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int pa_stream ;
typedef int pa_operation ;
struct TYPE_5__ {TYPE_2__* sys; } ;
typedef TYPE_1__ audio_output_t ;
struct TYPE_6__ {int mainloop; int last_date; int * stream; } ;
typedef TYPE_2__ aout_sys_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,TYPE_1__*) ;

__attribute__((used)) static void FUNC_5(audio_output_t *VAR_1)
{
    aout_sys_t *VAR_2 = VAR_1->sys;
    pa_stream *VAR_3 = VAR_2->stream;

    FUNC_2(VAR_2->mainloop);

    pa_operation *VAR_4 = FUNC_1(VAR_3, ((void*)0), ((void*)0));
    if (VAR_4 != ((void*)0))
        FUNC_0(VAR_4);
    VAR_2->last_date = VAR_0;
    FUNC_4(VAR_3, VAR_1);

    FUNC_3(VAR_2->mainloop);
}
