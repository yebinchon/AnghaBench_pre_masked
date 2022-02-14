
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_7__ {int mute_set; int volume_set; int device_select; int time_get; int flush; int pause; int play; int stop; int start; TYPE_2__* sys; } ;
typedef TYPE_1__ audio_output_t ;
struct TYPE_8__ {float volume; int mute; int thread_cond; int aout_cond; int lock; int at_dev; } ;
typedef TYPE_2__ aout_sys_t ;
struct TYPE_9__ {int name; scalar_t__ id; } ;
typedef int JNIEnv ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 () ;
 int FUNC_1 (TYPE_1__*,int *) ;
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
 int FUNC_2 (TYPE_1__*,scalar_t__,int ) ;
 TYPE_4__* VAR_13 ;
 TYPE_2__* FUNC_3 (int,int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7( vlc_object_t *VAR_14 )
{
    audio_output_t *VAR_15 = (audio_output_t *) VAR_14;
    aout_sys_t *VAR_16;
    JNIEnv *VAR_17 = FUNC_0();

    if( !VAR_17 || !FUNC_1( VAR_15, VAR_17 ) )
        return VAR_9;

    VAR_16 = FUNC_3( 1, sizeof (aout_sys_t) );

    if( FUNC_4( VAR_16 == ((void*)0) ) )
        return VAR_10;

    VAR_16->at_dev = VAR_0;
    FUNC_6(&VAR_16->lock);
    FUNC_5(&VAR_16->aout_cond);
    FUNC_5(&VAR_16->thread_cond);

    VAR_15->sys = VAR_16;
    VAR_15->start = VAR_6;
    VAR_15->stop = VAR_7;
    VAR_15->play = VAR_5;
    VAR_15->pause = VAR_4;
    VAR_15->flush = VAR_2;
    VAR_15->time_get = VAR_8;
    VAR_15->device_select = VAR_1;

    for( unsigned int VAR_18 = 0; VAR_13[VAR_18].id; ++VAR_18 )
        FUNC_2(VAR_15, VAR_13[VAR_18].id, VAR_13[VAR_18].name);

    VAR_15->volume_set = VAR_12;
    VAR_15->mute_set = VAR_3;
    VAR_16->volume = 1.0f;
    VAR_16->mute = 0;

    return VAR_11;
}
