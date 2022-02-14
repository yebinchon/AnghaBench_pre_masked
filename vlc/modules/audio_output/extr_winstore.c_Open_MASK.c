
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_6__ {int device_select; int flush; int pause; int play; int mute_set; int volume_set; int time_get; int stop; int start; TYPE_2__* sys; } ;
typedef TYPE_1__ audio_output_t ;
struct TYPE_7__ {int * client; int * stream; } ;
typedef TYPE_2__ aout_sys_t ;


 int VAR_0 ;
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
 TYPE_2__* FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,char*,int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int * FUNC_3 (int ,char*) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(vlc_object_t *VAR_11)
{
    audio_output_t *VAR_12 = (audio_output_t *)VAR_11;

    aout_sys_t *VAR_13 = FUNC_0(sizeof (*VAR_13));
    if (FUNC_2(VAR_13 == ((void*)0)))
        return VAR_8;

    VAR_12->sys = VAR_13;
    VAR_13->stream = ((void*)0);
    VAR_13->client = FUNC_3( FUNC_4(VAR_12), "winstore-client" );
    if (VAR_13->client != ((void*)0))
        FUNC_1( VAR_12, "Reusing previous client: %p", VAR_13->client );
    VAR_12->start = VAR_5;
    VAR_12->stop = VAR_6;
    VAR_12->time_get = VAR_7;
    VAR_12->volume_set = VAR_10;
    VAR_12->mute_set = VAR_2;
    VAR_12->play = VAR_4;
    VAR_12->pause = VAR_3;
    VAR_12->flush = VAR_1;
    VAR_12->device_select = VAR_0;
    return VAR_9;
}
