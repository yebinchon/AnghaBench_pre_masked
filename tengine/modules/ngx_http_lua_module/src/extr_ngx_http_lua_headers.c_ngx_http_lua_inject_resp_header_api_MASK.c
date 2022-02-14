
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int,char*) ;
 int FUNC_4 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void
FUNC_5(lua_State *VAR_3)
{
    FUNC_1(VAR_3);

    FUNC_0(VAR_3, 0, 2);
    FUNC_2(VAR_3, VAR_0);
    FUNC_3(VAR_3, -2, "__index");
    FUNC_2(VAR_3, VAR_1);
    FUNC_3(VAR_3, -2, "__newindex");
    FUNC_4(VAR_3, -2);

    FUNC_3(VAR_3, -2, "header");

    FUNC_0(VAR_3, 0, 1);

    FUNC_2(VAR_3, VAR_2);
    FUNC_3(VAR_3, -2, "get_headers");

    FUNC_3(VAR_3, -2, "resp");
}
