
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct decoder_owner {int lock; int wait_request; int b_has_data; int b_waiting; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2( struct decoder_owner *VAR_0 )
{
    FUNC_1( &VAR_0->lock );

    for( ;; )
    {
        if( !VAR_0->b_waiting || !VAR_0->b_has_data )
            break;
        FUNC_0( &VAR_0->wait_request, &VAR_0->lock );
    }
}
