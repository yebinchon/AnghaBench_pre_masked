
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int input_thread_t ;
struct TYPE_4__ {float f_val; int b_fast_seek; } ;
struct TYPE_5__ {TYPE_1__ pos; } ;
typedef TYPE_2__ input_control_param_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,TYPE_2__*) ;

void FUNC_1( input_thread_t *VAR_1, float VAR_2, bool VAR_3 )
{
    input_control_param_t VAR_4;

    VAR_4.pos.f_val = VAR_2;
    VAR_4.pos.b_fast_seek = VAR_3;
    FUNC_0( VAR_1, VAR_0, &VAR_4 );
}
