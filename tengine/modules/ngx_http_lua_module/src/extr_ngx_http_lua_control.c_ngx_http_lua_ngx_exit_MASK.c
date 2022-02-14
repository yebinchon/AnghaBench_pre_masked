
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_9__ {scalar_t__ status; } ;
struct TYPE_11__ {TYPE_2__* connection; TYPE_1__ headers_out; scalar_t__ header_sent; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_12__ {int context; scalar_t__ exit_code; int exited; scalar_t__ header_sent; scalar_t__ no_abort; } ;
typedef TYPE_4__ ngx_http_lua_ctx_t ;
typedef int lua_State ;
struct TYPE_10__ {int log; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 TYPE_4__* FUNC_5 (TYPE_3__*,int ) ;
 int FUNC_6 (int *,TYPE_4__*,int) ;
 TYPE_3__* FUNC_7 (int *) ;
 int VAR_17 ;
 int FUNC_8 (int ,int ,int ,char*,scalar_t__) ;
 int FUNC_9 (int ,int ,int ,char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int
FUNC_10(lua_State *VAR_18)
{
    ngx_int_t VAR_19;
    ngx_http_request_t *VAR_20;
    ngx_http_lua_ctx_t *VAR_21;

    if (FUNC_3(VAR_18) != 1) {
        return FUNC_2(VAR_18, "expecting one argument");
    }

    VAR_20 = FUNC_7(VAR_18);
    if (VAR_20 == ((void*)0)) {
        return FUNC_2(VAR_18, "no request object found");
    }

    VAR_21 = FUNC_5(VAR_20, VAR_17);
    if (VAR_21 == ((void*)0)) {
        return FUNC_2(VAR_18, "no request ctx found");
    }

    FUNC_6(VAR_18, VAR_21, VAR_7
                               | VAR_3
                               | VAR_5
                               | VAR_11
                               | VAR_6
                               | VAR_4
                               | VAR_8
                               | VAR_10
                               | VAR_9);

    VAR_19 = (ngx_int_t) FUNC_1(VAR_18, 1);

    if (VAR_21->context & (VAR_8
                        | VAR_10
                        | VAR_9))
    {
        return FUNC_2(VAR_18, "no SSL support");


    }

    if (VAR_21->no_abort
        && VAR_19 != VAR_0
        && VAR_19 != VAR_2
        && VAR_19 != VAR_13
        && VAR_19 != VAR_1)
    {
        return FUNC_2(VAR_18, "attempt to abort with pending subrequests");
    }

    if ((VAR_20->header_sent || VAR_21->header_sent)
        && VAR_19 >= VAR_14
        && VAR_19 != VAR_13
        && VAR_19 != VAR_1
        && VAR_19 != VAR_2)
    {
        if (VAR_19 != (ngx_int_t) VAR_20->headers_out.status) {
            FUNC_9(VAR_16, VAR_20->connection->log, 0, "attempt to "
                          "set status %i via ngx.exit after sending out the "
                          "response status %ui", VAR_19, VAR_20->headers_out.status);
        }

        VAR_19 = VAR_12;
    }

    FUNC_0("setting exit code: %d", (int) VAR_19);

    VAR_21->exit_code = VAR_19;
    VAR_21->exited = 1;

    FUNC_8(VAR_15, VAR_20->connection->log, 0,
                   "lua exit with code %i", VAR_21->exit_code);

    if (VAR_21->context & (VAR_6
                        | VAR_4))
    {
        return 0;
    }

    FUNC_0("calling yield");
    return FUNC_4(VAR_18, 0);
}
