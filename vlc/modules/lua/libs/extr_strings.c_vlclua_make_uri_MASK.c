
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (int *,int) ;
 char* FUNC_2 (int *,int,int *) ;
 int FUNC_3 (int *,char const*) ;
 int * FUNC_4 (char const*,char*) ;
 char* FUNC_5 (char const*,char const*) ;

__attribute__((used)) static int FUNC_6( lua_State *VAR_0 )
{
    const char *VAR_1 = FUNC_1( VAR_0, 1 );
    const char *VAR_2 = FUNC_2( VAR_0, 2, ((void*)0) );
    if( FUNC_4( VAR_1, "://" ) == ((void*)0) )
    {
        char *VAR_3 = FUNC_5( VAR_1, VAR_2 );
        FUNC_3( VAR_0, VAR_3 );
        FUNC_0( VAR_3 );
    }
    else
        FUNC_3( VAR_0, VAR_1 );
    return 1;
}
