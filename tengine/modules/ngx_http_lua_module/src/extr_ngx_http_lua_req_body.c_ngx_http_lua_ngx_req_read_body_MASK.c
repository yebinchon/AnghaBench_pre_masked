
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_14__ {int request_body_in_single_buf; int request_body_in_persistent_file; int request_body_in_clean_file; TYPE_2__* connection; TYPE_1__* main; scalar_t__ request_body_file_log_level; scalar_t__ request_body_in_file_only; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_15__ {int exited; int waiting_more_body; TYPE_5__* downstream; scalar_t__ exit_code; TYPE_5__* cur_co_ctx; } ;
typedef TYPE_4__ ngx_http_lua_ctx_t ;
struct TYPE_16__ {TYPE_3__* data; int cleanup; } ;
typedef TYPE_5__ ngx_http_lua_co_ctx_t ;
typedef int lua_State ;
struct TYPE_13__ {int log; } ;
struct TYPE_12__ {scalar_t__ count; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 TYPE_4__* FUNC_4 (TYPE_3__*,int ) ;
 int FUNC_5 (int *,TYPE_4__*,int) ;
 int FUNC_6 (TYPE_5__*) ;
 TYPE_3__* FUNC_7 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_8 (TYPE_3__*,int ) ;
 int FUNC_9 (int ,int ,int ,char*) ;
 int FUNC_10 (int ,int ,int ,char*,scalar_t__) ;

__attribute__((used)) static int
FUNC_11(lua_State *VAR_9)
{
    ngx_http_request_t *VAR_10;
    int VAR_11;
    ngx_int_t VAR_12;
    ngx_http_lua_ctx_t *VAR_13;
    ngx_http_lua_co_ctx_t *VAR_14;

    VAR_11 = FUNC_2(VAR_9);

    if (VAR_11 != 0) {
        return FUNC_1(VAR_9, "expecting 0 arguments but seen %d", VAR_11);
    }

    VAR_10 = FUNC_7(VAR_9);
    if (VAR_10 == ((void*)0)) {
        return FUNC_1(VAR_9, "request object not found");
    }

    VAR_10->request_body_in_single_buf = 1;
    VAR_10->request_body_in_persistent_file = 1;
    VAR_10->request_body_in_clean_file = 1;


    if (VAR_10->request_body_in_file_only) {
        VAR_10->request_body_file_log_level = 0;
    }


    VAR_13 = FUNC_4(VAR_10, VAR_6);
    if (VAR_13 == ((void*)0)) {
        return FUNC_1(VAR_9, "no ctx found");
    }

    FUNC_5(VAR_9, VAR_13, VAR_3
                               | VAR_1
                               | VAR_2);

    VAR_14 = VAR_13->cur_co_ctx;
    if (VAR_14 == ((void*)0)) {
        return FUNC_1(VAR_9, "no co ctx found");
    }

    FUNC_9(VAR_5, VAR_10->connection->log, 0,
                   "lua start to read buffered request body");

    VAR_12 = FUNC_8(VAR_10, VAR_8);



    VAR_10->main->count--;


    if (VAR_12 >= VAR_4) {
        VAR_13->exit_code = VAR_12;
        VAR_13->exited = 1;

        FUNC_10(VAR_5, VAR_10->connection->log, 0,
                       "http read client request body returned error code %i, "
                       "exitting now", VAR_12);

        return FUNC_3(VAR_9, 0);
    }







    if (VAR_12 == VAR_0) {
        FUNC_9(VAR_5, VAR_10->connection->log, 0,
                       "lua read buffered request body requires I/O "
                       "interruptions");

        VAR_13->waiting_more_body = 1;
        VAR_13->downstream = VAR_14;

        FUNC_6(VAR_14);
        VAR_14->cleanup = VAR_7;
        VAR_14->data = VAR_10;

        return FUNC_3(VAR_9, 0);
    }



    FUNC_9(VAR_5, VAR_10->connection->log, 0,
                   "lua has read buffered request body in a single run");

    return 0;
}
