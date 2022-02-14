
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int * device_select; int * mute_set; int * volume_set; } ;
typedef TYPE_1__ audio_output_t ;
struct TYPE_12__ {int lock; int module; } ;
typedef TYPE_2__ aout_owner_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_2__* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (TYPE_1__*,char*,int ,int *) ;
 int FUNC_4 (TYPE_1__*,char*,float) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (TYPE_1__*) ;

void FUNC_8 (audio_output_t *VAR_5)
{
    aout_owner_t *VAR_6 = FUNC_1 (VAR_5);

    FUNC_5(&VAR_6->lock);
    FUNC_2 (VAR_5, VAR_6->module);

    VAR_5->volume_set = ((void*)0);
    VAR_5->mute_set = ((void*)0);
    VAR_5->device_select = ((void*)0);
    FUNC_6(&VAR_6->lock);

    FUNC_3 (VAR_5, "viewpoint", VAR_2, ((void*)0));
    FUNC_3 (VAR_5, "audio-filter", VAR_0, ((void*)0));
    FUNC_3(VAR_5, "device", VAR_4, FUNC_7(VAR_5));
    FUNC_3(VAR_5, "mute", VAR_3, FUNC_7(VAR_5));
    FUNC_4 (VAR_5, "volume", -1.f);
    FUNC_3(VAR_5, "volume", VAR_3, FUNC_7(VAR_5));
    FUNC_3 (VAR_5, "stereo-mode", VAR_1, ((void*)0));
    FUNC_0(VAR_5);
}
