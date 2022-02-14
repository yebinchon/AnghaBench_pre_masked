
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_http_request_t ;
typedef int lua_State ;
struct TYPE_4__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int,char*) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int ,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ,int ,int ,char*) ;

lua_State *
FUNC_14(ngx_http_request_t *VAR_4, lua_State *VAR_5, int *VAR_6)
{
    int VAR_7;
    lua_State *VAR_8;

    FUNC_13(VAR_2, VAR_4->connection->log, 0,
                   "lua creating new thread");

    VAR_7 = FUNC_2(VAR_5);

    FUNC_4(VAR_5, FUNC_11(
                          VAR_3));
    FUNC_5(VAR_5, VAR_1);

    VAR_8 = FUNC_3(VAR_5);







    FUNC_9(VAR_8, 0, 0);

    FUNC_1(VAR_8, 0, 1);
    FUNC_10(VAR_8);
    FUNC_6(VAR_8, -2, "__index");
    FUNC_7(VAR_8, -2);

    FUNC_12(VAR_8);



    *VAR_6 = FUNC_0(VAR_5, -2);

    if (*VAR_6 == VAR_0) {
        FUNC_8(VAR_5, VAR_7);
        return ((void*)0);
    }

    FUNC_8(VAR_5, VAR_7);
    return VAR_8;
}
