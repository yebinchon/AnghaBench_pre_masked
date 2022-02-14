
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int decoder_t ;
struct TYPE_6__ {int i_buffer; int* p_buffer; } ;
typedef TYPE_1__ block_t ;


 TYPE_1__* FUNC_0 (int *,int*,TYPE_1__*) ;

__attribute__((used)) static block_t *FUNC_1( void *VAR_0, bool *VAR_1, block_t *VAR_2 )
{
    decoder_t *VAR_3 = VAR_0;


    while( VAR_2->i_buffer > 5 && VAR_2->p_buffer[VAR_2->i_buffer-1] == 0x00 )
        VAR_2->i_buffer--;

    return FUNC_0( VAR_3, VAR_1, VAR_2 );
}
