
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char**,char*,char const*,char*) ;
 char** FUNC_1 (unsigned int,int) ;
 char* FUNC_2 (char*,char) ;

__attribute__((used)) static char **FUNC_3( const char *VAR_0, char *VAR_1 )
{
    unsigned int VAR_2, VAR_3, VAR_4;
    char **VAR_5;
    char *VAR_6 = VAR_1;

    if( !VAR_0 || !VAR_1 )
        return ((void*)0);

    for( VAR_3 = 0, VAR_4 = 1; VAR_1[VAR_3] != '\0'; VAR_3++ )
    {
        if( VAR_1[VAR_3] == ',' )
            VAR_4++;
    }

    VAR_5 = FUNC_1( VAR_4 + 1, sizeof(char*) );
    if( !VAR_5 )
        return ((void*)0);

    for( VAR_2 = 0; VAR_6 && *VAR_6 != '\0' ; )
    {
        char *VAR_7 = VAR_6;
        VAR_6 = FUNC_2( VAR_7, ',' );
        if( VAR_6 )
        {
            *VAR_6++ = '\0';
            while( *VAR_6 == ' ' )
                VAR_6++;
        }
        if( *VAR_7 == '\0' )
            continue;

        if( FUNC_0( &VAR_5[VAR_2++], "%s%s",
                  VAR_7[0] == '.' ? VAR_0 : "",
                  VAR_7 ) == -1 )
            break;
    }
    VAR_5[VAR_2] = ((void*)0);

    return VAR_5;
}
