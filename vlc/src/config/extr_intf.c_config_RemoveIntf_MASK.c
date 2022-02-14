
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char**,char*,char*,char*) ;
 int FUNC_1 (char const*) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char*,char) ;
 size_t FUNC_6 (char const*) ;
 int FUNC_7 (char const*,char*,size_t) ;

void FUNC_8( const char *VAR_0 )
{
    FUNC_1( VAR_0 );

    char *VAR_1, *VAR_2;
    size_t VAR_3 = FUNC_6( VAR_0 );

    VAR_1 = VAR_2 = FUNC_2( "extraintf" );
    while( VAR_2 )
    {
        if( !FUNC_7( VAR_0, VAR_2, VAR_3 ) )
        {
            char *VAR_4;
            char *VAR_5 = VAR_2 + VAR_3;
            if( *VAR_5 == ':' ) VAR_5++;
            *VAR_2 = '\0';
            if( FUNC_0( &VAR_4, "%s%s", VAR_1, VAR_5 ) != -1 )
            {
                FUNC_3( "extraintf", VAR_4 );
                FUNC_4( VAR_4 );
            }
            break;
        }
        VAR_2 = FUNC_5( VAR_2, ':' );
        if( VAR_2 ) VAR_2++;
    }
    FUNC_4( VAR_1 );

    VAR_1 = VAR_2 = FUNC_2( "control" );
    while( VAR_2 )
    {
        if( !FUNC_7( VAR_0, VAR_2, VAR_3 ) )
        {
            char *VAR_6;
            char *VAR_7 = VAR_2 + VAR_3;
            if( *VAR_7 == ':' ) VAR_7++;
            *VAR_2 = '\0';
            if( FUNC_0( &VAR_6, "%s%s", VAR_1, VAR_7 ) != -1 )
            {
                FUNC_3( "control", VAR_6 );
                FUNC_4( VAR_6 );
            }
            break;
        }
        VAR_2 = FUNC_5( VAR_2, ':' );
        if( VAR_2 ) VAR_2++;
    }
    FUNC_4( VAR_1 );
}
