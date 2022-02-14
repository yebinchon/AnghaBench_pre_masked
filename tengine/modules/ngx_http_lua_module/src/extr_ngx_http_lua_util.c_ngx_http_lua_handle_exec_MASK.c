
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_16__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_23__ {scalar_t__ read_event_handler; TYPE_2__* main; void* write_event_handler; int ctx; TYPE_1__* connection; scalar_t__ filter_finalize; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_25__ {scalar_t__ len; } ;
struct TYPE_26__ {char* data; scalar_t__ len; } ;
struct TYPE_24__ {int entered_content_phase; TYPE_5__ exec_args; TYPE_6__ exec_uri; TYPE_16__* cur_co_ctx; } ;
typedef TYPE_4__ ngx_http_lua_ctx_t ;
typedef int lua_State ;
struct TYPE_22__ {scalar_t__ count; } ;
struct TYPE_21__ {int log; } ;
struct TYPE_20__ {int co_status; int co; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,...) ;
 void* VAR_6 ;
 scalar_t__ FUNC_1 (TYPE_3__*,TYPE_6__*,TYPE_5__*) ;
 int FUNC_2 (TYPE_16__*) ;
 int VAR_7 ;
 int FUNC_3 (TYPE_3__*,int ,int) ;
 scalar_t__ VAR_8 ;
 int FUNC_4 (TYPE_4__*,int) ;
 int VAR_9 ;
 scalar_t__ FUNC_5 (TYPE_3__*,TYPE_6__*) ;
 void* VAR_10 ;
 int FUNC_6 (TYPE_3__*,TYPE_4__*,int ) ;
 int FUNC_7 (int ,int ,int ,char*,TYPE_6__*) ;
 int FUNC_8 (int ,int ,int ,char*,TYPE_5__*,TYPE_6__*) ;
 int FUNC_9 (int ,int) ;

__attribute__((used)) static ngx_int_t
FUNC_10(lua_State *VAR_11, ngx_http_request_t *VAR_12,
    ngx_http_lua_ctx_t *VAR_13)
{
    ngx_int_t VAR_14;

    FUNC_7(VAR_4, VAR_12->connection->log, 0,
                   "lua thread initiated internal redirect to %V",
                   &VAR_13->exec_uri);

    FUNC_2(VAR_13->cur_co_ctx);

    FUNC_3(VAR_12, VAR_13->cur_co_ctx->co, 1);

    VAR_13->cur_co_ctx->co_status = VAR_2;

    if (VAR_12->filter_finalize) {
        FUNC_6(VAR_12, VAR_13, VAR_7);
    }

    FUNC_4(VAR_13, 1 );

    if (VAR_13->exec_uri.data[0] == '@') {
        if (VAR_13->exec_args.len > 0) {
            FUNC_8(VAR_5, VAR_12->connection->log, 0,
                          "query strings %V ignored when exec'ing "
                          "named location %V",
                          &VAR_13->exec_args, &VAR_13->exec_uri);
        }

        VAR_12->write_event_handler = VAR_10;


        if (VAR_12->read_event_handler == VAR_8) {


            VAR_12->read_event_handler = VAR_6;
        }




        FUNC_9(VAR_12->ctx, sizeof(void *) * VAR_9);


        VAR_14 = FUNC_5(VAR_12, &VAR_13->exec_uri);
        if (VAR_14 == VAR_1 || VAR_14 >= VAR_3) {
            return VAR_14;
        }
        return VAR_0;
    }

    FUNC_0("internal redirect to %.*s", (int) VAR_13->exec_uri.len,
       VAR_13->exec_uri.data);

    VAR_12->write_event_handler = VAR_10;

    if (VAR_12->read_event_handler == VAR_8) {


        VAR_12->read_event_handler = VAR_6;
    }

    VAR_14 = FUNC_1(VAR_12, &VAR_13->exec_uri, &VAR_13->exec_args);

    FUNC_0("internal redirect returned %d when in content phase? "
       "%d", (int) VAR_14, VAR_13->entered_content_phase);

    if (VAR_14 == VAR_1 || VAR_14 >= VAR_3) {
        return VAR_14;
    }
    return VAR_0;
}
