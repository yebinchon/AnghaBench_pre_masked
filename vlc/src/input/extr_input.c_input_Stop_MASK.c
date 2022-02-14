
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int input_thread_t ;
struct TYPE_4__ {size_t i_control; int is_stopped; int interrupt; int lock_control; int wait_control; TYPE_2__* control; } ;
typedef TYPE_1__ input_thread_private_t ;
struct TYPE_5__ {int param; int i_type; } ;
typedef TYPE_2__ input_control_t ;


 int FUNC_0 (int ,int *) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6( input_thread_t *VAR_0 )
{
    input_thread_private_t *VAR_1 = FUNC_1(VAR_0);

    FUNC_4( &VAR_1->lock_control );

    for( size_t VAR_2 = 0; VAR_2 < VAR_1->i_control; VAR_2++ )
    {
        input_control_t *VAR_3 = &VAR_1->control[VAR_2];
        FUNC_0( VAR_3->i_type, &VAR_3->param );
    }
    VAR_1->i_control = 0;
    VAR_1->is_stopped = 1;
    FUNC_2( &VAR_1->wait_control );
    FUNC_5( &VAR_1->lock_control );
    FUNC_3( &VAR_1->interrupt );
}
