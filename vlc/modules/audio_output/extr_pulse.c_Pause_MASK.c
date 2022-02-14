
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vlc_tick_t ;
typedef int pa_stream ;
struct TYPE_7__ {TYPE_2__* sys; } ;
typedef TYPE_1__ audio_output_t ;
struct TYPE_8__ {scalar_t__ last_date; int mainloop; int * stream; } ;
typedef TYPE_2__ aout_sys_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,int *,TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int * VAR_1 ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 (int *,TYPE_1__*) ;

__attribute__((used)) static void FUNC_6(audio_output_t *VAR_2, bool VAR_3, vlc_tick_t VAR_4)
{
    aout_sys_t *VAR_5 = VAR_2->sys;
    pa_stream *VAR_6 = VAR_5->stream;

    FUNC_2(VAR_5->mainloop);

    if (VAR_3) {
        FUNC_1(VAR_6, ((void*)0), ((void*)0));
        FUNC_5(VAR_6, VAR_2);
    } else {
        FUNC_1(VAR_6, VAR_1, VAR_2);
        if (FUNC_0(VAR_5->last_date != VAR_0))
            FUNC_4(VAR_6, VAR_2);
    }

    FUNC_3(VAR_5->mainloop);
    (void) VAR_4;
}
