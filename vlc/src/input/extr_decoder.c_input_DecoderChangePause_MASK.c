
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_tick_t ;
struct decoder_owner {int paused; int p_fifo; scalar_t__ frames_countdown; int pause_date; } ;
typedef int decoder_t ;


 struct decoder_owner* FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

void FUNC_4( decoder_t *VAR_0, bool VAR_1, vlc_tick_t VAR_2 )
{
    struct decoder_owner *VAR_3 = FUNC_0( VAR_0 );




    FUNC_1( VAR_3->p_fifo );
    VAR_3->paused = VAR_1;
    VAR_3->pause_date = VAR_2;
    VAR_3->frames_countdown = 0;
    FUNC_2( VAR_3->p_fifo );
    FUNC_3( VAR_3->p_fifo );
}
