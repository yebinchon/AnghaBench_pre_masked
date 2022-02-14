
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;
 int FUNC_1 (char const) ;
 int FUNC_2 (char*,char const*,size_t) ;
 scalar_t__ FUNC_3 (int) ;
 char* FUNC_4 (size_t,int) ;

__attribute__((used)) static char* FUNC_5( const char** VAR_0, bool VAR_1 )
{
    const char* VAR_2 = *VAR_0;
    if ( *VAR_2 != '<' )
        return ((void*)0);

    VAR_2++;
    if ( VAR_1 && *VAR_2 == '/' )
        VAR_2++;

    while ( *VAR_2 == ' ' )
        VAR_2++;

    if ( !FUNC_1( *VAR_2 ) )
        return ((void*)0);
    size_t VAR_3 = 1;
    while ( FUNC_0( VAR_2[VAR_3] ) || VAR_2[VAR_3] == '_' )
        VAR_3++;
    char* VAR_4 = FUNC_4( VAR_3 + 1, sizeof( *VAR_4 ) );
    if ( FUNC_3( !VAR_4 ) )
        return ((void*)0);
    FUNC_2( VAR_4, VAR_2, VAR_3 );
    VAR_4[VAR_3] = 0;
    VAR_2 += VAR_3;
    *VAR_0 = VAR_2;
    return VAR_4;
}
