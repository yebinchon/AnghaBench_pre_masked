
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int FUNC_0 (int *,char*,char*) ;
 int FUNC_1 (int *,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,char*,int ,int ) ;
 int FUNC_3 (int *,int ) ;
 int VAR_2 ;

int FUNC_4(lua_State *VAR_3) {

    FUNC_1(VAR_3, "unix{master}", VAR_2);
    FUNC_1(VAR_3, "unix{client}", VAR_2);
    FUNC_1(VAR_3, "unix{server}", VAR_2);

    FUNC_0(VAR_3, "unix{master}", "unix{any}");
    FUNC_0(VAR_3, "unix{client}", "unix{any}");
    FUNC_0(VAR_3, "unix{server}", "unix{any}");





    FUNC_2(VAR_3, "socket", VAR_0, 0);
    FUNC_3(VAR_3, VAR_1);


    return 1;
}
