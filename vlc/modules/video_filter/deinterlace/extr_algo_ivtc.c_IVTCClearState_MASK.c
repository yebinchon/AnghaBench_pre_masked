
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int b_sequence_valid; int* pb_s_reliable; int* pb_v_reliable; int* pi_motion; int* pb_all_progressives; scalar_t__* pi_final_scores; scalar_t__* pi_bot_rep; scalar_t__* pi_top_rep; int * pi_v_raw; void** pi_v_cadence_pos; void** pi_s_cadence_pos; void** pi_cadence_pos_history; scalar_t__* pi_scores; void* i_old_mode; void* i_mode; int i_tfd; void* i_cadence_pos; } ;
typedef TYPE_1__ ivtc_sys_t ;
struct TYPE_6__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ filter_t ;
struct TYPE_7__ {TYPE_1__ ivtc; } ;
typedef TYPE_3__ filter_sys_t ;


 void* VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;

void FUNC_1( filter_t *VAR_6 )
{
    FUNC_0( VAR_6 != ((void*)0) );

    filter_sys_t *VAR_7 = VAR_6->p_sys;
    ivtc_sys_t *VAR_8 = &VAR_7->ivtc;

    VAR_8->i_cadence_pos = VAR_0;
    VAR_8->i_tfd = VAR_4;
    VAR_8->b_sequence_valid = 0;
    VAR_8->i_mode = VAR_2;
    VAR_8->i_old_mode = VAR_2;
    for( int VAR_9 = 0; VAR_9 < VAR_3; VAR_9++ )
        VAR_8->pi_scores[VAR_9] = 0;
    for( int VAR_10 = 0; VAR_10 < VAR_1; VAR_10++ )
    {
        VAR_8->pi_cadence_pos_history[VAR_10] = VAR_0;

        VAR_8->pi_s_cadence_pos[VAR_10] = VAR_0;
        VAR_8->pb_s_reliable[VAR_10] = 0;
        VAR_8->pi_v_cadence_pos[VAR_10] = VAR_0;
        VAR_8->pb_v_reliable[VAR_10] = 0;

        VAR_8->pi_v_raw[VAR_10] = VAR_5;

        VAR_8->pi_top_rep[VAR_10] = 0;
        VAR_8->pi_bot_rep[VAR_10] = 0;
        VAR_8->pi_motion[VAR_10] = -1;

        VAR_8->pb_all_progressives[VAR_10] = 0;

        VAR_8->pi_final_scores[VAR_10] = 0;
    }
}
