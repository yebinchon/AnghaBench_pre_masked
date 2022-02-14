
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u_char ;
typedef int ngx_int_t ;
struct TYPE_9__ {scalar_t__ status; } ;
struct TYPE_11__ {TYPE_2__* connection; TYPE_1__ headers_out; scalar_t__ header_sent; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_12__ {int context; int exit_code; int exited; scalar_t__ header_sent; scalar_t__ no_abort; } ;
typedef TYPE_4__ ngx_http_lua_ctx_t ;
struct TYPE_10__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 TYPE_4__* FUNC_0 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_4__*,int,int *,size_t*) ;
 int VAR_19 ;
 int FUNC_2 (int ,int ,int ,char*,int) ;
 int FUNC_3 (int ,int ,int ,char*,int,scalar_t__) ;
 int * FUNC_4 (int *,size_t,char*) ;

int
FUNC_5(ngx_http_request_t *VAR_20, int VAR_21, u_char *VAR_22,
    size_t *VAR_23)
{
    ngx_http_lua_ctx_t *VAR_24;

    VAR_24 = FUNC_0(VAR_20, VAR_19);
    if (VAR_24 == ((void*)0)) {
        *VAR_23 = FUNC_4(VAR_22, *VAR_23, "no request ctx found") - VAR_22;
        return VAR_1;
    }

    if (FUNC_1(VAR_24, VAR_8
                                       | VAR_4
                                       | VAR_6
                                       | VAR_12
                                       | VAR_7
                                       | VAR_5
                                       | VAR_9
                                       | VAR_11
                                       | VAR_10,
                                       VAR_22, VAR_23)
        != VAR_18)
    {
        return VAR_1;
    }

    if (VAR_24->context & (VAR_9
                        | VAR_11
                        | VAR_10))
    {
        return VAR_1;


    }

    if (VAR_24->no_abort
        && VAR_21 != VAR_1
        && VAR_21 != VAR_3
        && VAR_21 != VAR_14
        && VAR_21 != VAR_2)
    {
        *VAR_23 = FUNC_4(VAR_22, *VAR_23,
                               "attempt to abort with pending subrequests")
                  - VAR_22;
        return VAR_1;
    }

    if ((VAR_20->header_sent || VAR_24->header_sent)
        && VAR_21 >= VAR_15
        && VAR_21 != VAR_14
        && VAR_21 != VAR_2
        && VAR_21 != VAR_3)
    {
        if (VAR_21 != (ngx_int_t) VAR_20->headers_out.status) {
            FUNC_3(VAR_17, VAR_20->connection->log, 0, "attempt to "
                          "set status %d via ngx.exit after sending out the "
                          "response status %ui", VAR_21,
                          VAR_20->headers_out.status);
        }

        VAR_21 = VAR_13;
    }

    VAR_24->exit_code = VAR_21;
    VAR_24->exited = 1;

    FUNC_2(VAR_16, VAR_20->connection->log, 0,
                   "lua exit with code %i", VAR_24->exit_code);

    if (VAR_24->context & (VAR_7
                        | VAR_5))
    {
        return VAR_0;
    }

    return VAR_18;
}
