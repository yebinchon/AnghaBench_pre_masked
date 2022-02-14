
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_6__ {int* p_buffer; scalar_t__ i_buffer; } ;
typedef TYPE_1__ block_t ;
struct TYPE_7__ {unsigned int i_channels; int i_bits; unsigned int* pi_position; } ;
typedef TYPE_2__ aob_group_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int*,int*,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3( block_t *VAR_0,
                        block_t *VAR_1, unsigned VAR_2, aob_group_t VAR_3[2] )
{
    uint8_t *VAR_4 = VAR_0->p_buffer;
    const unsigned VAR_5 = VAR_3[0].i_channels +
                                      ( VAR_3[1].i_bits ? VAR_3[1].i_channels : 0 );

    while( VAR_1->i_buffer > 0 )
    {
        unsigned int VAR_6 = 0;

        for( int VAR_7 = 0; VAR_7 < 2; VAR_7++ )
        {
            const aob_group_t *VAR_8 = &VAR_3[1-VAR_7];
            const unsigned int VAR_9 = 2 * VAR_8->i_channels * VAR_8->i_bits / 8;

            if( VAR_1->i_buffer < VAR_9 )
            {
                VAR_1->i_buffer = 0;
                break;
            }

            if( !VAR_8->i_bits )
                continue;

            for( unsigned VAR_10 = 0; VAR_10 < 2; VAR_10++ )
            {
                for( unsigned VAR_11 = 0; VAR_11 < VAR_8->i_channels; VAR_11++ )
                {
                    const int VAR_12 = VAR_10 * VAR_8->i_channels + VAR_11;
                    const int VAR_13 = VAR_10 * VAR_5 + VAR_8->pi_position[VAR_11];
                    uint32_t *VAR_14 = (uint32_t *) &VAR_4[4*VAR_13];

                    if( VAR_8->i_bits == 24 )
                    {
                        FUNC_0( VAR_2 == 32 );
                        *VAR_14 = (VAR_1->p_buffer[2*VAR_12+0] << 24)
                                 | (VAR_1->p_buffer[2*VAR_12+1] << 16)
                                 | (VAR_1->p_buffer[4*VAR_8->i_channels+VAR_12] << 8);



                        VAR_6 += 4;
                    }
                    else if( VAR_8->i_bits == 20 )
                    {
                        FUNC_0( VAR_2 == 32 );
                        *VAR_14 = (VAR_1->p_buffer[2*VAR_12+0] << 24)
                                 | (VAR_1->p_buffer[2*VAR_12+1] << 16)
                                 | (((VAR_1->p_buffer[4*VAR_8->i_channels+VAR_12] << ((!VAR_10)?0:4) ) & 0xf0) << 8);



                        VAR_6 += 4;
                    }
                    else
                    {
                        FUNC_0( VAR_8->i_bits == 16 );
                        FUNC_0( VAR_2 == 16 || VAR_2 == 32 );
                        if( VAR_2 == 16 )
                        {



                            VAR_4[2*VAR_13+1] = VAR_1->p_buffer[2*VAR_12+0];
                            VAR_4[2*VAR_13+0] = VAR_1->p_buffer[2*VAR_12+1];

                            VAR_6 += 2;
                        }
                        else
                        {
                            *VAR_14 = (VAR_1->p_buffer[2*VAR_12+0] << 24)
                                     | (VAR_1->p_buffer[2*VAR_12+1] << 16);



                            VAR_6 += 4;
                        }
                    }
                }
            }


            VAR_1->i_buffer -= VAR_9;
            VAR_1->p_buffer += VAR_9;
        }
        VAR_4 += VAR_6;
    }
}
