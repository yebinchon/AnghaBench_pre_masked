
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 scalar_t__ FUNC_0 (int *,int,char*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static int FUNC_3( lua_State *VAR_0 )
{
    int **VAR_1 = (int**)FUNC_0( VAR_0, 1, "net_listen" );
    int *VAR_2 = *VAR_1;

    int VAR_3 = 0;
    while( VAR_2[VAR_3] != -1 )
        FUNC_1( VAR_0, FUNC_2( VAR_0, VAR_2[VAR_3++] ) );

    return VAR_3;
}
