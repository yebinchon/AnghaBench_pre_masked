
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef size_t uint16_t ;


 size_t VAR_0 ;

__attribute__((used)) static size_t FUNC_0( const uint8_t *VAR_1, size_t VAR_2 )
{
    size_t VAR_3 = 0;

    if( VAR_2 < VAR_0 )
        return 0;

    VAR_1 += 5;
    VAR_2 -= 5;

    for ( unsigned int VAR_4 = 0; VAR_4 < 2; VAR_4++ )
    {

        const unsigned int VAR_5 = VAR_1[0] & (VAR_4 == 0 ? 0x1f : 0xff);
        VAR_1++; VAR_2--;

        for ( unsigned int VAR_6 = 0; VAR_6 < VAR_5; VAR_6++ )
        {
            if( VAR_2 < 2 )
                return 0;

            uint16_t VAR_7 = (VAR_1[0] << 8) | VAR_1[1];
            if(VAR_7 > VAR_2 - 2)
                return 0;
            VAR_3 += VAR_7 + 4;
            VAR_1 += VAR_7 + 2;
            VAR_2 -= VAR_7 + 2;
        }

        if( VAR_4 == 0 && VAR_2 < 1 )
            return 0;
    }
    return VAR_3;
}
