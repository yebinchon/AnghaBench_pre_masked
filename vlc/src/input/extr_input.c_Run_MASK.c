
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int input_thread_t ;
struct TYPE_2__ {int thread; scalar_t__ b_out_pace_control; scalar_t__ b_can_pace_control; int interrupt; int input; } ;
typedef TYPE_1__ input_thread_private_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void *FUNC_6( void *VAR_1 )
{
    input_thread_private_t *VAR_2 = VAR_1;
    input_thread_t *VAR_3 = &VAR_2->input;

    FUNC_4(&VAR_2->interrupt);

    if( !FUNC_1( VAR_3 ) )
    {
        if( VAR_2->b_can_pace_control && VAR_2->b_out_pace_control )
        {


            FUNC_5( VAR_2->thread, VAR_0 );
        }

        FUNC_2( VAR_3, 1 );


        FUNC_0( VAR_3 );
    }

    FUNC_3( VAR_3 );
    return ((void*)0);
}
