
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int,int) ;

void
FUNC_11(lua_State *VAR_0, int VAR_1)
{
    if (VAR_1 < 0) {
        VAR_1 = FUNC_1(VAR_0) + VAR_1 + 1;
    }

    FUNC_7(VAR_0, -2);
    FUNC_8(VAR_0, VAR_1);
    if (FUNC_3(VAR_0, -1)) {
        FUNC_6(VAR_0, 1);
        FUNC_9(VAR_0, VAR_1);

    } else {
        if (!FUNC_4(VAR_0, -1)) {

            FUNC_0(VAR_0, 4, 0);

            FUNC_2(VAR_0, -2);

            FUNC_10(VAR_0, -2, 1);

            FUNC_2(VAR_0, -2);


            FUNC_10(VAR_0, -2, 2);

            FUNC_9(VAR_0, VAR_1);

        } else {

            FUNC_2(VAR_0, -2);

            FUNC_10(VAR_0, -2, FUNC_5(VAR_0, -2) + 1);

            FUNC_6(VAR_0, 2);
        }
    }
}
