
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_char ;
typedef int ngx_uint_t ;
struct TYPE_10__ {scalar_t__ len; } ;
struct TYPE_8__ {int status; TYPE_4__ status_line; } ;
struct TYPE_9__ {TYPE_2__ headers_out; scalar_t__ err_status; TYPE_1__* connection; scalar_t__ header_sent; } ;
typedef TYPE_3__ ngx_http_request_t ;
typedef int lua_State ;
struct TYPE_7__ {int log; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int,size_t*) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,TYPE_3__*) ;
 TYPE_3__* FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ,int ,char*) ;
 int FUNC_8 (TYPE_4__*,char*) ;
 scalar_t__ FUNC_9 (int *,char*,int) ;

__attribute__((used)) static int
FUNC_10(lua_State *VAR_1)
{
    ngx_http_request_t *VAR_2;
    u_char *VAR_3;
    size_t VAR_4;


    VAR_3 = (u_char *) FUNC_0(VAR_1, 2, &VAR_4);

    if (VAR_4 == sizeof("status") - 1
        && FUNC_9(VAR_3, "status", sizeof("status") - 1) == 0)
    {
        VAR_2 = FUNC_5(VAR_1);
        if (VAR_2 == ((void*)0)) {
            return FUNC_2(VAR_1, "no request object found");
        }

        if (VAR_2->header_sent) {
            FUNC_7(VAR_0, VAR_2->connection->log, 0,
                          "attempt to set ngx.status after sending out "
                          "response headers");
            return 0;
        }

        if (VAR_2->err_status) {
            VAR_2->err_status = 0;
        }

        FUNC_4(VAR_1, VAR_2);


        VAR_2->headers_out.status = (ngx_uint_t) FUNC_1(VAR_1, 3);

        if (VAR_2->headers_out.status == 101) {





            FUNC_8(&VAR_2->headers_out.status_line, "101 Switching Protocols");

        } else {
            VAR_2->headers_out.status_line.len = 0;
        }

        return 0;
    }

    if (VAR_4 == sizeof("ctx") - 1
        && FUNC_9(VAR_3, "ctx", sizeof("ctx") - 1) == 0)
    {
        VAR_2 = FUNC_5(VAR_1);
        if (VAR_2 == ((void*)0)) {
            return FUNC_2(VAR_1, "no request object found");
        }

        return FUNC_6(VAR_1);
    }

    FUNC_3(VAR_1, -3);
    return 0;
}
