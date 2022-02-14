
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int* VAR_0 ;

__attribute__((used)) static void FUNC_0( uint8_t VAR_1[57], uint8_t VAR_2[8] )
{
    int VAR_3,VAR_4,VAR_5;
    int VAR_6[64];
    int VAR_7[64];
    int VAR_8[8][9];




    for( VAR_3 = 0; VAR_3 < 8; VAR_3++ )
    {
        VAR_8[7][VAR_3+1] = VAR_2[VAR_3];
    }


    for( VAR_3 = 0; VAR_3 < 7; VAR_3++ )
    {

        for( VAR_4 = 0; VAR_4 < 8; VAR_4++ )
        {
            for( VAR_5 = 0; VAR_5 < 8; VAR_5++ )
            {
                VAR_6[VAR_4*8+VAR_5] = (VAR_8[7-VAR_3][1+VAR_4] >> (7-VAR_5)) & 1;
                VAR_7[VAR_0[VAR_4*8+VAR_5]-1] = VAR_6[VAR_4*8+VAR_5];
            }
        }
        for( VAR_4 = 0; VAR_4 < 8; VAR_4++ )
        {
            VAR_8[6-VAR_3][1+VAR_4] = 0;
            for( VAR_5 = 0; VAR_5 < 8; VAR_5++ )
            {
                VAR_8[6-VAR_3][1+VAR_4] |= VAR_7[VAR_4*8+VAR_5] << (7-VAR_5);
            }
        }
    }


    for( VAR_3 = 0; VAR_3 < 7; VAR_3++ )
    {
        for( VAR_4 = 0; VAR_4 < 8; VAR_4++ )
        {
            VAR_1[1+VAR_3*8+VAR_4] = VAR_8[1+VAR_3][1+VAR_4] ^ VAR_3;
        }
    }
}
