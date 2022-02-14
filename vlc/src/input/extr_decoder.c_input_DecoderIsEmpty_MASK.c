
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ i_cat; } ;
struct decoder_owner {int lock; scalar_t__ drained; scalar_t__ b_draining; TYPE_1__ fmt; int * p_vout; int * p_sout_input; int p_fifo; int b_waiting; } ;
typedef int decoder_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 struct decoder_owner* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

bool FUNC_9( decoder_t * VAR_2 )
{
    struct decoder_owner *VAR_3 = FUNC_1( VAR_2 );

    FUNC_0( !VAR_3->b_waiting );

    FUNC_4( VAR_3->p_fifo );
    if( !FUNC_3( VAR_3->p_fifo ) || VAR_3->b_draining )
    {
        FUNC_5( VAR_3->p_fifo );
        return 0;
    }
    FUNC_5( VAR_3->p_fifo );

    bool VAR_4;

    FUNC_6( &VAR_3->lock );





    if( VAR_3->fmt.i_cat == VAR_1 && VAR_3->p_vout != ((void*)0) )
        VAR_4 = FUNC_8( VAR_3->p_vout );
    else if( VAR_3->fmt.i_cat == VAR_0 )
        VAR_4 = !VAR_3->b_draining || VAR_3->drained;
    else
        VAR_4 = 1;
    FUNC_7( &VAR_3->lock );

    return VAR_4;
}
