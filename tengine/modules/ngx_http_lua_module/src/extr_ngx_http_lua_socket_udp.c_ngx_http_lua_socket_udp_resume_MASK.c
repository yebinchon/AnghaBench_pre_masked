
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


typedef int ngx_uint_t ;
typedef int ngx_int_t ;
struct TYPE_22__ {TYPE_5__* connection; } ;
typedef TYPE_1__ ngx_http_request_t ;
struct TYPE_23__ {int (* prepare_retvals ) (TYPE_1__*,TYPE_2__*,int ) ;} ;
typedef TYPE_2__ ngx_http_lua_socket_udp_upstream_t ;
struct TYPE_24__ {scalar_t__ entered_content_phase; TYPE_4__* cur_co_ctx; int resume_handler; } ;
typedef TYPE_3__ ngx_http_lua_ctx_t ;
struct TYPE_25__ {int co; TYPE_2__* data; } ;
typedef TYPE_4__ ngx_http_lua_co_ctx_t ;
struct TYPE_26__ {int log; int requests; } ;
typedef TYPE_5__ ngx_connection_t ;
typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int * FUNC_2 (TYPE_1__*,TYPE_3__*) ;
 int VAR_4 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_5__*,int *,TYPE_1__*,TYPE_3__*,int ) ;
 int FUNC_5 (int *,TYPE_1__*,TYPE_3__*,int) ;
 int VAR_5 ;
 int FUNC_6 (int ,int ,int ,char*) ;
 int FUNC_7 (int ,int ,int ,char*,int) ;
 int FUNC_8 (int ,int ,int ,char*,int (*) (TYPE_1__*,TYPE_2__*,int ),TYPE_2__*) ;
 int FUNC_9 (TYPE_1__*,TYPE_2__*,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_10(ngx_http_request_t *VAR_6)
{
    int VAR_7;
    lua_State *VAR_8;
    ngx_int_t VAR_9;
    ngx_uint_t VAR_10;
    ngx_connection_t *VAR_11;
    ngx_http_lua_ctx_t *VAR_12;
    ngx_http_lua_co_ctx_t *VAR_13;

    ngx_http_lua_socket_udp_upstream_t *VAR_14;

    VAR_12 = FUNC_0(VAR_6, VAR_4);
    if (VAR_12 == ((void*)0)) {
        return VAR_2;
    }

    VAR_12->resume_handler = VAR_5;

    FUNC_6(VAR_3, VAR_6->connection->log, 0,
                   "lua udp operation done, resuming lua thread");

    VAR_13 = VAR_12->cur_co_ctx;





    VAR_14 = VAR_13->data;

    FUNC_8(VAR_3, VAR_6->connection->log, 0,
                   "lua udp socket calling prepare retvals handler %p, "
                   "u:%p", VAR_14->prepare_retvals, VAR_14);

    VAR_7 = VAR_14->prepare_retvals(VAR_6, VAR_14, VAR_12->cur_co_ctx->co);
    if (VAR_7 == VAR_0) {
        return VAR_1;
    }

    VAR_11 = VAR_6->connection;
    VAR_8 = FUNC_2(VAR_6, VAR_12);
    VAR_10 = VAR_11->requests;

    VAR_9 = FUNC_5(VAR_8, VAR_6, VAR_12, VAR_7);

    FUNC_7(VAR_3, VAR_6->connection->log, 0,
                   "lua run thread returned %d", VAR_9);

    if (VAR_9 == VAR_0) {
        return FUNC_4(VAR_11, VAR_8, VAR_6, VAR_12, VAR_10);
    }

    if (VAR_9 == VAR_1) {
        FUNC_1(VAR_6, VAR_1);
        return FUNC_4(VAR_11, VAR_8, VAR_6, VAR_12, VAR_10);
    }

    if (VAR_12->entered_content_phase) {
        FUNC_1(VAR_6, VAR_9);
        return VAR_1;
    }

    return VAR_9;
}
