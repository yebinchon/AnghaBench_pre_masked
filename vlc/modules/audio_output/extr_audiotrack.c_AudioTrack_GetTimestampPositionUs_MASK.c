
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
typedef scalar_t__ jlong ;
struct TYPE_8__ {TYPE_4__* sys; } ;
typedef TYPE_3__ audio_output_t ;
struct TYPE_7__ {scalar_t__ i_last_time; scalar_t__ i_frame_us; scalar_t__ i_frame_pos; scalar_t__ i_play_time; int p_obj; } ;
struct TYPE_6__ {int i_rate; } ;
struct TYPE_9__ {TYPE_2__ timestamp; TYPE_1__ fmt; } ;
typedef TYPE_4__ aout_sys_t ;
typedef int JNIEnv ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (scalar_t__,int ) ;
 scalar_t__ FUNC_6 () ;

__attribute__((used)) static vlc_tick_t
FUNC_7( JNIEnv *VAR_4, audio_output_t *VAR_5 )
{
    aout_sys_t *VAR_6 = VAR_5->sys;
    vlc_tick_t VAR_7;

    if( !VAR_6->timestamp.p_obj )
        return 0;

    VAR_7 = FUNC_6();
    if( VAR_7 - VAR_6->timestamp.i_last_time >= VAR_0 )
    {
        VAR_6->timestamp.i_last_time = VAR_7;

        if( FUNC_1( VAR_2, VAR_6->timestamp.p_obj ) )
        {
            VAR_6->timestamp.i_frame_us = FUNC_3(FUNC_2( VAR_3 ));
            VAR_6->timestamp.i_frame_pos = FUNC_2( VAR_1 );
        }
        else
        {
            VAR_6->timestamp.i_frame_us = 0;
            VAR_6->timestamp.i_frame_pos = 0;
        }
    }




    if( VAR_6->timestamp.i_frame_us != 0 && VAR_6->timestamp.i_frame_pos != 0
     && VAR_6->timestamp.i_frame_us > VAR_6->timestamp.i_play_time
     && VAR_7 > VAR_6->timestamp.i_frame_us
     && ( VAR_7 - VAR_6->timestamp.i_frame_us ) <= FUNC_4(10) )
    {
        vlc_tick_t VAR_8 = VAR_7 - VAR_6->timestamp.i_frame_us;
        jlong VAR_9 = FUNC_5(VAR_8, VAR_6->fmt.i_rate);
        return FUNC_0( VAR_6->timestamp.i_frame_pos + VAR_9 );
    } else
        return 0;
}
