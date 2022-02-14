
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vlc_object_t ;
struct aout_sys {scalar_t__ length; int first_play_date; } ;
struct TYPE_2__ {int * mute_set; int * volume_set; int stop; int flush; int pause; int play; int time_get; int start; struct aout_sys* sys; } ;
typedef TYPE_1__ audio_output_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct aout_sys* FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(vlc_object_t *VAR_9)
{
    audio_output_t *VAR_10 = (audio_output_t *)VAR_9;

    struct aout_sys *VAR_11 = VAR_10->sys = FUNC_0(sizeof(*VAR_11));
    if (!VAR_11)
        return VAR_6;
    VAR_11->first_play_date = VAR_8;
    VAR_11->length = 0;

    VAR_10->start = VAR_3;
    VAR_10->time_get = VAR_5;
    VAR_10->play = VAR_2;
    VAR_10->pause = VAR_1;
    VAR_10->flush = VAR_0;
    VAR_10->stop = VAR_4;
    VAR_10->volume_set = ((void*)0);
    VAR_10->mute_set = ((void*)0);
    return VAR_7;
}
