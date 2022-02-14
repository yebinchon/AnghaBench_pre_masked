
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct decoder_owner {int p_fifo; } ;
typedef int decoder_t ;


 size_t FUNC_0 (int ) ;
 struct decoder_owner* FUNC_1 (int *) ;

size_t FUNC_2( decoder_t *VAR_0 )
{
    struct decoder_owner *VAR_1 = FUNC_1( VAR_0 );

    return FUNC_0( VAR_1->p_fifo );
}
