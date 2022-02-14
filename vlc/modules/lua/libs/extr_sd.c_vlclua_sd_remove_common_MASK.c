
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int services_discovery_t ;
typedef int lua_State ;
typedef int input_item_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4( lua_State *VAR_0, input_item_t **VAR_1 )
{
    services_discovery_t *VAR_2 = (services_discovery_t *)FUNC_3( VAR_0 );

    if (VAR_1 == ((void*)0))
        return FUNC_1( VAR_0, "expected item" );

    input_item_t *VAR_3 = *VAR_1;
    if (*VAR_1 == ((void*)0))
        return FUNC_1( VAR_0, "already removed item" );

    FUNC_2( VAR_2, VAR_3 );
    FUNC_0( VAR_3 );

    *VAR_1 = ((void*)0);
    return 1;
}
