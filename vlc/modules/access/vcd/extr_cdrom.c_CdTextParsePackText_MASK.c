
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef enum cdtext_charset_e { ____Placeholder_cdtext_charset_e } cdtext_charset_e ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (char*,size_t,int,char**) ;
 size_t FUNC_1 (char*,int,int const) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (char*,int const*,size_t) ;

__attribute__((used)) static void FUNC_4( const uint8_t *VAR_4,
                                 enum cdtext_charset_e VAR_5,
                                 size_t *VAR_6,
                                 size_t *VAR_7,
                                 char *VAR_8,
                                 int *VAR_9,
                                 char *VAR_10[VAR_0 + 1][0x10] )
{
    const uint8_t VAR_11 = VAR_4[0];
    uint8_t VAR_12 = VAR_4[1] & 0x7f;
    const bool VAR_13 = VAR_4[3] & 0x80;
    const uint8_t VAR_14 = VAR_4[3] & 0x0f;

    if( VAR_14 == 0 )
        *VAR_6 = 0;

    const uint8_t *VAR_15 = &VAR_4[VAR_1];
    const uint8_t *VAR_16 = VAR_15 + VAR_2;

    for( const uint8_t *VAR_17 = VAR_15; VAR_17 < VAR_16 ; )
    {
        size_t VAR_18 = FUNC_1( (char *)VAR_17,
                                                VAR_16 - VAR_17,
                                                VAR_13 );


        if( VAR_18 > 0 )
            *VAR_9 = FUNC_2( *VAR_9, VAR_12 );


        if( VAR_18 == 1 && VAR_17[0] == '\t' &&
            *VAR_7 && !*VAR_6 )
        {
            *VAR_6 = *VAR_7;
            VAR_8[*VAR_6] = 0;
        }
        else
        {

            size_t VAR_19 = VAR_18;
            if( *VAR_6 + VAR_18 >= VAR_3 )
                VAR_19 = VAR_3 - *VAR_6;
            FUNC_3( &VAR_8[*VAR_6], VAR_17, VAR_19 );
            *VAR_6 += VAR_19;
            *VAR_7 = 0;
        }


        if( &VAR_17[VAR_18] < VAR_16 )
        {

            if(*VAR_6 > 0)
            {
                FUNC_0( VAR_8, *VAR_6, VAR_5,
                                     &VAR_10[VAR_12][VAR_11-0x80] );
                *VAR_7 = *VAR_6;
                *VAR_6 = 0;

                if(++VAR_12 > VAR_0)
                    break;
            }

            VAR_17 = VAR_17 + VAR_18 + (VAR_13 ? 2 : 1);
        }
        else
        {
            VAR_17 = VAR_16;
        }
    }
}
