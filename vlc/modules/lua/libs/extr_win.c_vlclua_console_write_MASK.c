
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 char* FUNC_0 (int *,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int) ;
 int VAR_0 ;
 int FUNC_3 (int ,char*,char const*) ;

__attribute__((used)) static int FUNC_4( lua_State *VAR_1 )
{
    if( !FUNC_2( VAR_1, 1 ) )
        return FUNC_1( VAR_1, "win.console_write usage: (text)" );
    const char* VAR_2 = FUNC_0( VAR_1, 1 );
    FUNC_3( VAR_0, "%s", VAR_2 );
    return 0;
}
