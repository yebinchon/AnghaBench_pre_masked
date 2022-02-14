
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
typedef scalar_t__ uint64_t ;
typedef size_t uint32_t ;
struct TYPE_12__ {TYPE_5__* sys; } ;
typedef TYPE_4__ audio_output_t ;
struct TYPE_11__ {scalar_t__ i_last_time; size_t i_idx; int i_count; size_t i_us; int i_latency_us; scalar_t__* p_us; } ;
struct TYPE_13__ {TYPE_3__ smoothpos; } ;
typedef TYPE_5__ aout_sys_t ;
struct TYPE_10__ {int STREAM_MUSIC; } ;
struct TYPE_9__ {scalar_t__ getOutputLatency; int clazz; } ;
struct TYPE_14__ {TYPE_2__ AudioManager; TYPE_1__ AudioSystem; } ;
typedef int JNIEnv ;


 int FUNC_0 (int *,TYPE_4__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,scalar_t__,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_6__ VAR_3 ;
 scalar_t__ FUNC_3 () ;

__attribute__((used)) static vlc_tick_t
FUNC_4( JNIEnv *VAR_4, audio_output_t *VAR_5 )
{
    aout_sys_t *VAR_6 = VAR_5->sys;
    uint64_t VAR_7;
    vlc_tick_t VAR_8 = FUNC_3();


    if( VAR_8 - VAR_6->smoothpos.i_last_time >= VAR_1 )
    {
        VAR_7 = FUNC_1( FUNC_0( VAR_4, VAR_5 ) );

        VAR_6->smoothpos.i_last_time = VAR_8;


        VAR_6->smoothpos.p_us[VAR_6->smoothpos.i_idx] = VAR_7 - VAR_8;
        VAR_6->smoothpos.i_idx = (VAR_6->smoothpos.i_idx + 1)
                                 % VAR_2;
        if( VAR_6->smoothpos.i_count < VAR_2 )
            VAR_6->smoothpos.i_count++;


        VAR_6->smoothpos.i_us = 0;
        for( uint32_t VAR_9 = 0; VAR_9 < VAR_6->smoothpos.i_count; ++VAR_9 )
            VAR_6->smoothpos.i_us += VAR_6->smoothpos.p_us[VAR_9];
        VAR_6->smoothpos.i_us /= VAR_6->smoothpos.i_count;

        if( VAR_3.AudioSystem.getOutputLatency )
        {
            int VAR_10 = FUNC_2( VAR_0,
                                         VAR_3.AudioSystem.clazz,
                                         VAR_3.AudioSystem.getOutputLatency,
                                         VAR_3.AudioManager.STREAM_MUSIC );

            VAR_6->smoothpos.i_latency_us = VAR_10 > 0 ?
                                            VAR_10 * 1000L : 0;
        }
    }
    if( VAR_6->smoothpos.i_us != 0 )
        return VAR_6->smoothpos.i_us + VAR_8 - VAR_6->smoothpos.i_latency_us;
    else
        return 0;
}
