
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int input_thread_t ;
struct TYPE_5__ {size_t i_control; int lock_control; int wait_control; TYPE_2__* control; scalar_t__ is_stopped; } ;
typedef TYPE_1__ input_thread_private_t ;
struct TYPE_6__ {int i_type; int param; } ;
typedef TYPE_2__ input_control_t ;
typedef int input_control_param_t ;


 size_t FUNC_0 (int *,TYPE_2__*) ;
 int FUNC_1 (int,int const*) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int FUNC_8( input_thread_t *VAR_3,
                       int VAR_4, const input_control_param_t *VAR_5 )
{
    input_thread_private_t *VAR_6 = FUNC_2(VAR_3);

    FUNC_6( &VAR_6->lock_control );
    input_control_t VAR_7 = {
        .i_type = VAR_4,
    };
    if( VAR_5 )
        VAR_7.param = *VAR_5;

    size_t VAR_8 = FUNC_0( VAR_3, &VAR_7 );

    if( VAR_6->is_stopped || VAR_8 >= VAR_0 )
    {
        if( VAR_6->is_stopped )
            FUNC_3( VAR_3, "input control stopped, trashing type=%d",
                     VAR_4 );
        else
            FUNC_4( VAR_3, "input control fifo overflow, trashing type=%d",
                     VAR_4 );
        if( VAR_5 )
            FUNC_1( VAR_4, VAR_5 );
        FUNC_7( &VAR_6->lock_control );
        return VAR_1;
    }

    VAR_6->control[VAR_8] = VAR_7;
    VAR_6->i_control = VAR_8 + 1;

    FUNC_5( &VAR_6->wait_control );
    FUNC_7( &VAR_6->lock_control );
    return VAR_2;
}
