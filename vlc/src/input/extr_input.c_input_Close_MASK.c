
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int input_thread_t ;
struct TYPE_2__ {int interrupt; int thread; scalar_t__ is_running; } ;


 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;

void FUNC_4( input_thread_t *VAR_0 )
{
    if( FUNC_1(VAR_0)->is_running )
        FUNC_3( FUNC_1(VAR_0)->thread, ((void*)0) );
    FUNC_2( &FUNC_1(VAR_0)->interrupt );
    FUNC_0(VAR_0);
}
