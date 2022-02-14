
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_5__ {int i_buffer; int* p_buffer; scalar_t__ i_pts; scalar_t__ i_dts; } ;
typedef TYPE_1__ block_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int** VAR_3 ;
 int** VAR_4 ;
 int FUNC_2 (int*,int const) ;

__attribute__((used)) static inline block_t *FUNC_3( block_t *VAR_5 )
{
    block_t *VAR_6;
    uint8_t *VAR_7, *VAR_8;
    int VAR_9, VAR_10, VAR_11;
    const uint16_t (*VAR_12)[9];
    int VAR_13, VAR_14, VAR_15, VAR_16;

    if( VAR_5->i_buffer < 4 )
        return ((void*)0);
    const int VAR_17 = (VAR_5->p_buffer[3] & 0x80) >> 7;
    if( VAR_5->i_buffer < (VAR_17 ? VAR_1
                                         : VAR_0 ) )
        return ((void*)0);


    VAR_8 = VAR_5->p_buffer + 80*6+80*16*3 + 3;
    if( *VAR_8 != 0x50 ) return ((void*)0);

    VAR_9 = VAR_8[4] & 0x07;
    if( VAR_9 > 1 )
        return ((void*)0);

    VAR_10 = FUNC_2( &VAR_8[1], VAR_17 );

    VAR_6 = FUNC_0( 4 * VAR_10 );


    VAR_7 = VAR_5->p_buffer;
    VAR_12 = VAR_17 ? VAR_4 : VAR_3;
    VAR_11 = (VAR_17 ? 12 : 10)/2;
    for( VAR_13 = 0; VAR_13 < (VAR_17 ? 12 : 10); VAR_13++ )
    {
        VAR_7 += 6 * 80;

        if( VAR_9 == 1 && VAR_13 == VAR_11 ) break;

        for( VAR_14 = 0; VAR_14 < 9; VAR_14++ )
        {
            for( VAR_15 = 8; VAR_15 < 80; VAR_15 += 2 )
            {
                if( VAR_9 == 0 )
                {

                    VAR_16 = VAR_12[VAR_13][VAR_14] + (VAR_15 - 8) / 2 *
                           (VAR_17 ? 108 : 90);

                    if( VAR_16 * 2 >= 4 * VAR_10 ) continue;


                    VAR_6->p_buffer[VAR_16*2] = VAR_7[VAR_15+1];
                    VAR_6->p_buffer[VAR_16*2+1] = VAR_7[VAR_15];

                    if( VAR_6->p_buffer[VAR_16*2+1] == 0x80 &&
                        VAR_6->p_buffer[VAR_16*2] == 0x00 )
                        VAR_6->p_buffer[VAR_16*2+1] = 0;
                }
                else
                {

                    uint16_t VAR_18 = (VAR_7[VAR_15+0] << 4) | (VAR_7[VAR_15+2] >> 4);
                    uint16_t VAR_19 = (VAR_7[VAR_15+1] << 4) | (VAR_7[VAR_15+2] & 0x0f);

                    VAR_18 = VAR_18 == 0x800 ? 0 : FUNC_1(VAR_18);
                    VAR_19 = VAR_19 == 0x800 ? 0 : FUNC_1(VAR_19);

                    VAR_16 = VAR_12[VAR_13][VAR_14] + (VAR_15 - 8) / 3 * (VAR_17 ? 108 : 90);
                    if( VAR_16*2 >= 4 * VAR_10 )
                        continue;
                    VAR_6->p_buffer[VAR_16*2+0] = VAR_18 & 0xff;
                    VAR_6->p_buffer[VAR_16*2+1] = VAR_18 >> 8;

                    VAR_16 = VAR_12[VAR_13 + VAR_11][VAR_14] + (VAR_15 - 8) / 3 * (VAR_17 ? 108 : 90);
                    if( VAR_16*2 >= 4 * VAR_10 )
                        continue;
                    VAR_6->p_buffer[VAR_16*2+0] = VAR_19 & 0xff;
                    VAR_6->p_buffer[VAR_16*2+1] = VAR_19 >> 8;

                    ++VAR_15;
                }
            }

            VAR_7 += 16 * 80;
        }
    }

    VAR_6->i_pts = VAR_5->i_pts != VAR_2 ? VAR_5->i_pts
                                                           : VAR_5->i_dts;
    VAR_6->i_dts = VAR_5->i_dts;
    return VAR_6;
}
