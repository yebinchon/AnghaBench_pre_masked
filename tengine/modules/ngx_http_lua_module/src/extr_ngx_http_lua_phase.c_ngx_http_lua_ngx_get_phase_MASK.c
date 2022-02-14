
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ngx_http_request_t ;
struct TYPE_3__ {int context; } ;
typedef TYPE_1__ ngx_http_lua_ctx_t ;
typedef int lua_State ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*) ;
 TYPE_1__* FUNC_2 (int *,int ) ;
 int * FUNC_3 (int *) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_4(lua_State *VAR_1)
{
    ngx_http_request_t *VAR_2;
    ngx_http_lua_ctx_t *VAR_3;

    VAR_2 = FUNC_3(VAR_1);




    if (VAR_2 == ((void*)0)) {
        FUNC_1(VAR_1, "init");
        return 1;
    }

    VAR_3 = FUNC_2(VAR_2, VAR_0);
    if (VAR_3 == ((void*)0)) {
        return FUNC_0(VAR_1, "no request ctx found");
    }

    switch (VAR_3->context) {
    case 135:
        FUNC_1(VAR_1, "init_worker");
        break;

    case 132:
        FUNC_1(VAR_1, "set");
        break;

    case 133:
        FUNC_1(VAR_1, "rewrite");
        break;

    case 140:
        FUNC_1(VAR_1, "access");
        break;

    case 137:
        FUNC_1(VAR_1, "content");
        break;

    case 134:
        FUNC_1(VAR_1, "log");
        break;

    case 136:
        FUNC_1(VAR_1, "header_filter");
        break;

    case 138:
        FUNC_1(VAR_1, "body_filter");
        break;

    case 128:
        FUNC_1(VAR_1, "timer");
        break;

    case 139:
        FUNC_1(VAR_1, "balancer");
        break;

    case 131:
        FUNC_1(VAR_1, "ssl_cert");
        break;

    case 129:
        FUNC_1(VAR_1, "ssl_session_store");
        break;

    case 130:
        FUNC_1(VAR_1, "ssl_session_fetch");
        break;

    default:
        return FUNC_0(VAR_1, "unknown phase: %#x", (int) VAR_3->context);
    }

    return 1;
}
