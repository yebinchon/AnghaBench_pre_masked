
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int lua_Number ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int *) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static int FUNC_2( lua_State *VAR_1, FILE* VAR_2 )
{
    lua_Number VAR_3;
    if ( FUNC_0( VAR_2, VAR_0, &VAR_3 ) != 1 )
        return 0;
    FUNC_1( VAR_1, VAR_3 );
    return 1;
}
