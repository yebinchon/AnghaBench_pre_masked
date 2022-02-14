
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_5__ {int mute_set; int volume_set; int * drain; int flush; int pause; int play; int time_get; int stop; int start; TYPE_2__* sys; } ;
typedef TYPE_1__ audio_output_t ;
struct TYPE_6__ {int volume; int mute; int ready; int * set_volume; void* drain; int * play; int lock; void* flush; void* resume; void* pause; void* channels; void* rate; void* opaque; int * cleanup; void* setup_opaque; int * setup; } ;
typedef TYPE_2__ aout_sys_t ;


 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
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
 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 void* FUNC_3 (int *,char*) ;
 void* FUNC_4 (int *,char*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6 (vlc_object_t *VAR_14)
{
    audio_output_t *VAR_15 = (audio_output_t *)VAR_14;
    aout_sys_t *VAR_16 = FUNC_1 (sizeof (*VAR_16));
    if (FUNC_2(VAR_16 == ((void*)0)))
        return VAR_10;

    void *VAR_17 = FUNC_3 (VAR_14, "amem-data");
    VAR_16->setup = FUNC_3 (VAR_14, "amem-setup");
    if (VAR_16->setup != ((void*)0))
    {
        VAR_16->cleanup = FUNC_3 (VAR_14, "amem-cleanup");
        VAR_16->setup_opaque = VAR_17;
    }
    else
    {
        VAR_16->cleanup = ((void*)0);
        VAR_16->opaque = VAR_17;
        VAR_16->rate = FUNC_4 (VAR_14, "amem-rate");
        VAR_16->channels = FUNC_4 (VAR_14, "amem-channels");
    }

    VAR_16->play = FUNC_3 (VAR_14, "amem-play");
    VAR_16->pause = FUNC_3 (VAR_14, "amem-pause");
    VAR_16->resume = FUNC_3 (VAR_14, "amem-resume");
    VAR_16->flush = FUNC_3 (VAR_14, "amem-flush");
    VAR_16->drain = FUNC_3 (VAR_14, "amem-drain");
    VAR_16->set_volume = FUNC_3 (VAR_14, "amem-set-volume");
    VAR_16->volume = 1.;
    VAR_16->mute = 0;
    VAR_16->ready = 0;
    FUNC_5(&VAR_16->lock);

    if (VAR_16->play == ((void*)0))
    {
        FUNC_0 (VAR_16);
        return VAR_9;
    }

    VAR_15->sys = VAR_16;
    VAR_15->start = VAR_7;
    VAR_15->stop = VAR_8;
    VAR_15->time_get = VAR_13;
    VAR_15->play = VAR_4;
    VAR_15->pause = VAR_3;
    VAR_15->flush = VAR_1;
    VAR_15->drain = VAR_16->drain ? VAR_0 : ((void*)0);
    if (VAR_16->set_volume != ((void*)0))
    {
        VAR_15->volume_set = VAR_12;
        VAR_15->mute_set = VAR_2;
    }
    else
    {
        VAR_15->volume_set = VAR_6;
        VAR_15->mute_set = VAR_5;
    }
    return VAR_11;
}
