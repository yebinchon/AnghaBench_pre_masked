
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ngx_http_request_t ;
typedef int ngx_http_lua_ctx_t ;
struct TYPE_4__ {size_t co_status; } ;
typedef TYPE_1__ ngx_http_lua_co_ctx_t ;
typedef int lua_State ;
struct TYPE_5__ {int len; scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (char*,size_t) ;
 int FUNC_1 (int *,int *,int,char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char const*,int ) ;
 int * FUNC_4 (int *,int) ;
 int * FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int *,int) ;
 TYPE_3__* VAR_7 ;
 TYPE_1__* FUNC_7 (int *,int *) ;
 int * FUNC_8 (int *) ;
 int VAR_8 ;

__attribute__((used)) static int
FUNC_9(lua_State *VAR_9)
{
    lua_State *VAR_10;
    ngx_http_request_t *VAR_11;
    ngx_http_lua_ctx_t *VAR_12;
    ngx_http_lua_co_ctx_t *VAR_13;

    VAR_10 = FUNC_4(VAR_9, 1);

    FUNC_1(VAR_9, VAR_10, 1, "coroutine expected");

    VAR_11 = FUNC_8(VAR_9);
    if (VAR_11 == ((void*)0)) {
        return FUNC_2(VAR_9, "no request found");
    }

    VAR_12 = FUNC_5(VAR_11, VAR_8);
    if (VAR_12 == ((void*)0)) {
        return FUNC_2(VAR_9, "no request ctx found");
    }

    FUNC_6(VAR_9, VAR_12, VAR_2
                               | VAR_0
                               | VAR_1
                               | VAR_5
                               | VAR_3
                               | VAR_4);

    VAR_13 = FUNC_7(VAR_10, VAR_12);
    if (VAR_13 == ((void*)0)) {
        FUNC_3(VAR_9, (const char *)
                        VAR_7[VAR_6].data,
                        VAR_7[VAR_6].len);
        return 1;
    }

    FUNC_0("co status: %d", VAR_13->co_status);

    FUNC_3(VAR_9, (const char *)
                    VAR_7[VAR_13->co_status].data,
                    VAR_7[VAR_13->co_status].len);
    return 1;
}
