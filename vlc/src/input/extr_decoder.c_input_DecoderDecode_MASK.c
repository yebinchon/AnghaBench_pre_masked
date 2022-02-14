
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct decoder_owner {int p_fifo; int wait_fifo; int b_waiting; } ;
typedef int decoder_t ;
struct TYPE_4__ {int i_flags; } ;
typedef TYPE_1__ block_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct decoder_owner* FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,TYPE_1__*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int *) ;

void FUNC_10( decoder_t *VAR_1, block_t *VAR_2, bool VAR_3 )
{
    struct decoder_owner *VAR_4 = FUNC_1( VAR_1 );

    FUNC_6( VAR_4->p_fifo );
    if( !VAR_3 )
    {



        if( FUNC_4( VAR_4->p_fifo ) > 400*1024*1024 )
        {
            FUNC_2( VAR_1, "decoder/packetizer fifo full (data not "
                      "consumed quickly enough), resetting fifo!" );
            FUNC_0( FUNC_3( VAR_4->p_fifo ) );
            VAR_2->i_flags |= VAR_0;
        }
    }
    else
    if( !VAR_4->b_waiting )
    {


        while( FUNC_5( VAR_4->p_fifo ) >= 10 )
            FUNC_9( VAR_4->p_fifo, &VAR_4->wait_fifo );
    }

    FUNC_7( VAR_4->p_fifo, VAR_2 );
    FUNC_8( VAR_4->p_fifo );
}
