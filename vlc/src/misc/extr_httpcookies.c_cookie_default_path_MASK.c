
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 char* FUNC_1 (char const*,char) ;
 char* FUNC_2 (char const*) ;
 char* FUNC_3 (char const*,int) ;
 char* FUNC_4 (char*,char) ;

__attribute__((used)) static char *FUNC_5( const char *VAR_0 )
{
    if ( VAR_0 == ((void*)0) || VAR_0[0] != '/' )
        return FUNC_2("/");

    char *VAR_1;
    const char *VAR_2 = FUNC_1( VAR_0, '?' );
    if ( VAR_2 != ((void*)0) )
        VAR_1 = FUNC_3( VAR_0, VAR_2 - VAR_0 );
    else
        VAR_1 = FUNC_2( VAR_0 );

    if ( VAR_1 == ((void*)0) )
        return ((void*)0);

    char *VAR_3 = FUNC_4(VAR_1, '/');
    FUNC_0(VAR_3 != ((void*)0));
    if ( VAR_3 == VAR_1 )
        VAR_1[1] = '\0';
    else
        *VAR_3 = '\0';

    return VAR_1;
}
