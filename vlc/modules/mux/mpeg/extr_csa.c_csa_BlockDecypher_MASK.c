
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int* VAR_0 ;
 int* VAR_1 ;

__attribute__((used)) static void FUNC_0( uint8_t VAR_2[57], uint8_t VAR_3[8], uint8_t VAR_4[8] )
{
    int VAR_5;
    int VAR_6;
    int VAR_7[9];
    int VAR_8;

    for( VAR_5 = 0; VAR_5 < 8; VAR_5++ )
    {
        VAR_7[VAR_5+1] = VAR_3[VAR_5];
    }


    for( VAR_5 = 56; VAR_5 > 0; VAR_5-- )
    {
        const int VAR_9 = VAR_1[ VAR_2[VAR_5]^VAR_7[7] ];
        VAR_6 = VAR_0[VAR_9];

        VAR_8 = VAR_7[7];
        VAR_7[7] = VAR_7[6] ^ VAR_6;
        VAR_7[6] = VAR_7[5];
        VAR_7[5] = VAR_7[4] ^ VAR_7[8] ^ VAR_9;
        VAR_7[4] = VAR_7[3] ^ VAR_7[8] ^ VAR_9;
        VAR_7[3] = VAR_7[2] ^ VAR_7[8] ^ VAR_9;
        VAR_7[2] = VAR_7[1];
        VAR_7[1] = VAR_7[8] ^ VAR_9;

        VAR_7[8] = VAR_8;
    }

    for( VAR_5 = 0; VAR_5 < 8; VAR_5++ )
    {
        VAR_4[VAR_5] = VAR_7[VAR_5+1];
    }
}
