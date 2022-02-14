
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;


 int const* VAR_0 ;
 size_t FUNC_0 (int const*,size_t) ;
 int* FUNC_1 (size_t) ;
 int FUNC_2 (int*,int const*,int) ;

uint8_t *FUNC_3( const uint8_t *VAR_1, size_t VAR_2,
                                  size_t *VAR_3, uint8_t *VAR_4 )
{
    *VAR_3 = FUNC_0( VAR_1, VAR_2 );
    if( *VAR_3 == 0 )
        return ((void*)0);


    if ( VAR_4 )
        *VAR_4 = (VAR_1[4] & 0x03) + 1;

    uint8_t *VAR_5;
    uint8_t *VAR_6 = VAR_5 = FUNC_1( *VAR_3 );
    if( !VAR_6 )
    {
        *VAR_3 = 0;
        return ((void*)0);
    }

    VAR_1 += 5;

    for ( unsigned int VAR_7 = 0; VAR_7 < 2; VAR_7++ )
    {
        const unsigned int VAR_8 = VAR_1[0] & (VAR_7 == 0 ? 0x1f : 0xff);
        VAR_1++;

        for ( unsigned int VAR_9 = 0; VAR_9 < VAR_8; VAR_9++)
        {
            uint16_t VAR_10 = (VAR_1[0] << 8) | VAR_1[1];
            VAR_1 += 2;

            FUNC_2( VAR_6, VAR_0, 4 );
            VAR_6 += 4;

            FUNC_2( VAR_6, VAR_1, VAR_10 );
            VAR_6 += VAR_10;
            VAR_1 += VAR_10;
        }
    }

    return VAR_5;
}
