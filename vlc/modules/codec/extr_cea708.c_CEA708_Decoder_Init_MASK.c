
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int b_text_waiting; scalar_t__ i_clock; int suspended_deadline; int * window; int * p_cw; int input_buffer; } ;
typedef TYPE_1__ cea708_t ;


 size_t VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2( cea708_t *VAR_2 )
{
    FUNC_1( &VAR_2->input_buffer );
    for(size_t VAR_3=0; VAR_3<VAR_0; VAR_3++)
        FUNC_0( &VAR_2->window[VAR_3] );
    VAR_2->p_cw = &VAR_2->window[0];
    VAR_2->suspended_deadline = VAR_1;
    VAR_2->b_text_waiting = 0;
    VAR_2->i_clock = 0;
}
