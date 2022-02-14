
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ pa_volume_t ;
typedef int pa_stream ;
struct TYPE_8__ {int channels; } ;
typedef TYPE_1__ pa_sample_spec ;
typedef int pa_operation ;
typedef int pa_cvolume ;
struct TYPE_9__ {TYPE_3__* sys; } ;
typedef TYPE_2__ audio_output_t ;
struct TYPE_10__ {int mainloop; int context; int cvolume; scalar_t__ volume_force; int * stream; } ;
typedef TYPE_3__ aout_sys_t ;


 scalar_t__ VAR_0 ;
 float VAR_1 ;
 int FUNC_0 (TYPE_2__*,float) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (float) ;
 int FUNC_4 (TYPE_2__*,char*) ;
 int * FUNC_5 (int ,int ,int *,int *,int *) ;
 int FUNC_6 (int *,float) ;
 int FUNC_7 (int *,int ,float) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 TYPE_1__* FUNC_11 (int *) ;
 int FUNC_12 (int *,int *,scalar_t__) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (int) ;

__attribute__((used)) static int FUNC_16(audio_output_t *VAR_2, float VAR_3)
{
    aout_sys_t *VAR_4 = VAR_2->sys;
    pa_stream *VAR_5 = VAR_4->stream;
    pa_operation *VAR_6;
    pa_volume_t VAR_7;




    VAR_3 *= VAR_1;
    if (FUNC_15(VAR_3 >= (float)VAR_0))
        VAR_7 = VAR_0;
    else
        VAR_7 = FUNC_3(VAR_3);

    if (VAR_5 == ((void*)0))
    {
        VAR_4->volume_force = VAR_7;
        FUNC_0(VAR_2, (float)VAR_7 / (float)VAR_1);
        return 0;
    }

    FUNC_13(VAR_4->mainloop);

    if (!FUNC_8(&VAR_4->cvolume))
    {
        const pa_sample_spec *VAR_8 = FUNC_11(VAR_5);

        FUNC_4(VAR_2, "balance clobbered by volume change");
        FUNC_7(&VAR_4->cvolume, VAR_8->channels, VAR_1);
    }


    pa_cvolume VAR_9 = VAR_4->cvolume;
    FUNC_6(&VAR_9, VAR_1);
    FUNC_12(&VAR_9, &VAR_9, VAR_7);
    FUNC_1(FUNC_8(&VAR_9));

    VAR_6 = FUNC_5(VAR_4->context, FUNC_10(VAR_5),
                                          &VAR_9, ((void*)0), ((void*)0));
    if (FUNC_2(VAR_6 != ((void*)0)))
        FUNC_9(VAR_6);
    FUNC_14(VAR_4->mainloop);
    return FUNC_2(VAR_6 != ((void*)0)) ? 0 : -1;
}
