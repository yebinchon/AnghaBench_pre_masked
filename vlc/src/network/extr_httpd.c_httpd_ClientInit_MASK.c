
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_tick_t ;
struct TYPE_3__ {int i_keyframe_wait_to_pass; int b_stream_mode; int answer; int query; int i_buffer_size; int p_buffer; scalar_t__ i_buffer; int i_activity_timeout; int i_activity_date; int i_state; } ;
typedef TYPE_1__ httpd_client_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(httpd_client_t *VAR_2, vlc_tick_t VAR_3)
{
    VAR_2->i_state = VAR_0;
    VAR_2->i_activity_date = VAR_3;
    VAR_2->i_activity_timeout = FUNC_0(10);
    VAR_2->i_buffer_size = VAR_1;
    VAR_2->i_buffer = 0;
    VAR_2->p_buffer = FUNC_2(VAR_2->i_buffer_size);
    VAR_2->i_keyframe_wait_to_pass = -1;
    VAR_2->b_stream_mode = 0;

    FUNC_1(&VAR_2->query);
    FUNC_1(&VAR_2->answer);
}
