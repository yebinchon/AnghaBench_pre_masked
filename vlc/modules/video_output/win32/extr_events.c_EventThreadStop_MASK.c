
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int b_ready; int thread; scalar_t__ hvideownd; int b_done; } ;
typedef TYPE_1__ event_thread_t ;


 int FUNC_0 (scalar_t__,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int ,int *) ;

void FUNC_3( event_thread_t *VAR_1 )
{
    if( !VAR_1->b_ready )
        return;

    FUNC_1( &VAR_1->b_done, 1 );



    if( VAR_1->hvideownd )
        FUNC_0( VAR_1->hvideownd, VAR_0, 0, 0);

    FUNC_2( VAR_1->thread, ((void*)0) );
    VAR_1->b_ready = 0;
}
