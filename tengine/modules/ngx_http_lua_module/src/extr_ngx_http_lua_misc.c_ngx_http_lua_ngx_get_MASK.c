
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_8__ {int status; } ;
struct TYPE_9__ {int err_status; scalar_t__ http_version; scalar_t__ header_sent; struct TYPE_9__* main; TYPE_1__ headers_out; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_10__ {scalar_t__ header_sent; } ;
typedef TYPE_3__ ngx_http_lua_ctx_t ;
typedef int lua_State ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (int *,int,size_t*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 TYPE_3__* FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (int *,TYPE_2__*) ;
 TYPE_2__* FUNC_7 (int *) ;
 int VAR_1 ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *,char*,int) ;

__attribute__((used)) static int
FUNC_10(lua_State *VAR_2)
{
    int VAR_3;
    ngx_http_request_t *VAR_4;
    u_char *VAR_5;
    size_t VAR_6;
    ngx_http_lua_ctx_t *VAR_7;

    VAR_4 = FUNC_7(VAR_2);
    if (VAR_4 == ((void*)0)) {
        FUNC_4(VAR_2);
        return 1;
    }

    VAR_7 = FUNC_5(VAR_4, VAR_1);
    if (VAR_7 == ((void*)0)) {
        FUNC_4(VAR_2);
        return 1;
    }

    VAR_5 = (u_char *) FUNC_1(VAR_2, -1, &VAR_6);

    FUNC_0("ngx get %s", *VAR_5);

    if (VAR_6 == sizeof("status") - 1
        && FUNC_9(VAR_5, "status", sizeof("status") - 1) == 0)
    {
        FUNC_6(VAR_2, VAR_4);

        if (VAR_4->err_status) {
            VAR_3 = VAR_4->err_status;

        } else if (VAR_4->headers_out.status) {
            VAR_3 = VAR_4->headers_out.status;

        } else if (VAR_4->http_version == VAR_0) {
            VAR_3 = 9;

        } else {
            VAR_3 = 0;
        }

        FUNC_3(VAR_2, VAR_3);
        return 1;
    }

    if (VAR_6 == sizeof("ctx") - 1
        && FUNC_9(VAR_5, "ctx", sizeof("ctx") - 1) == 0)
    {
        return FUNC_8(VAR_2);
    }

    if (VAR_6 == sizeof("is_subrequest") - 1
        && FUNC_9(VAR_5, "is_subrequest", sizeof("is_subrequest") - 1) == 0)
    {
        FUNC_2(VAR_2, VAR_4 != VAR_4->main);
        return 1;
    }

    if (VAR_6 == sizeof("headers_sent") - 1
        && FUNC_9(VAR_5, "headers_sent", sizeof("headers_sent") - 1) == 0)
    {
        FUNC_6(VAR_2, VAR_4);

        FUNC_0("headers sent: %d", VAR_4->header_sent || VAR_7->header_sent);

        FUNC_2(VAR_2, VAR_4->header_sent || VAR_7->header_sent);
        return 1;
    }

    FUNC_0("key %s not matched", *VAR_5);

    FUNC_4(VAR_2);
    return 1;
}
