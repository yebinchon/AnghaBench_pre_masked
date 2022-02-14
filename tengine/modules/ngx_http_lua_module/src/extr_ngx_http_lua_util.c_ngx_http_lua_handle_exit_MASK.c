
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_13__ ;


typedef scalar_t__ ngx_socket_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_16__ {scalar_t__ status; } ;
struct TYPE_17__ {scalar_t__ header_sent; TYPE_2__ headers_out; TYPE_1__* connection; scalar_t__ filter_finalize; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_18__ {scalar_t__ exit_code; scalar_t__ entered_content_phase; scalar_t__ header_sent; scalar_t__ buffering; TYPE_13__* cur_co_ctx; } ;
typedef TYPE_4__ ngx_http_lua_ctx_t ;
typedef int lua_State ;
struct TYPE_15__ {scalar_t__ fd; int log; } ;
struct TYPE_14__ {int co_status; int co; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (TYPE_13__*) ;
 int VAR_10 ;
 int FUNC_1 (TYPE_3__*,int ,int) ;
 int FUNC_2 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_3__*,TYPE_4__*,int *) ;
 int FUNC_4 (TYPE_3__*,TYPE_4__*,int ) ;
 int FUNC_5 (int ,int ,int ,char*,scalar_t__) ;

__attribute__((used)) static ngx_int_t
FUNC_6(lua_State *VAR_11, ngx_http_request_t *VAR_12,
    ngx_http_lua_ctx_t *VAR_13)
{
    ngx_int_t VAR_14;

    FUNC_5(VAR_8, VAR_12->connection->log, 0,
                   "lua thread aborting request with status %d",
                   VAR_13->exit_code);

    FUNC_0(VAR_13->cur_co_ctx);

    FUNC_1(VAR_12, VAR_13->cur_co_ctx->co, 1);

    VAR_13->cur_co_ctx->co_status = VAR_3;

    if (VAR_12->filter_finalize) {
        FUNC_4(VAR_12, VAR_13, VAR_10);
    }

    FUNC_2(VAR_13, 0);

    if (VAR_12->connection->fd == (ngx_socket_t) -1) {
        return VAR_13->exit_code;
    }


    if (!VAR_12->header_sent
        && !VAR_13->header_sent
        && VAR_12->headers_out.status == 0
        && VAR_13->exit_code >= VAR_5)
    {
        VAR_12->headers_out.status = VAR_13->exit_code;
    }


    if (VAR_13->buffering
        && VAR_12->headers_out.status
        && VAR_13->exit_code != VAR_0
        && VAR_13->exit_code != VAR_6
        && VAR_13->exit_code != VAR_1
        && VAR_13->exit_code != VAR_2)
    {
        VAR_14 = FUNC_3(VAR_12, VAR_13, ((void*)0) );

        if (VAR_14 == VAR_0 || VAR_14 >= VAR_7) {
            return VAR_14;
        }

        if (VAR_13->exit_code >= VAR_5) {
            return VAR_5;
        }

        return VAR_13->exit_code;
    }

    if ((VAR_13->exit_code == VAR_9
         && VAR_13->entered_content_phase)
        || (VAR_13->exit_code >= VAR_5
            && VAR_13->exit_code < VAR_7
            && VAR_13->exit_code != VAR_4))
    {
        VAR_14 = FUNC_3(VAR_12, VAR_13, ((void*)0) );

        if (VAR_14 == VAR_0 || VAR_14 >= VAR_7) {
            return VAR_14;
        }
    }


    if ((VAR_12->header_sent || VAR_13->header_sent)
        && VAR_13->exit_code > VAR_9
        && VAR_13->exit_code != VAR_6
        && VAR_13->exit_code != VAR_1
        && VAR_13->exit_code != VAR_2)
    {
        if (VAR_13->entered_content_phase) {
            return VAR_9;
        }

        return VAR_5;
    }


    return VAR_13->exit_code;
}
