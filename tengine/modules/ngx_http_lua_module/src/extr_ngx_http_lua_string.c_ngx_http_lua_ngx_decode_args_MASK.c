
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int lua_State ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int *,int,size_t*) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *,size_t) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int *,int *,int) ;
 int FUNC_8 (int *,int *,size_t) ;

__attribute__((used)) static int
FUNC_9(lua_State *VAR_1)
{
    u_char *VAR_2;
    u_char *VAR_3;
    size_t VAR_4 = 0;
    int VAR_5;
    int VAR_6;

    VAR_5 = FUNC_4(VAR_1);

    if (VAR_5 != 1 && VAR_5 != 2) {
        return FUNC_2(VAR_1, "expecting 1 or 2 arguments but seen %d", VAR_5);
    }

    VAR_2 = (u_char *) FUNC_1(VAR_1, 1, &VAR_4);

    if (VAR_5 == 2) {
        VAR_6 = FUNC_0(VAR_1, 2);
        FUNC_6(VAR_1, 1);

    } else {
        VAR_6 = VAR_0;
    }

    VAR_3 = FUNC_5(VAR_1, VAR_4);
    FUNC_8(VAR_3, VAR_2, VAR_4);

    FUNC_3(VAR_1, 0, 4);

    return FUNC_7(VAR_1, VAR_3, VAR_3 + VAR_4, VAR_6);
}
