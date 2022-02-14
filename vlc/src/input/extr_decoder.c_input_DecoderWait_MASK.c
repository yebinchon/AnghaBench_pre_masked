
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct decoder_owner {int lock; int wait_acknowledge; int p_fifo; scalar_t__ b_idle; scalar_t__ paused; int b_has_data; int b_waiting; } ;
typedef int decoder_t ;


 int FUNC_0 (int ) ;
 struct decoder_owner* FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

void FUNC_9( decoder_t *VAR_0 )
{
    struct decoder_owner *VAR_1 = FUNC_1( VAR_0 );

    FUNC_0( VAR_1->b_waiting );

    FUNC_7( &VAR_1->lock );
    while( !VAR_1->b_has_data )
    {


        if( VAR_1->paused )
            break;
        FUNC_5( VAR_1->p_fifo );
        if( VAR_1->b_idle && FUNC_4( VAR_1->p_fifo ) )
        {
            FUNC_2( VAR_0, "buffer deadlock prevented" );
            FUNC_6( VAR_1->p_fifo );
            break;
        }
        FUNC_6( VAR_1->p_fifo );
        FUNC_3( &VAR_1->wait_acknowledge, &VAR_1->lock );
    }
    FUNC_8( &VAR_1->lock );
}
