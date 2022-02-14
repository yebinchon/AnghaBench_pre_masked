
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void
FUNC_2(lua_State *VAR_3)
{
    FUNC_0(VAR_3, VAR_2);
    FUNC_1(VAR_3, -2, "set_uri_args");

    FUNC_0(VAR_3, VAR_1);
    FUNC_1(VAR_3, -2, "get_uri_args");

    FUNC_0(VAR_3, VAR_1);
    FUNC_1(VAR_3, -2, "get_query_args");

    FUNC_0(VAR_3, VAR_0);
    FUNC_1(VAR_3, -2, "get_post_args");
}
