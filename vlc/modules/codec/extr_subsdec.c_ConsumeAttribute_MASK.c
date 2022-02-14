
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char const) ;
 scalar_t__ FUNC_2 (char const) ;
 char* FUNC_3 (size_t) ;
 int FUNC_4 (char*,char const*,size_t) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static char* FUNC_6( const char** VAR_0, char** VAR_1 )
{
    const char* VAR_2 = *VAR_0;
    char* VAR_3;
    *VAR_1 = ((void*)0);

    while (*VAR_2 == ' ')
        VAR_2++;

    size_t VAR_4 = 0;
    char VAR_5;

    while ( *VAR_2 && FUNC_1( *VAR_2 ) )
    {
        VAR_2++;
        VAR_4++;
    }
    if ( !*VAR_2 || VAR_4 == 0 )
        return ((void*)0);
    VAR_3 = FUNC_3( VAR_4 + 1 );
    if ( FUNC_5( !VAR_3 ) )
        return ((void*)0);
    FUNC_4( VAR_3, VAR_2 - VAR_4, VAR_4 );
    VAR_3[VAR_4] = 0;


    while ( *VAR_2 && *VAR_2 != '=' )
        VAR_2++;
    if ( !*VAR_2 )
    {
        *VAR_0 = VAR_2;
        return VAR_3;
    }

    VAR_2++;


    while ( *VAR_2 && FUNC_2( *VAR_2) )
        VAR_2++;

    if ( *VAR_2 == '\'' || *VAR_2 == '"' )
    {

        VAR_5 = *VAR_2;
        VAR_2++;
    }
    else
        VAR_5 = 0;


    while ( *VAR_2 && FUNC_2( *VAR_2 ) )
        VAR_2++;

    VAR_4 = 0;
    while ( *VAR_2 && ( ( VAR_5 != 0 && *VAR_2 != VAR_5 ) ||
                               ( VAR_5 == 0 && ( !FUNC_2(*VAR_2) && *VAR_2 != '>' ) ) ) )
    {
        VAR_2++;
        VAR_4++;
    }
    if ( VAR_4 == 0 )
    {
        *VAR_0 = VAR_2;
        return VAR_3;
    }
    if ( FUNC_5( !( *VAR_1 = FUNC_3( VAR_4 + 1 ) ) ) )
    {
        FUNC_0( VAR_3 );
        return ((void*)0);
    }
    FUNC_4( *VAR_1, VAR_2 - VAR_4, VAR_4 );
    (*VAR_1)[VAR_4] = 0;

    if (VAR_5 != 0 && *VAR_2)
        VAR_2++;
    *VAR_0 = VAR_2;
    return VAR_3;
}
