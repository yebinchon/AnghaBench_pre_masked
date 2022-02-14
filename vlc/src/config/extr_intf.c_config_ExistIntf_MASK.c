
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*,char) ;
 size_t FUNC_4 (char const*) ;
 int FUNC_5 (char*,char const*,size_t) ;

bool FUNC_6( const char *VAR_0 )
{
    FUNC_0( VAR_0 );

    char *VAR_1, *VAR_2;
    size_t VAR_3 = FUNC_4( VAR_0 );

    VAR_1 = VAR_2 = FUNC_1( "extraintf" );
    while( VAR_2 )
    {
        if( !FUNC_5( VAR_2, VAR_0, VAR_3 ) )
        {
            FUNC_2( VAR_1 );
            return 1;
        }
        VAR_2 = FUNC_3( VAR_2, ':' );
        if( VAR_2 ) VAR_2++;
    }
    FUNC_2( VAR_1 );

    VAR_1 = VAR_2 = FUNC_1( "control" );
    while( VAR_2 )
    {
        if( !FUNC_5( VAR_2, VAR_0, VAR_3 ) )
        {
            FUNC_2( VAR_1 );
            return 1;
        }
        VAR_2 = FUNC_3( VAR_2, ':' );
        if( VAR_2 ) VAR_2++;
    }
    FUNC_2( VAR_1 );

    return 0;
}
