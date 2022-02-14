
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct decoder_owner {int b_waiting; int lock; int wait_request; } ;
typedef int decoder_t ;


 int FUNC_0 (int) ;
 struct decoder_owner* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5( decoder_t *VAR_0 )
{
    struct decoder_owner *VAR_1 = FUNC_1( VAR_0 );

    FUNC_0( VAR_1->b_waiting );

    FUNC_3( &VAR_1->lock );
    VAR_1->b_waiting = 0;
    FUNC_2( &VAR_1->wait_request );
    FUNC_4( &VAR_1->lock );
}
