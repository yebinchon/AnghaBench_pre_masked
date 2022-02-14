
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_4__* sys; } ;
typedef TYPE_3__ audio_output_t ;
struct TYPE_7__ {scalar_t__ i_latency_us; scalar_t__ i_us; scalar_t__ i_last_time; scalar_t__ i_idx; scalar_t__ i_count; } ;
struct TYPE_6__ {scalar_t__ i_frame_pos; scalar_t__ i_frame_us; scalar_t__ i_last_time; int i_play_time; } ;
struct TYPE_9__ {TYPE_2__ smoothpos; TYPE_1__ timestamp; } ;
typedef TYPE_4__ aout_sys_t ;
typedef int JNIEnv ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;

__attribute__((used)) static void
FUNC_2( JNIEnv *VAR_0, audio_output_t *VAR_1 )
{
    aout_sys_t *VAR_2 = VAR_1->sys;
    FUNC_0( VAR_0 );

    VAR_2->timestamp.i_play_time = FUNC_1();
    VAR_2->timestamp.i_last_time = 0;
    VAR_2->timestamp.i_frame_us = 0;
    VAR_2->timestamp.i_frame_pos = 0;

    VAR_2->smoothpos.i_count = 0;
    VAR_2->smoothpos.i_idx = 0;
    VAR_2->smoothpos.i_last_time = 0;
    VAR_2->smoothpos.i_us = 0;
    VAR_2->smoothpos.i_latency_us = 0;
}
