
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef size_t uint32_t ;


 scalar_t__ FUNC_0 (int const*,int) ;
 size_t FUNC_1 (int const*,int const) ;
 size_t FUNC_2 (int const,int const,int const,int const) ;
 int VAR_0 ;

__attribute__((used)) static size_t FUNC_3( const uint8_t *VAR_1, size_t VAR_2,
                            int (*VAR_3)(uint32_t, const uint8_t *, size_t, void *), void *VAR_4 )
{
    size_t VAR_5 = 0;
    uint32_t VAR_6 = 0;
    if( VAR_2 > 10 && FUNC_0( VAR_1, 0 ) )
    {
        const bool VAR_7 = VAR_1[5] & 0x80;
        VAR_6 = FUNC_1( &VAR_1[6], 1 );
        if( VAR_6 > VAR_2 - 10 )
            return 0;
        VAR_5 = VAR_6 + 10;
        const uint8_t *VAR_8 = &VAR_1[10];
        while( VAR_6 > 10 )
        {
            uint32_t VAR_9 = FUNC_2( VAR_8[0], VAR_8[1], VAR_8[2], VAR_8[3] );
            uint32_t VAR_10 = FUNC_1( &VAR_8[4], VAR_7 ) + 10;
            if( VAR_10 > VAR_6 )
                return 0;

            if( VAR_10 > 10 &&
                VAR_3( VAR_9, &VAR_8[10], VAR_10 - 10, VAR_4 ) != VAR_0 )
                break;

            VAR_8 += VAR_10;
            VAR_6 -= VAR_10;
        }
    }


    if( VAR_5 && VAR_2 - VAR_5 >= 10 &&
        FUNC_0( &VAR_1[VAR_5], 1 ) )
    {
        VAR_5 += 10;
    }

    return VAR_5;
}
