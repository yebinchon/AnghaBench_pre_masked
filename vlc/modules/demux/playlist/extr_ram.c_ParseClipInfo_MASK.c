
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*,char) ;
 int FUNC_2 (char*,char*) ;
 char* FUNC_3 (char const*) ;
 char* FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5( const char *VAR_0, char **VAR_1, char **VAR_2,
                           char **VAR_3, char **VAR_4, char **VAR_5,
                           char **VAR_6, char **VAR_7 )
{
    char *VAR_8, *VAR_9, *VAR_10, *VAR_11, *VAR_12;
    char *VAR_13 = FUNC_3( VAR_0 );
    VAR_9 = FUNC_1( VAR_13, '"' );
    if( !VAR_9 )
    {
        FUNC_0( VAR_13 );
        return;
    }

    VAR_9++;
    VAR_8 = VAR_9;
    while( 1 )
    {

        VAR_9 = VAR_8;
        VAR_8 = FUNC_1( VAR_9, '|' );
        if( VAR_8 )
            *VAR_8 = '\0';
        else
            VAR_8 = FUNC_1( VAR_9, '"' );
        if( VAR_8 )
            *VAR_8 = '\0';
        else
            VAR_8 = FUNC_1( VAR_9, '\0' );
        if( VAR_8 == VAR_9 )
            break;

        VAR_12 = FUNC_3( VAR_9 );
        if( !VAR_12 )
            break;


        VAR_10 = VAR_12;
        if( FUNC_1( VAR_12, '=' ) )
        {
            VAR_11 = FUNC_1( VAR_12, '=' ) + 1;
            *( FUNC_1( VAR_12, '=' ) ) = '\0';
        }
        else
        {
            FUNC_0( VAR_12 );
            break;
        }

        if( !FUNC_2( VAR_10, "artist name" ) )
            *VAR_1 = FUNC_4( VAR_11 );
        else if( !FUNC_2( VAR_10, "title" ) )
            *VAR_2 = FUNC_4( VAR_11 );
        else if( !FUNC_2( VAR_10, "album name" ) )
            *VAR_3 = FUNC_4( VAR_11 );
        else if( !FUNC_2( VAR_10, "genre" ) )
            *VAR_4 = FUNC_4( VAR_11 );
        else if( !FUNC_2( VAR_10, "year" ) )
            *VAR_5 = FUNC_4( VAR_11 );
        else if( !FUNC_2( VAR_10, "cdnum" ) )
            *VAR_6 = FUNC_4( VAR_11 );
        else if( !FUNC_2( VAR_10, "comments" ) )
            *VAR_7 = FUNC_4( VAR_11 );

        FUNC_0( VAR_12 );
        VAR_8++;
    }

    FUNC_0( VAR_13 );
}
