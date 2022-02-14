
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ i_cat; } ;
struct decoder_owner {int flushing; scalar_t__ frames_countdown; int p_fifo; TYPE_1__ fmt; scalar_t__ paused; } ;
typedef int decoder_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 struct decoder_owner* FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

void FUNC_6( decoder_t *VAR_2 )
{
    struct decoder_owner *VAR_3 = FUNC_1( VAR_2 );

    FUNC_3( VAR_3->p_fifo );


    FUNC_0( FUNC_2( VAR_3->p_fifo ) );





    VAR_3->flushing = 1;



    if( VAR_3->paused
     && ( VAR_3->fmt.i_cat == VAR_1 || VAR_3->fmt.i_cat == VAR_0 )
     && VAR_3->frames_countdown == 0 )
        VAR_3->frames_countdown++;

    FUNC_4( VAR_3->p_fifo );

    FUNC_5( VAR_3->p_fifo );
}
