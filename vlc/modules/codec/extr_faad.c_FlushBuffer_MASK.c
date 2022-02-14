
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* p_block; } ;
typedef TYPE_1__ decoder_sys_t ;
struct TYPE_6__ {size_t i_buffer; int* p_buffer; } ;
typedef TYPE_2__ block_t ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_1( decoder_sys_t *VAR_0, size_t VAR_1 )
{
    block_t *VAR_2 = VAR_0->p_block;
    if( VAR_2 )
    {
        if( VAR_1 < VAR_2->i_buffer )
        {

            for( ; VAR_1 < VAR_2->i_buffer; VAR_1++ )
                if( VAR_2->p_buffer[VAR_1] != 0x00 )
                    break;

            VAR_2->i_buffer -= VAR_1;
            VAR_2->p_buffer += VAR_1;
        }
        else VAR_2->i_buffer = 0;
        if( VAR_2->i_buffer == 0 )
        {
            FUNC_0( VAR_2 );
            VAR_0->p_block = ((void*)0);
        }
    }
}
