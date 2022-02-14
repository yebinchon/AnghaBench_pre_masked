
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int mute; int volume; } ;
typedef TYPE_1__ pa_sink_input_info ;
typedef int pa_context ;
struct TYPE_8__ {TYPE_3__* sys; } ;
typedef TYPE_2__ audio_output_t ;
struct TYPE_9__ {int cvolume; } ;
typedef TYPE_3__ aout_sys_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_2(pa_context *VAR_0, const pa_sink_input_info *VAR_1,
                               int VAR_2, void *VAR_3)
{
    audio_output_t *VAR_4 = VAR_3;
    aout_sys_t *VAR_5 = VAR_4->sys;

    if (VAR_2)
        return;
    (void) VAR_0;

    VAR_5->cvolume = VAR_1->volume;
    FUNC_0(VAR_4);
    FUNC_1(VAR_4, VAR_1->mute);
}
