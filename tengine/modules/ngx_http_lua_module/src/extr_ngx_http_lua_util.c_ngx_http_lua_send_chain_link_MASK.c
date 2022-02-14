
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_20__ {scalar_t__ content_length_n; } ;
struct TYPE_22__ {int method; int header_only; scalar_t__ http_version; TYPE_2__* connection; struct TYPE_22__* main; int request_body; TYPE_1__ headers_out; int header_sent; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_23__ {scalar_t__ http10_buffering; } ;
typedef TYPE_4__ ngx_http_lua_loc_conf_t ;
struct TYPE_24__ {int eof; int buffering; TYPE_6__* out; int header_sent; scalar_t__ acquired_raw_req_socket; } ;
typedef TYPE_5__ ngx_http_lua_ctx_t ;
struct TYPE_25__ {struct TYPE_25__* next; } ;
typedef TYPE_6__ ngx_chain_t ;
struct TYPE_21__ {int log; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 TYPE_4__* FUNC_2 (TYPE_3__*,int ) ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (TYPE_3__*,TYPE_6__*) ;
 scalar_t__ FUNC_4 (TYPE_3__*,TYPE_5__*) ;
 scalar_t__ FUNC_5 (TYPE_3__*,TYPE_5__*) ;
 scalar_t__ FUNC_6 (TYPE_3__*,int ) ;
 int FUNC_7 (int ,int ,int ,char*) ;

ngx_int_t
FUNC_8(ngx_http_request_t *VAR_8, ngx_http_lua_ctx_t *VAR_9,
    ngx_chain_t *VAR_10)
{
    ngx_int_t VAR_11;
    ngx_chain_t *VAR_12;
    ngx_chain_t **VAR_13;
    ngx_http_lua_loc_conf_t *VAR_14;


    if (VAR_9->acquired_raw_req_socket || VAR_9->eof) {
        FUNC_0("ctx->eof already set or raw req socket already acquired");
        return VAR_6;
    }


    if ((VAR_8->method & VAR_1) && !VAR_8->header_only) {
        VAR_8->header_only = 1;
    }

    VAR_14 = FUNC_2(VAR_8, VAR_7);

    if (VAR_14->http10_buffering
        && !VAR_9->buffering
        && !VAR_8->header_sent
        && !VAR_9->header_sent
        && VAR_8->http_version < VAR_4
        && VAR_8->headers_out.content_length_n < 0)
    {
        VAR_9->buffering = 1;
    }

    VAR_11 = FUNC_4(VAR_8, VAR_9);

    if (VAR_11 == VAR_0 || VAR_11 > VAR_6) {
        return VAR_11;
    }

    if (VAR_8->header_only) {
        VAR_9->eof = 1;

        if (VAR_9->buffering) {
            return FUNC_5(VAR_8, VAR_9);
        }

        return VAR_11;
    }

    if (VAR_10 == ((void*)0)) {
        FUNC_0("last buf to be sent");


        if (!VAR_8->request_body && VAR_8 == VAR_8->main) {
            if (FUNC_1(VAR_8) != VAR_6) {
                return VAR_0;
            }
        }


        if (VAR_9->buffering) {
            VAR_11 = FUNC_5(VAR_8, VAR_9);
            if (VAR_11 == VAR_0 || VAR_11 >= VAR_3) {
                return VAR_11;
            }

            if (VAR_9->out) {

                VAR_11 = FUNC_3(VAR_8, VAR_9->out);

                if (VAR_11 == VAR_0 || VAR_11 >= VAR_3) {
                    return VAR_11;
                }

                VAR_9->out = ((void*)0);
            }
        }
        VAR_9->eof = 1;

        FUNC_7(VAR_5, VAR_8->connection->log, 0,
                       "lua sending last buf of the response body");

        VAR_11 = FUNC_6(VAR_8, VAR_2);

        if (VAR_11 == VAR_0 || VAR_11 >= VAR_3) {
            return VAR_11;
        }

        return VAR_6;
    }



    if (VAR_9->buffering) {
        FUNC_7(VAR_5, VAR_8->connection->log, 0,
                       "lua buffering output bufs for the HTTP 1.0 request");

        for (VAR_12 = VAR_9->out, VAR_13 = &VAR_9->out; VAR_12; VAR_12 = VAR_12->next) {
            VAR_13 = &VAR_12->next;
        }

        *VAR_13 = VAR_10;

        return VAR_6;
    }

    return FUNC_3(VAR_8, VAR_10);
}
