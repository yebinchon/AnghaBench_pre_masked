
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_4__ {unsigned int i_buffer; scalar_t__* p_buffer; } ;
typedef TYPE_1__ block_t ;


 int FUNC_0 (scalar_t__*,scalar_t__*,unsigned int) ;
 int FUNC_1 (scalar_t__*,scalar_t__*,unsigned int) ;

__attribute__((used)) static void FUNC_2( block_t *VAR_0, block_t *VAR_1,
                       unsigned VAR_2,
                       unsigned VAR_3, unsigned VAR_4,
                       unsigned VAR_5 )
{
    if( VAR_5 != 16 || VAR_4 > 0 )
    {
        uint8_t *VAR_6 = VAR_1->p_buffer;
        uint8_t *VAR_7 = VAR_0->p_buffer;
        int VAR_8 = ((VAR_5 == 16) ? 2 : 4) * VAR_3;

        while( VAR_2 > 0 )
        {



            if (VAR_5 == 16) {
                FUNC_1( VAR_6, VAR_7, (VAR_3 + VAR_4) * VAR_5 / 8 );
            } else {
                for (unsigned VAR_9 = 0; VAR_9 < VAR_3; ++VAR_9) {
                    VAR_7[VAR_9 * 4] = 0;
                    VAR_7[1 + (VAR_9 * 4)] = VAR_6[2 + (VAR_9 * 3)];
                    VAR_7[2 + (VAR_9 * 4)] = VAR_6[1 + (VAR_9 * 3)];
                    VAR_7[3 + (VAR_9 * 4)] = VAR_6[VAR_9 * 3];
                }
            }

            VAR_6 += (VAR_3 + VAR_4) * VAR_5 / 8;
            VAR_7 += VAR_8;
            VAR_2--;
        }
    }
    else
    {



        FUNC_1( VAR_1->p_buffer, VAR_0->p_buffer, VAR_1->i_buffer );

    }
}
