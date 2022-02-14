
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ngx_int_t ;
typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ,int,int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int,char const*) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static ngx_int_t
FUNC_10(lua_State *VAR_4, const char *VAR_5)
{

    int VAR_6;



    FUNC_4(VAR_4, FUNC_9(
                          VAR_3));
    FUNC_6(VAR_4, VAR_0);

    FUNC_0("Code cache table to store: %p", FUNC_8(VAR_4, -1));

    if (!FUNC_1(VAR_4, -1)) {
        FUNC_0("Error: code cache table to load did not exist!!");
        return VAR_1;
    }

    FUNC_5(VAR_4, -2);
    FUNC_7(VAR_4, -2, VAR_5);


    FUNC_3(VAR_4, 1);



    VAR_6 = FUNC_2(VAR_4, 0, 1, 0);
    if (VAR_6 != 0) {
        FUNC_0("Error: failed to call closure factory!!");
        return VAR_1;
    }


    return VAR_2;
}
