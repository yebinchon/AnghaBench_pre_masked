
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*,char const*) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static bool FUNC_2( const char* VAR_0, const char* VAR_1 )
{
    const char* VAR_2 = FUNC_0( VAR_0, VAR_1 );
    if ( !VAR_2 )
        return 0;

    const char* VAR_3 = VAR_2 + FUNC_1( VAR_1 );
    while ( *VAR_3 == ' ' )
        VAR_3++;
    if ( *VAR_3 != '>' )
        return 0;

    VAR_2--;
    while ( *VAR_2 == ' ' && VAR_2 > VAR_0 )
        VAR_2--;
    if ( *VAR_2-- != '/' )
        return 0;
    if ( *VAR_2 != '<' )
        return 0;
    return 1;
}
