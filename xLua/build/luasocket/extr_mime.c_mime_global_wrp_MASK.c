
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int luaL_Buffer ;
typedef int UC ;


 int VAR_0 ;
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

__attribute__((used)) static int FUNC_10(lua_State *VAR_1)
{
    size_t VAR_2 = 0;
    int VAR_3 = (int) FUNC_3(VAR_1, 1);
    const UC *VAR_4 = (UC *) FUNC_4(VAR_1, 2, ((void*)0), &VAR_2);
    const UC *VAR_5 = VAR_4 + VAR_2;
    int VAR_6 = (int) FUNC_5(VAR_1, 3, 76);
    luaL_Buffer VAR_7;

    if (!VAR_4) {

        if (VAR_3 < VAR_6) FUNC_9(VAR_1, VAR_0);

        else FUNC_7(VAR_1);
        FUNC_8(VAR_1, VAR_6);
        return 2;
    }
    FUNC_2(VAR_1, &VAR_7);
    while (VAR_4 < VAR_5) {
        switch (*VAR_4) {
            case '\r':
                break;
            case '\n':
                FUNC_1(&VAR_7, VAR_0);
                VAR_3 = VAR_6;
                break;
            default:
                if (VAR_3 <= 0) {
                    VAR_3 = VAR_6;
                    FUNC_1(&VAR_7, VAR_0);
                }
                FUNC_0(&VAR_7, *VAR_4);
                VAR_3--;
                break;
        }
        VAR_4++;
    }
    FUNC_6(&VAR_7);
    FUNC_8(VAR_1, VAR_3);
    return 2;
}
