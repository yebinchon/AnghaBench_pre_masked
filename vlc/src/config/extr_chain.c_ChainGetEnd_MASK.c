
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static const char *FUNC_2( const char *VAR_0 )
{
    const char *VAR_1 = VAR_0;
    char VAR_2;

    if( !VAR_0 )
        return ((void*)0);


    FUNC_1( VAR_1 );

    for( ;; VAR_1++)
    {
        if( *VAR_1 == '\0' || *VAR_1 == ',' || *VAR_1 == '}' )
            return VAR_1;

        if( *VAR_1 == '{' || *VAR_1 == '"' || *VAR_1 == '\'' )
            break;
    }


    if( *VAR_1 == '{' )
        VAR_2 = '}';
    else
        VAR_2 = *VAR_1;
    VAR_1++;


    for( ;; )
    {
        if( *VAR_1 == '\0')
            return VAR_1;

        if( FUNC_0( VAR_1 ) )
            VAR_1 += 2;
        else if( *VAR_1 == VAR_2 )
            return ++VAR_1;
        else if( *VAR_1 == '{' && VAR_2 == '}' )
            VAR_1 = FUNC_2( VAR_1 );
        else
            VAR_1++;
    }
}
