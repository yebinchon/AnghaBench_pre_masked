
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int* pi_v_cadence_pos; int* pi_s_cadence_pos; int* pi_cadence_pos_history; scalar_t__* pb_s_reliable; scalar_t__* pb_v_reliable; } ;
typedef TYPE_1__ ivtc_sys_t ;
struct TYPE_6__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ filter_t ;
struct TYPE_7__ {TYPE_1__ ivtc; } ;
typedef TYPE_3__ filter_sys_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1( filter_t *VAR_2 )
{
    FUNC_0( VAR_2 != ((void*)0) );

    filter_sys_t *VAR_3 = VAR_2->p_sys;
    ivtc_sys_t *VAR_4 = &VAR_3->ivtc;
    int VAR_5 = VAR_0;
    if( VAR_4->pb_v_reliable[VAR_1] )
        VAR_5 = VAR_4->pi_v_cadence_pos[VAR_1];
    else if( VAR_4->pb_s_reliable[VAR_1] )
        VAR_5 = VAR_4->pi_s_cadence_pos[VAR_1];
    VAR_4->pi_cadence_pos_history[VAR_1] = VAR_5;
}
