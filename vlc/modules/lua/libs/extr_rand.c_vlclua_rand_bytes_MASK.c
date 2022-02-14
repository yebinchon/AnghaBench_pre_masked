
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int lua_Integer ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char*,int) ;
 char* FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7( lua_State *VAR_0 )
{
    lua_Integer VAR_1 = FUNC_1( VAR_0, 1 );
    char* VAR_2 = FUNC_3( VAR_1 * sizeof( *VAR_2 ) );
    if ( FUNC_4( VAR_2 == ((void*)0) ) )
        return FUNC_6( VAR_0 );
    FUNC_5( VAR_2, VAR_1 );
    FUNC_2( VAR_0, VAR_2, VAR_1 );
    FUNC_0( VAR_2 );
    return 1;
}
