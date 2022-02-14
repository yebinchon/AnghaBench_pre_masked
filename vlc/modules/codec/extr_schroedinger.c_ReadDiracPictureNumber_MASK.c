
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int i_buffer; int* p_buffer; } ;
typedef TYPE_1__ block_t ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2( uint32_t *VAR_1, block_t *VAR_2 )
{
    uint32_t VAR_3 = 4;

    while( VAR_3 + 13 < VAR_2->i_buffer )
    {

        if( VAR_2->p_buffer[VAR_3] & 0x08 )
        {
            *VAR_1 = FUNC_0( VAR_2->p_buffer + VAR_3 + 9 );
            return 1;
        }

        uint32_t VAR_4 = FUNC_0( VAR_2->p_buffer + VAR_3 + 1 );
        FUNC_1( VAR_4 <= VAR_0 - VAR_3 );
        if( VAR_4 == 0 )
            VAR_4 = 13;
        VAR_3 += VAR_4;
    }
    return 0;
}
