
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 long FUNC_0 (int*,int) ;
 size_t FUNC_1 (char const*,char*) ;
 int FUNC_2 (char const*,char*,int) ;
 int FUNC_3 (int*,int,char const*) ;

__attribute__((used)) static int FUNC_4( const char *VAR_0, size_t VAR_1,
                        uint8_t *VAR_2, size_t VAR_3 )
{
    const char *VAR_4 = VAR_0;
    uint8_t *VAR_5 = VAR_2;
    int VAR_6 = 0;
    int VAR_7 = 0;

    while( !VAR_6 && VAR_4 < VAR_0 + VAR_1 && *VAR_4 != '=' )
    {
        if( *VAR_4 == '\r' || *VAR_4 == '\n' )
        {
            VAR_4++;
            continue;
        }

        size_t VAR_8 = FUNC_1( VAR_4, "\r\n" );
        if( VAR_8 == 0 )
            continue;

        if( !VAR_7 )
        {
            if( !FUNC_2( VAR_4, "-----BEGIN PGP", 14 ) )
                VAR_7 = 1;

            VAR_4 += VAR_8 + 1;
            continue;
        }

        if( !FUNC_2( VAR_4, "Version:", 8 ) )
        {
            VAR_4 += VAR_8 + 1;
            continue;
        }

        if( VAR_4[VAR_8 - 1] == '=' )
        {
            VAR_6 = 1;
        }

        VAR_5 += FUNC_3( VAR_5,
                        VAR_2 - VAR_5 + VAR_3, VAR_4 );
        VAR_4 += VAR_8 + 1;
    }


    if( VAR_4 + 5 > VAR_0 + VAR_1 || *VAR_4++ != '=' )
        return 0;

    uint8_t VAR_9[3];
    if( FUNC_3( VAR_9, 3, VAR_4 ) != 3 )
        return 0;

    long VAR_10 = FUNC_0( VAR_2, VAR_5 - VAR_2 );
    long VAR_11 = ( 0 << 24 ) + ( VAR_9[0] << 16 ) + ( VAR_9[1] << 8 ) + VAR_9[2];

    return VAR_11 == VAR_10 ? VAR_5 - VAR_2 : 0;
}
