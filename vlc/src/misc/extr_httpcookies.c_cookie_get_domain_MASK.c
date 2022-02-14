
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*,char*) ;
 int FUNC_1 (char*,char const*,scalar_t__) ;
 scalar_t__ FUNC_2 (char const*) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static char *FUNC_4( const char *VAR_0 )
{
    char *VAR_1 = FUNC_0( VAR_0, "domain" );
    if( VAR_1 == ((void*)0) )
        return ((void*)0);

    if( VAR_1[0] == '.' )
    {
        const char *VAR_2 = VAR_1 + FUNC_3( VAR_1, "." );
        FUNC_1( VAR_1, VAR_2, FUNC_2( VAR_2 ) + 1 );
    }
    return VAR_1;
}
