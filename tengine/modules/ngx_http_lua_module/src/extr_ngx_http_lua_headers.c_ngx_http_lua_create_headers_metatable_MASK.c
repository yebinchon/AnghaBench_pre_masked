
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ngx_log_t ;
typedef int lua_State ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char const*,int,char*) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int,char*) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int *,int ,char*,int,int ) ;

void
FUNC_9(ngx_log_t *VAR_3, lua_State *VAR_4)
{
    int VAR_5;
    const char VAR_6[] =
        "local tb, key = ...\n"
        "local new_key = string.gsub(string.lower(key), '_', '-')\n"
        "if new_key ~= key then return tb[new_key] else return nil end";

    FUNC_3(VAR_4, FUNC_7(
                          VAR_2));



    FUNC_1(VAR_4, 0, 1);

    VAR_5 = FUNC_0(VAR_4, VAR_6, sizeof(VAR_6) - 1, "=headers metatable");
    if (VAR_5 != 0) {
        FUNC_8(VAR_1, VAR_3, 0,
                      "failed to load Lua code for the metamethod for "
                      "headers: %i: %s", VAR_5, FUNC_6(VAR_4, -1));

        FUNC_2(VAR_4, 3);
        return;
    }

    FUNC_5(VAR_4, -2, "__index");
    FUNC_4(VAR_4, VAR_0);
}
