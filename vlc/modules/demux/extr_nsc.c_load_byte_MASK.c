
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;
 scalar_t__ FUNC_0 (unsigned char) ;
 scalar_t__ FUNC_1 (unsigned char) ;
 int FUNC_2 (unsigned char) ;

__attribute__((used)) static int FUNC_3( unsigned char VAR_1,
                      unsigned char *VAR_2, char **VAR_3,
                      unsigned char *VAR_4, unsigned char *VAR_5 )
{
    *VAR_2 = 0;

    if( VAR_1 == 1 )
    {
        if( FUNC_1( (unsigned char)**VAR_3 ) == 0 )
            return -1;

        if( FUNC_0( (unsigned char)**VAR_3 ) == 0 )
            *VAR_2 = (FUNC_2( (unsigned char)**VAR_3 ) - 7) * 16;
        else
            *VAR_2 = **VAR_3 * 16;

        (*VAR_3)++;

        if( FUNC_1( (unsigned char)**VAR_3 ) == 0 )
            return -1;

        if( FUNC_0( (unsigned char)**VAR_3 ) == 0 )
            *VAR_2 |= FUNC_2( (unsigned char)**VAR_3 ) - 0x37;
        else
            *VAR_2 |= **VAR_3 - 0x30;

        (*VAR_3)++;
    }
    else if( VAR_1 == 2 )
    {
        unsigned char **VAR_6 = (unsigned char **)VAR_3;

        if( **VAR_6 > 127 || VAR_0[ **VAR_6 ] == 0xFF )
            return -1;

        if( *VAR_5 == 0 )
        {
            if( (*VAR_6)[ 1 ] > 127 || VAR_0[ (*VAR_6)[ 1 ] ] == 0xFF )
                return -1;

            *VAR_2 = (VAR_0[ (*VAR_6)[ 0 ] ] * 4) |
                        (VAR_0[ (*VAR_6)[ 1 ] ] / 16);

            *VAR_4 = VAR_0[ (*VAR_6)[ 1 ] ] * 16;
            *VAR_5 = 4;

            (*VAR_6) += 2;
        }
        else if( *VAR_5 == 2 )
        {
            *VAR_2 = *VAR_4 | VAR_0[ **VAR_6 ];

            *VAR_4 = 0;
            *VAR_5 = 0;

            (*VAR_6)++;
        }
        else if( *VAR_5 == 4 )
        {
            *VAR_2 = (VAR_0[ **VAR_6 ] / 4) | *VAR_4;

            *VAR_4 = VAR_0[ **VAR_6 ] * 64;
            *VAR_5 = 2;

            (*VAR_6)++;
        }
    }

    return 0;
}
