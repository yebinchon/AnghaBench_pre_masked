
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int* pi_motion; int* pb_s_reliable; int* pb_v_reliable; int* pb_all_progressives; scalar_t__* pi_scores; scalar_t__* pi_bot_rep; scalar_t__* pi_top_rep; void** pi_cadence_pos_history; int * pi_v_raw; void** pi_v_cadence_pos; void** pi_s_cadence_pos; } ;
typedef TYPE_1__ ivtc_sys_t ;
struct TYPE_6__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ filter_t ;
struct TYPE_7__ {TYPE_1__ ivtc; } ;
typedef TYPE_3__ filter_sys_t ;


 void* VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1( filter_t *VAR_11 )
{
    FUNC_0( VAR_11 != ((void*)0) );

    filter_sys_t *VAR_12 = VAR_11->p_sys;
    ivtc_sys_t *VAR_13 = &VAR_12->ivtc;


    for( int VAR_14 = 1; VAR_14 < VAR_8; VAR_14++ )
    {
        VAR_13->pi_top_rep[VAR_14-1] = VAR_13->pi_top_rep[VAR_14];
        VAR_13->pi_bot_rep[VAR_14-1] = VAR_13->pi_bot_rep[VAR_14];
        VAR_13->pi_motion[VAR_14-1] = VAR_13->pi_motion[VAR_14];

        VAR_13->pi_s_cadence_pos[VAR_14-1] = VAR_13->pi_s_cadence_pos[VAR_14];
        VAR_13->pb_s_reliable[VAR_14-1] = VAR_13->pb_s_reliable[VAR_14];
        VAR_13->pi_v_cadence_pos[VAR_14-1] = VAR_13->pi_v_cadence_pos[VAR_14];
        VAR_13->pi_v_raw[VAR_14-1] = VAR_13->pi_v_raw[VAR_14];
        VAR_13->pb_v_reliable[VAR_14-1] = VAR_13->pb_v_reliable[VAR_14];

        VAR_13->pi_cadence_pos_history[VAR_14-1]
                                      = VAR_13->pi_cadence_pos_history[VAR_14];

        VAR_13->pb_all_progressives[VAR_14-1] = VAR_13->pb_all_progressives[VAR_14];
    }

    VAR_13->pi_s_cadence_pos[VAR_9] = VAR_0;
    VAR_13->pb_s_reliable[VAR_9] = 0;
    VAR_13->pi_v_cadence_pos[VAR_9] = VAR_0;
    VAR_13->pi_v_raw[VAR_9] = VAR_10;
    VAR_13->pb_v_reliable[VAR_9] = 0;
    VAR_13->pi_cadence_pos_history[VAR_9] = VAR_0;
    VAR_13->pi_top_rep[VAR_9] = 0;
    VAR_13->pi_bot_rep[VAR_9] = 0;
    VAR_13->pi_motion[VAR_9] = -1;
    VAR_13->pb_all_progressives[VAR_9] = 0;


    VAR_13->pi_scores[VAR_7] = VAR_13->pi_scores[VAR_1];
    VAR_13->pi_scores[VAR_6] = VAR_13->pi_scores[VAR_2];
    VAR_13->pi_scores[VAR_3] = VAR_13->pi_scores[VAR_4];
    VAR_13->pi_scores[VAR_1] = VAR_13->pi_scores[VAR_5];

    VAR_13->pi_scores[VAR_2] = 0;
    VAR_13->pi_scores[VAR_4] = 0;
    VAR_13->pi_scores[VAR_5] = 0;
}
