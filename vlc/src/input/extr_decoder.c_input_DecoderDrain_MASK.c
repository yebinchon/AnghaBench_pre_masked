
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct decoder_owner {int b_draining; int p_fifo; } ;
typedef int decoder_t ;


 struct decoder_owner* FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

void FUNC_4( decoder_t *VAR_0 )
{
    struct decoder_owner *VAR_1 = FUNC_0( VAR_0 );

    FUNC_1( VAR_1->p_fifo );
    VAR_1->b_draining = 1;
    FUNC_2( VAR_1->p_fifo );
    FUNC_3( VAR_1->p_fifo );
}
