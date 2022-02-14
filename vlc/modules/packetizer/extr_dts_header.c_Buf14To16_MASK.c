
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static int FUNC_1( uint8_t *VAR_0, const uint8_t *VAR_1, int VAR_2, int VAR_3,
                      int VAR_4 )
{
    unsigned char VAR_5, VAR_6 = 0;
    int VAR_7, VAR_8 = 0;
    int VAR_9, VAR_10 = 0;

    for( VAR_9 = 0; VAR_9 < VAR_2; VAR_9++ )
    {
        if( VAR_9%2 )
        {
            VAR_5 = VAR_1[VAR_9-VAR_3];
            VAR_7 = 8;
        }
        else
        {
            VAR_5 = VAR_1[VAR_9+VAR_3] & 0x3F;
            VAR_7 = 8 - 2;
        }

        if( VAR_8 < 8 )
        {
            int VAR_11 = FUNC_0( 8 - VAR_8, VAR_7 );
            VAR_6 <<= VAR_11;
            VAR_6 |= ( VAR_5 >> (VAR_7 - VAR_11) );
            VAR_5 <<= (8 - VAR_7 + VAR_11);
            VAR_5 >>= (8 - VAR_7 + VAR_11);
            VAR_7 -= VAR_11;
            VAR_8 += VAR_11;
        }

        if( VAR_8 == 8 )
        {
            if( VAR_10 % 2 )
                VAR_0[VAR_10 - VAR_4] = VAR_6;
            else
                VAR_0[VAR_10 + VAR_4] = VAR_6;
            VAR_6 = 0;
            VAR_8 = 0;
            VAR_10++;
        }

        VAR_8 += VAR_7;
        VAR_6 <<= VAR_7;
        VAR_6 |= VAR_5;
    }

    return VAR_10;
}
