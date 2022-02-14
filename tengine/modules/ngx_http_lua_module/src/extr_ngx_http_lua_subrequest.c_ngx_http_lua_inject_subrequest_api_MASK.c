
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int,char*) ;
 int VAR_0 ;
 int VAR_1 ;

void
FUNC_3(lua_State *VAR_2)
{
    FUNC_0(VAR_2, 0 , 2 );

    FUNC_1(VAR_2, VAR_0);
    FUNC_2(VAR_2, -2, "capture");

    FUNC_1(VAR_2, VAR_1);
    FUNC_2(VAR_2, -2, "capture_multi");

    FUNC_2(VAR_2, -2, "location");
}
