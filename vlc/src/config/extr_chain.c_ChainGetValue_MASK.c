
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*,char const*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char const*,int) ;

__attribute__((used)) static char *FUNC_5( const char **VAR_0 )
{
    const char *VAR_1 = *VAR_0;

    char *VAR_2 = ((void*)0);
    const char *VAR_3;
    bool VAR_4 = (*VAR_1 == '{');

    if( *VAR_1 == '=' )
        VAR_1++;

    VAR_3 = FUNC_0( VAR_1 );
    if( VAR_3 <= VAR_1 )
    {
        VAR_2 = ((void*)0);
    }
    else
    {



        FUNC_1( VAR_1 );
    }

    if( VAR_3 <= VAR_1 )
    {
        VAR_2 = ((void*)0);
    }
    else
    {
        if( *VAR_1 == '\'' || *VAR_1 == '"' || ( !VAR_4 && *VAR_1 == '{' ) )
        {
            VAR_1++;

            if( *(VAR_3-1) != '\'' && *(VAR_3-1) == '"' )
                FUNC_2( VAR_1, VAR_3 );

            if( VAR_3 - 1 <= VAR_1 )
                VAR_2 = ((void*)0);
            else
                VAR_2 = FUNC_4( VAR_1, VAR_3 -1 - VAR_1 );
        }
        else
        {
            FUNC_2( VAR_1, VAR_3 );
            if( VAR_3 <= VAR_1 )
                VAR_2 = ((void*)0);
            else
                VAR_2 = FUNC_4( VAR_1, VAR_3 - VAR_1 );
        }
    }


    if( VAR_2 )
        FUNC_3( VAR_2 );


    *VAR_0 = VAR_3;
    return VAR_2;
}
