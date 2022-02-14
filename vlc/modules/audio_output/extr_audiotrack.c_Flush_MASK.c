
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {TYPE_4__* sys; } ;
typedef TYPE_3__ audio_output_t ;
struct TYPE_9__ {scalar_t__ i_write; scalar_t__ i_read; } ;
struct TYPE_12__ {int b_error; scalar_t__ i_samples_written; int lock; TYPE_1__ circular; } ;
typedef TYPE_4__ aout_sys_t ;
struct TYPE_10__ {int clazz; } ;
struct TYPE_13__ {TYPE_2__ AudioTimestamp; } ;
typedef int JNIEnv ;


 scalar_t__ FUNC_0 (int *,TYPE_3__*) ;
 int FUNC_1 (int *,TYPE_3__*) ;
 scalar_t__ FUNC_2 (char*) ;
 int * FUNC_3 () ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 TYPE_5__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7( audio_output_t *VAR_4 )
{
    aout_sys_t *VAR_5 = VAR_4->sys;
    JNIEnv *VAR_6;

    FUNC_5( &VAR_5->lock );

    if( VAR_5->b_error || !( VAR_6 = FUNC_3() ) )
        goto bailout;
    FUNC_4( VAR_2 );
    if( FUNC_2( "pause" ) )
        goto bailout;
    FUNC_4( VAR_0 );
    VAR_5->circular.i_read = VAR_5->circular.i_write = 0;







    if( !VAR_1.AudioTimestamp.clazz && VAR_5->i_samples_written > 0 )
    {
        if( FUNC_0( VAR_6, VAR_4 ) != 0 )
        {
            VAR_5->b_error = 1;
            goto bailout;
        }
    }
    FUNC_1( VAR_6, VAR_4 );
    FUNC_4( VAR_3 );
    FUNC_2( "play" );

bailout:
    FUNC_6( &VAR_5->lock );
}
