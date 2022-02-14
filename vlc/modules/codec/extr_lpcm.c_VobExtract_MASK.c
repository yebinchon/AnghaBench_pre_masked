
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int* p_buffer; int i_buffer; } ;
typedef TYPE_1__ block_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int*,int*,int) ;
 int FUNC_2 (int*,int*,int) ;

__attribute__((used)) static void FUNC_3( block_t *VAR_0, block_t *VAR_1,
                        unsigned VAR_2 )
{

    if( VAR_2 == 24 )
    {
        uint32_t *VAR_3 = (uint32_t *)VAR_0->p_buffer;

        while( VAR_1->i_buffer / 12 )
        {

            *(VAR_3++) = (VAR_1->p_buffer[ 0] << 24)
                       | (VAR_1->p_buffer[ 1] << 16)
                       | (VAR_1->p_buffer[ 8] << 8);

            *(VAR_3++) = (VAR_1->p_buffer[ 2] << 24)
                       | (VAR_1->p_buffer[ 3] << 16)
                       | (VAR_1->p_buffer[ 9] << 8);

            *(VAR_3++) = (VAR_1->p_buffer[ 4] << 24)
                       | (VAR_1->p_buffer[ 5] << 16)
                       | (VAR_1->p_buffer[10] << 8);

            *(VAR_3++) = (VAR_1->p_buffer[ 6] << 24)
                       | (VAR_1->p_buffer[ 7] << 16)
                       | (VAR_1->p_buffer[11] << 8);

            VAR_1->i_buffer -= 12;
            VAR_1->p_buffer += 12;
        }
    }
    else if( VAR_2 == 20 )
    {
        uint32_t *VAR_4 = (uint32_t *)VAR_0->p_buffer;

        while( VAR_1->i_buffer / 10 )
        {

            *(VAR_4++) = ( VAR_1->p_buffer[0] << 24)
                       | ( VAR_1->p_buffer[1] << 16)
                       | ((VAR_1->p_buffer[8] & 0xF0) << 8);

            *(VAR_4++) = ( VAR_1->p_buffer[2] << 24)
                       | ( VAR_1->p_buffer[3] << 16)
                       | ((VAR_1->p_buffer[8] & 0x0F) << 12);

            *(VAR_4++) = ( VAR_1->p_buffer[4] << 24)
                       | ( VAR_1->p_buffer[5] << 16)
                       | ((VAR_1->p_buffer[9] & 0xF0) << 8);

            *(VAR_4++) = ( VAR_1->p_buffer[6] << 24)
                       | ( VAR_1->p_buffer[7] << 16)
                       | ((VAR_1->p_buffer[9] & 0x0F) << 12);

            VAR_1->i_buffer -= 10;
            VAR_1->p_buffer += 10;
        }
    }
    else
    {
        FUNC_0( VAR_2 == 16 );



        FUNC_2( VAR_1->p_buffer, VAR_0->p_buffer, VAR_1->i_buffer );

    }
}
