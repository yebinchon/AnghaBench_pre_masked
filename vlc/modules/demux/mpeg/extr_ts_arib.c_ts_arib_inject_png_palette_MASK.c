
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
typedef int uint32_t ;


 char const* VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char const,char const,char const,char const) ;
 char* FUNC_2 (size_t) ;
 int FUNC_3 (char*,char const*,size_t const) ;

bool FUNC_4( const uint8_t *VAR_2, size_t VAR_3, uint8_t **VAR_4, size_t *VAR_5 )
{
    const uint8_t *VAR_6 = VAR_2;
    const uint8_t *VAR_7 = ((void*)0);
    size_t VAR_8 = VAR_3 - 8;
    VAR_6 += 8;
    VAR_8 -= 8;

    while( VAR_8 > 11 )
    {
        uint32_t VAR_9 = FUNC_0( VAR_6 );
        if( VAR_9 > 0x7FFFFFFFU || VAR_9 > VAR_8 - 12 )
            break;

        uint32_t VAR_10 = FUNC_1(VAR_6[4], VAR_6[5], VAR_6[6], VAR_6[7]);
        if( VAR_10 == FUNC_1('I', 'D', 'A', 'T') )
        {
            VAR_7 = VAR_6;
            break;
        }

        VAR_6 += VAR_9 + 12;
        VAR_8 -= VAR_9 + 12;
    }

    if( !VAR_7 )
        return 0;

    {
        uint8_t *VAR_11 = *VAR_4 = FUNC_2( VAR_3 + VAR_1 );
        if( !VAR_11 )
            return 0;
        *VAR_5 = VAR_3 + VAR_1;

        const size_t VAR_12 = VAR_6 - VAR_2;
        FUNC_3( VAR_11, VAR_2, VAR_12 );
        FUNC_3( &VAR_11[VAR_12], VAR_0, VAR_1 );
        FUNC_3( &VAR_11[VAR_12 + VAR_1], VAR_6, VAR_3 - VAR_12 );
    }

    return 1;
}
