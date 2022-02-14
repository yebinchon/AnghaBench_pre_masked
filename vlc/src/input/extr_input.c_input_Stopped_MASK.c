
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int input_thread_t ;
struct TYPE_3__ {int is_stopped; int lock_control; } ;
typedef TYPE_1__ input_thread_private_t ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

bool FUNC_3( input_thread_t *VAR_0 )
{
    input_thread_private_t *VAR_1 = FUNC_0(VAR_0);
    bool VAR_2;

    FUNC_1( &VAR_1->lock_control );
    VAR_2 = VAR_1->is_stopped;
    FUNC_2( &VAR_1->lock_control );
    return VAR_2;
}
