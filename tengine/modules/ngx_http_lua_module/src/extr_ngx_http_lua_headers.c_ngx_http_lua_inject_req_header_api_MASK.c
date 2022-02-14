
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
 int VAR_3 ;
 int VAR_4 ;

void
FUNC_2(lua_State *VAR_5)
{
    FUNC_0(VAR_5, VAR_3);
    FUNC_1(VAR_5, -2, "http_version");

    FUNC_0(VAR_5, VAR_4);
    FUNC_1(VAR_5, -2, "raw_header");

    FUNC_0(VAR_5, VAR_1);
    FUNC_1(VAR_5, -2, "clear_header");

    FUNC_0(VAR_5, VAR_2);
    FUNC_1(VAR_5, -2, "set_header");

    FUNC_0(VAR_5, VAR_0);
    FUNC_1(VAR_5, -2, "get_headers");
}
