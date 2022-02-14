
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
struct TYPE_2__ {scalar_t__ i_cat; } ;
struct decoder_owner {int lock; scalar_t__ p_vout; TYPE_1__ fmt; int p_fifo; int frames_countdown; int paused; } ;
typedef int decoder_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 struct decoder_owner* FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (scalar_t__,scalar_t__*) ;

void FUNC_8( decoder_t *VAR_1, vlc_tick_t *VAR_2 )
{
    struct decoder_owner *VAR_3 = FUNC_1( VAR_1 );

    FUNC_0( VAR_3->paused );
    *VAR_2 = 0;

    FUNC_2( VAR_3->p_fifo );
    VAR_3->frames_countdown++;
    FUNC_3( VAR_3->p_fifo );
    FUNC_4( VAR_3->p_fifo );

    FUNC_5( &VAR_3->lock );
    if( VAR_3->fmt.i_cat == VAR_0 )
    {
        if( VAR_3->p_vout )
            FUNC_7( VAR_3->p_vout, VAR_2 );
    }
    FUNC_6( &VAR_3->lock );
}
