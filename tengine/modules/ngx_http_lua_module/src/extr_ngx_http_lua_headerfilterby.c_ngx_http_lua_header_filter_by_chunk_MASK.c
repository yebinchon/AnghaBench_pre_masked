
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u_char ;
typedef int ngx_pool_t ;
typedef int ngx_int_t ;
struct TYPE_10__ {TYPE_1__* connection; int pool; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_11__ {int exit_code; scalar_t__ exited; } ;
typedef TYPE_3__ ngx_http_lua_ctx_t ;
typedef int lua_State ;
struct TYPE_9__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ,int,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (int *,int,size_t*) ;
 int FUNC_7 (TYPE_2__*,int *,int) ;
 TYPE_3__* FUNC_8 (TYPE_2__*,int ) ;
 int FUNC_9 (int *,TYPE_2__*) ;
 int VAR_5 ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (int ) ;
 int VAR_6 ;
 int FUNC_12 (int ,int ,int ,char*,size_t,int *) ;

ngx_int_t
FUNC_13(lua_State *VAR_7, ngx_http_request_t *VAR_8)
{
    int VAR_9 = 0;
    ngx_int_t VAR_10;
    u_char *VAR_11;
    size_t VAR_12;



    ngx_http_lua_ctx_t *VAR_13;

    VAR_13 = FUNC_8(VAR_8, VAR_5);
    if (VAR_13->exited) {
        VAR_9 = VAR_13->exit_code;
    }


    FUNC_9(VAR_7, VAR_8);






    FUNC_3(VAR_7, VAR_6);
    FUNC_1(VAR_7, 1);


    VAR_10 = FUNC_2(VAR_7, 0, 1, 1);

    FUNC_4(VAR_7, 1);






    FUNC_0("rc == %d", (int) VAR_10);

    if (VAR_10 != 0) {

        VAR_11 = (u_char *) FUNC_6(VAR_7, -1, &VAR_12);

        if (VAR_11 == ((void*)0)) {
            VAR_11 = (u_char *) "unknown reason";
            VAR_12 = sizeof("unknown reason") - 1;
        }

        FUNC_12(VAR_3, VAR_8->connection->log, 0,
                      "failed to run header_filter_by_lua*: %*s", VAR_12, VAR_11);

        FUNC_5(VAR_7, 0);

        return VAR_2;
    }

    FUNC_0("exited: %d, exit code: %d, old exit code: %d",
       (int) VAR_13->exited, (int) VAR_13->exit_code, (int) VAR_9);



    FUNC_5(VAR_7, 0);


    if (VAR_13->exited && VAR_13->exit_code != VAR_9) {
        if (VAR_13->exit_code == VAR_2) {
            return VAR_2;
        }

        FUNC_0("finalize request with %d", (int) VAR_13->exit_code);

        VAR_10 = FUNC_7(VAR_8, &VAR_5,
                                              VAR_13->exit_code);
        if (VAR_10 == VAR_2 || VAR_10 == VAR_0) {
            return VAR_10;
        }

        return VAR_1;
    }

    return VAR_4;
}
