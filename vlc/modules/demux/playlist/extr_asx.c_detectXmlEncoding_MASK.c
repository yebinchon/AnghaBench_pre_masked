
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*,char) ;
 int FUNC_1 (char const*,char*) ;
 scalar_t__ FUNC_2 (char const*,char*,int) ;
 char* FUNC_3 (char const*,int) ;
 int FUNC_4 (char const*,char*) ;
 char* FUNC_5 (char const*,char*) ;

__attribute__((used)) static char *FUNC_6( const char *VAR_0 )
{
    const char *VAR_1 = ((void*)0);
    const char *VAR_2 = ((void*)0);

    const char *VAR_3 = ((void*)0);
    const char *VAR_4 = ((void*)0);

    VAR_0 += FUNC_4( VAR_0, " \n\r\t" );
    if( FUNC_2( VAR_0, "<?xml", 5 ) != 0 )
        return ((void*)0);
    VAR_0 += 5;

    const char *VAR_5 = FUNC_5( VAR_0, "?>" );
    if( VAR_5 == ((void*)0) )
        return ((void*)0);

    while( VAR_0 < VAR_5 )
    {
        VAR_1 = VAR_0 = VAR_0 + FUNC_4( VAR_0, " \n\r\t" );
        if( *VAR_0 == '\0' )
            return ((void*)0);
        VAR_2 = VAR_0 = VAR_0 + FUNC_1( VAR_0, " \n\r\t=" );
        if( *VAR_0 == '\0' )
            return ((void*)0);

        VAR_0 += FUNC_4( VAR_0, " \n\r\t" );
        if( *VAR_0 != '=' )
            return ((void*)0);
        VAR_0++;

        VAR_0 += FUNC_4( VAR_0, " \n\r\t" );
        char VAR_6 = *VAR_0;
        if( VAR_6 != '"' && VAR_6 != '\'' )
            return ((void*)0);

        VAR_3 = ++VAR_0;
        VAR_4 = VAR_0 = FUNC_0( VAR_0, VAR_6 );
        if( VAR_0 == ((void*)0) )
            return ((void*)0);
        VAR_0++;

        if( FUNC_2( VAR_1, "encoding", VAR_2 - VAR_1 ) == 0
             && ( VAR_4 -VAR_3) > 0 )
        {
            return FUNC_3(VAR_3, VAR_4 -VAR_3);
        }
    }

    return ((void*)0);
}
