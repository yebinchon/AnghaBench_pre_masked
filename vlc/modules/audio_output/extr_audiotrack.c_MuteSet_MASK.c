
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* sys; } ;
typedef TYPE_2__ audio_output_t ;
struct TYPE_9__ {int mute; float volume; int * p_audiotrack; int b_error; } ;
typedef TYPE_3__ aout_sys_t ;
struct TYPE_7__ {scalar_t__ setVolume; } ;
struct TYPE_10__ {TYPE_1__ AudioTrack; } ;
typedef int JNIEnv ;


 int FUNC_0 (char*) ;
 int * FUNC_1 () ;
 int FUNC_2 (int ,float,...) ;
 int FUNC_3 (TYPE_2__*,int) ;
 TYPE_4__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_4( audio_output_t *VAR_3, bool VAR_4 )
{
    aout_sys_t *VAR_5 = VAR_3->sys;
    JNIEnv *VAR_6;
    VAR_5->mute = VAR_4;

    if( !VAR_5->b_error && VAR_5->p_audiotrack != ((void*)0) && ( VAR_6 = FUNC_1() ) )
    {
        if( VAR_0.AudioTrack.setVolume )
        {
            FUNC_2( VAR_2, VAR_4 ? 0.0f : VAR_5->volume );
            FUNC_0( "setVolume" );
        } else
        {
            FUNC_2( VAR_1, VAR_4 ? 0.0f : VAR_5->volume, VAR_4 ? 0.0f : VAR_5->volume );
            FUNC_0( "setStereoVolume" );
        }
    }
    FUNC_3(VAR_3, VAR_4);
    return 0;
}
