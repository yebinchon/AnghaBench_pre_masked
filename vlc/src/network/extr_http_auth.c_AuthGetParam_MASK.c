
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,char const*) ;
 char* FUNC_1 (char const*,char) ;
 char* FUNC_2 (char const*) ;
 int FUNC_3 (char const*) ;
 char* FUNC_4 (char const*,int) ;
 char* FUNC_5 (char const*,char*) ;

__attribute__((used)) static char *FUNC_6( const char *VAR_0, const char *VAR_1 )
{
    char VAR_2[FUNC_3(VAR_1)+3];
    FUNC_0( VAR_2, "%s=\"", VAR_1 );
    VAR_0 = FUNC_5( VAR_0, VAR_2 );
    if ( VAR_0 )
    {
        const char *VAR_3;
        VAR_0 += FUNC_3( VAR_2 );
        VAR_3 = FUNC_1( VAR_0, '"' );
        if ( !VAR_3 )
            return FUNC_2( VAR_0 );
        return FUNC_4( VAR_0, VAR_3 - VAR_0 );
    }
    else
    {
        return ((void*)0);
    }
}
