
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 scalar_t__ VAR_0 ;
 char* FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int,int) ;
 scalar_t__ FUNC_4 (char const*,char***) ;
 int FUNC_5 (char**) ;

__attribute__((used)) static int FUNC_6( lua_State *VAR_1 )
{
    const char *VAR_2 = FUNC_0( VAR_1, 1 );
    char **VAR_3 = ((void*)0);
    int VAR_4 = 1;

    if( FUNC_4( VAR_2, &VAR_3 )
        != VAR_0 )
        return 0;
    FUNC_1( VAR_1 );
    for( char **VAR_5 = VAR_3; *VAR_5; VAR_5++ )
    {
        FUNC_2( VAR_1, *VAR_5 );
        FUNC_3( VAR_1, -2, VAR_4 );
        VAR_4 ++;
    }
    FUNC_5( VAR_3 );
    return 1;
}
