
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_tick_t ;
struct TYPE_5__ {TYPE_2__* sys; } ;
typedef TYPE_1__ audio_output_t ;
struct TYPE_6__ {int b_thread_paused; int lock; scalar_t__ b_error; } ;
typedef TYPE_2__ aout_sys_t ;
typedef int JNIEnv ;


 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (char*) ;
 int * FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7( audio_output_t *VAR_2, bool VAR_3, vlc_tick_t VAR_4 )
{
    aout_sys_t *VAR_5 = VAR_2->sys;
    JNIEnv *VAR_6;
    FUNC_4( VAR_4 );

    FUNC_5( &VAR_5->lock );

    if( VAR_5->b_error || !( VAR_6 = FUNC_2() ) )
        goto bailout;

    if( VAR_3 )
    {
        VAR_5->b_thread_paused = 1;
        FUNC_3( VAR_0 );
        FUNC_1( "pause" );
    } else
    {
        VAR_5->b_thread_paused = 0;
        FUNC_0( VAR_6, VAR_2 );
        FUNC_3( VAR_1 );
        FUNC_1( "play" );
    }

bailout:
    FUNC_6( &VAR_5->lock );
}
