
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
struct TYPE_13__ {TYPE_4__* sys; } ;
typedef TYPE_3__ audio_output_t ;
struct TYPE_12__ {scalar_t__ i_read; scalar_t__ i_write; } ;
struct TYPE_11__ {scalar_t__ i_us; scalar_t__ i_latency_us; } ;
struct TYPE_14__ {int lock; TYPE_2__ circular; int i_samples_written; TYPE_1__ smoothpos; scalar_t__ b_error; scalar_t__ b_passthrough; } ;
typedef TYPE_4__ aout_sys_t ;
typedef int JNIEnv ;


 scalar_t__ FUNC_0 (int *,TYPE_3__*) ;
 scalar_t__ FUNC_1 (int *,TYPE_3__*) ;
 int FUNC_2 (int *,TYPE_3__*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 int * FUNC_5 () ;
 int FUNC_6 (TYPE_3__*,char*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_7 (TYPE_3__*,char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 () ;

__attribute__((used)) static int
FUNC_11( audio_output_t *VAR_0, vlc_tick_t *restrict VAR_1 )
{
    aout_sys_t *VAR_2 = VAR_0->sys;
    vlc_tick_t VAR_3;
    JNIEnv *VAR_4;

    if( VAR_2->b_passthrough )
        return -1;

    FUNC_8( &VAR_2->lock );

    if( VAR_2->b_error || !VAR_2->i_samples_written || !( VAR_4 = FUNC_5() ) )
        goto bailout;

    VAR_3 = FUNC_1( VAR_4, VAR_0 );

    if( VAR_3 <= 0 )
        VAR_3 = FUNC_0(VAR_4, VAR_0 );
    if( VAR_3 > 0 )
    {

        vlc_tick_t VAR_5 = FUNC_4( VAR_2->i_samples_written )
                        - VAR_3;
        if( VAR_5 >= 0 )
        {

            VAR_5 += FUNC_3( VAR_2->circular.i_write
                                    - VAR_2->circular.i_read );
            *VAR_1 = VAR_5;
            FUNC_9( &VAR_2->lock );
            return 0;
        }
        else
        {
            FUNC_7( VAR_0, "timing screwed, reset positions" );
            FUNC_2( VAR_4, VAR_0 );
        }
    }

bailout:
    FUNC_9( &VAR_2->lock );
    return -1;
}
