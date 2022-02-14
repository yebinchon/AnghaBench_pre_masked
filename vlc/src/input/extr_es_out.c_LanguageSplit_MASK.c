
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;
 int FUNC_1 (int,char**,char*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*,char) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 char* FUNC_5 (char const*) ;

__attribute__((used)) static char **FUNC_6( const char *VAR_0 )
{
    char *VAR_1;
    char *VAR_2;
    char **VAR_3 = ((void*)0);
    int VAR_4 = 0;

    if( VAR_0 == ((void*)0) ) return ((void*)0);

    VAR_2 = VAR_1 = FUNC_5(VAR_0);

    while( VAR_2 && *VAR_2 )
    {
        char *VAR_5;
        char *VAR_6;

        VAR_5 = FUNC_3(VAR_2, ',' );
        if( VAR_5 ) *VAR_5++ = '\0';

        if( !FUNC_4( VAR_2, "any" ) )
        {
            FUNC_1( VAR_4, VAR_3, FUNC_5("any") );
        }
        else if( !FUNC_4( VAR_2, "none" ) )
        {
            FUNC_1( VAR_4, VAR_3, FUNC_5("none") );
        }
        else
        {
            VAR_6 = FUNC_0( VAR_2 );
            if( FUNC_4( VAR_6, "??" ) )
            {
                FUNC_1( VAR_4, VAR_3, VAR_6 );
            }
            else
            {
                FUNC_2( VAR_6 );
            }
        }

        VAR_2 = VAR_5;
    }

    if( VAR_4 )
    {
        FUNC_1( VAR_4, VAR_3, ((void*)0) );
    }

    FUNC_2( VAR_1 );
    return VAR_3;
}
