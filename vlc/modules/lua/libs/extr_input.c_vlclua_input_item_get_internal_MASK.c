
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int input_item_t ;


 int ** FUNC_0 (int *,int,char*) ;
 int FUNC_1 (int *,char*) ;

__attribute__((used)) static input_item_t* FUNC_2( lua_State *VAR_0 )
{
    input_item_t **VAR_1 = FUNC_0( VAR_0, 1, "input_item" );
    input_item_t *VAR_2 = *VAR_1;

    if( !VAR_2 )
        FUNC_1( VAR_0, "script went completely foobar" );

    return VAR_2;
}
