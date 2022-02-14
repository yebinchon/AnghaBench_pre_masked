
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_tick_t ;
struct decoder_owner {int p_fifo; int delay; } ;
typedef int decoder_t ;


 struct decoder_owner* FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

void FUNC_3( decoder_t *VAR_0, vlc_tick_t VAR_1 )
{
    struct decoder_owner *VAR_2 = FUNC_0( VAR_0 );

    FUNC_1( VAR_2->p_fifo );
    VAR_2->delay = VAR_1;
    FUNC_2( VAR_2->p_fifo );
}
