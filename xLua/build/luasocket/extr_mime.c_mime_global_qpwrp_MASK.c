
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int luaL_Buffer ;
typedef int UC ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int const) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int *,int,int *,size_t*) ;
 scalar_t__ FUNC_5 (int *,int,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int ) ;

__attribute__((used)) static int FUNC_10(lua_State *VAR_2)
{
    size_t VAR_3 = 0;
    int VAR_4 = (int) FUNC_3(VAR_2, 1);
    const UC *VAR_5 = (UC *) FUNC_4(VAR_2, 2, ((void*)0), &VAR_3);
    const UC *VAR_6 = VAR_5 + VAR_3;
    int VAR_7 = (int) FUNC_5(VAR_2, 3, 76);
    luaL_Buffer VAR_8;

    if (!VAR_5) {
        if (VAR_4 < VAR_7) FUNC_9(VAR_2, VAR_1);
        else FUNC_7(VAR_2);
        FUNC_8(VAR_2, VAR_7);
        return 2;
    }

    FUNC_2(VAR_2, &VAR_8);
    while (VAR_5 < VAR_6) {
        switch (*VAR_5) {
            case '\r':
                break;
            case '\n':
                VAR_4 = VAR_7;
                FUNC_1(&VAR_8, VAR_0);
                break;
            case '=':
                if (VAR_4 <= 3) {
                    VAR_4 = VAR_7;
                    FUNC_1(&VAR_8, VAR_1);
                }
                FUNC_0(&VAR_8, *VAR_5);
                VAR_4--;
                break;
            default:
                if (VAR_4 <= 1) {
                    VAR_4 = VAR_7;
                    FUNC_1(&VAR_8, VAR_1);
                }
                FUNC_0(&VAR_8, *VAR_5);
                VAR_4--;
                break;
        }
        VAR_5++;
    }
    FUNC_6(&VAR_8);
    FUNC_8(VAR_2, VAR_4);
    return 2;
}
