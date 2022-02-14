
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int p_unix ;
typedef int lua_State ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*,int) ;
 char* FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,char const*) ;
 char* FUNC_6 (int ,char const*) ;

__attribute__((used)) static int FUNC_7(lua_State *VAR_0)
{
    p_unix VAR_1 = (p_unix) FUNC_0(VAR_0, "unix{master}", 1);
    const char *VAR_2 = FUNC_2(VAR_0, 2);
    const char *VAR_3 = FUNC_6(VAR_1, VAR_2);
    if (VAR_3) {
        FUNC_3(VAR_0);
        FUNC_5(VAR_0, VAR_3);
        return 2;
    }

    FUNC_1(VAR_0, "unix{client}", 1);
    FUNC_4(VAR_0, 1);
    return 1;
}
