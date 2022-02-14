
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int pa_subscription_mask_t ;
typedef int pa_operation ;
typedef int pa_context ;
struct TYPE_7__ {int device_select; int mute_set; int volume_set; int drain; int flush; int pause; int play; int time_get; int stop; int start; TYPE_2__* sys; } ;
typedef TYPE_1__ audio_output_t ;
struct TYPE_8__ {int mainloop; int * context; int * sinks; int * sink_force; int flags_force; int volume_force; int * stream; } ;
typedef TYPE_2__ aout_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (int) ;
 int * FUNC_3 (int *,int ,TYPE_1__*) ;
 int FUNC_4 (int *,int ,TYPE_1__*) ;
 int * FUNC_5 (int *,int const,int *,int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int VAR_19 ;
 scalar_t__ FUNC_11 (int ) ;
 int * FUNC_12 (int *,int *) ;

__attribute__((used)) static int FUNC_13(vlc_object_t *VAR_20)
{
    audio_output_t *VAR_21 = (audio_output_t *)VAR_20;
    aout_sys_t *VAR_22 = FUNC_2(sizeof (*VAR_22));
    pa_operation *VAR_23;

    if (FUNC_11(VAR_22 == ((void*)0)))
        return VAR_15;


    pa_context *VAR_24 = FUNC_12(VAR_20, &VAR_22->mainloop);
    if (VAR_24 == ((void*)0))
    {
        FUNC_0(VAR_22);
        return VAR_14;
    }
    VAR_22->stream = ((void*)0);
    VAR_22->context = VAR_24;
    VAR_22->volume_force = VAR_7;
    VAR_22->flags_force = VAR_4;
    VAR_22->sink_force = ((void*)0);
    VAR_22->sinks = ((void*)0);

    VAR_21->sys = VAR_22;
    VAR_21->start = VAR_10;
    VAR_21->stop = VAR_11;
    VAR_21->time_get = VAR_13;
    VAR_21->play = VAR_9;
    VAR_21->pause = VAR_8;
    VAR_21->flush = VAR_1;
    VAR_21->drain = VAR_0;
    VAR_21->volume_set = VAR_17;
    VAR_21->mute_set = VAR_2;
    VAR_21->device_select = VAR_12;

    FUNC_8(VAR_22->mainloop);

    VAR_23 = FUNC_3(VAR_22->context, VAR_19, VAR_21);
    if (FUNC_1(VAR_23 != ((void*)0)))
    {
        while (FUNC_6(VAR_23) == VAR_3)
            FUNC_10(VAR_22->mainloop);
        FUNC_7(VAR_23);
    }


    const pa_subscription_mask_t VAR_25 = VAR_5
                                      | VAR_6;
    FUNC_4(VAR_22->context, VAR_18, VAR_21);
    VAR_23 = FUNC_5(VAR_22->context, VAR_25, ((void*)0), ((void*)0));
    if (FUNC_1(VAR_23 != ((void*)0)))
       FUNC_7(VAR_23);
    FUNC_9(VAR_22->mainloop);

    return VAR_16;
}
