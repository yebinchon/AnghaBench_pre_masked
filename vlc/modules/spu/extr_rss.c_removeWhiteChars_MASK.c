
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static char *FUNC_3( const char *VAR_0 )
{
    char *VAR_1,*VAR_2, *VAR_3;
    VAR_1 = VAR_2 = FUNC_1( VAR_0 );
    int VAR_4;

    while( ( *VAR_2 == ' ' || *VAR_2 == '\t'
           || *VAR_2 == '\n' || *VAR_2 == '\r' )
           && *VAR_2 != '\0' )
    {
        VAR_2++;
    }
    VAR_4 = FUNC_2( VAR_2 );
    while( --VAR_4 > 0 &&
         ( VAR_2[VAR_4] == ' ' || VAR_2[VAR_4] == '\t'
        || VAR_2[VAR_4] == '\n' || VAR_2[VAR_4] == '\r' ) );
    VAR_2[VAR_4+1] = '\0';
    VAR_3 = FUNC_1( VAR_2 );
    FUNC_0( VAR_1 );
    return VAR_3;
}
