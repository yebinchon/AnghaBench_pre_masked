
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_6__ {TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_http_request_t ;
typedef int lua_State ;
struct TYPE_5__ {int log; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *,int ,int,int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int,char*) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int ) ;
 scalar_t__ FUNC_10 (int *,int,size_t*) ;
 int FUNC_11 (int *,int ,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_14 (int ,int ,int ,char*,size_t,int *) ;

__attribute__((used)) static ngx_int_t
FUNC_15(lua_State *VAR_3, ngx_http_request_t *VAR_4)
{
    u_char *VAR_5;
    size_t VAR_6;
    ngx_int_t VAR_7;


    FUNC_13(VAR_3, VAR_4);


    FUNC_11(VAR_3, 0 , 1 );


    FUNC_1(VAR_3, 0, 1 );
    FUNC_12(VAR_3);
    FUNC_7(VAR_3, -2, "__index");
    FUNC_8(VAR_3, -2);


    FUNC_6(VAR_3, -2);


    FUNC_4(VAR_3, VAR_2);
    FUNC_2(VAR_3, 1);


    VAR_7 = FUNC_3(VAR_3, 0, 1, 1);

    FUNC_5(VAR_3, 1);

    FUNC_0("rc == %d", (int) VAR_7);

    if (VAR_7 != 0) {

        VAR_5 = (u_char *) FUNC_10(VAR_3, -1, &VAR_6);

        if (VAR_5 == ((void*)0)) {
            VAR_5 = (u_char *) "unknown reason";
            VAR_6 = sizeof("unknown reason") - 1;
        }

        FUNC_14(VAR_1, VAR_4->connection->log, 0,
                      "failed to run balancer_by_lua*: %*s", VAR_6, VAR_5);

        FUNC_9(VAR_3, 0);

        return VAR_0;
    }

    FUNC_9(VAR_3, 0);
    return VAR_7;
}
