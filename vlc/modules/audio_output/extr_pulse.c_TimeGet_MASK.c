
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
typedef int pa_stream ;
struct TYPE_5__ {TYPE_2__* sys; } ;
typedef TYPE_1__ audio_output_t ;
struct TYPE_6__ {int mainloop; int context; int * stream; } ;
typedef TYPE_2__ aout_sys_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ,int *) ;

__attribute__((used)) static int FUNC_4(audio_output_t *VAR_1, vlc_tick_t *restrict VAR_2)
{
    aout_sys_t *VAR_3 = VAR_1->sys;
    pa_stream *VAR_4 = VAR_3->stream;
    int VAR_5 = -1;

    FUNC_1(VAR_3->mainloop);
    if (FUNC_0(VAR_4) <= 0)
    {
        vlc_tick_t VAR_6 = FUNC_3(VAR_1, VAR_3->context, VAR_4);
        if (VAR_6 != VAR_0)
        {
            *VAR_2 = VAR_6;
            VAR_5 = 0;
        }
    }
    FUNC_2(VAR_3->mainloop);
    return VAR_5;
}
