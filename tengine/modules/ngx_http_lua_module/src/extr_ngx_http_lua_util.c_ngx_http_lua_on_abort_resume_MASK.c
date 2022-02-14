
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int ngx_uint_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_15__ {TYPE_3__* connection; } ;
typedef TYPE_1__ ngx_http_request_t ;
struct TYPE_16__ {scalar_t__ entered_content_phase; int resume_handler; } ;
typedef TYPE_2__ ngx_http_lua_ctx_t ;
struct TYPE_17__ {int log; int requests; } ;
typedef TYPE_3__ ngx_connection_t ;
typedef int lua_State ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;
 int * FUNC_2 (TYPE_1__*,TYPE_2__*) ;
 int VAR_4 ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (TYPE_3__*,int *,TYPE_1__*,TYPE_2__*,int ) ;
 scalar_t__ FUNC_5 (int *,TYPE_1__*,TYPE_2__*,int ) ;
 int VAR_5 ;
 int FUNC_6 (int ,int ,int ,char*) ;
 int FUNC_7 (int ,int ,int ,char*,scalar_t__) ;

__attribute__((used)) static ngx_int_t
FUNC_8(ngx_http_request_t *VAR_6)
{
    lua_State *VAR_7;
    ngx_int_t VAR_8;
    ngx_uint_t VAR_9;
    ngx_connection_t *VAR_10;
    ngx_http_lua_ctx_t *VAR_11;

    VAR_11 = FUNC_0(VAR_6, VAR_4);
    if (VAR_11 == ((void*)0)) {
        return VAR_2;
    }

    VAR_11->resume_handler = VAR_5;

    FUNC_6(VAR_3, VAR_6->connection->log, 0,
                   "lua resuming the on_abort callback thread");





    VAR_10 = VAR_6->connection;
    VAR_7 = FUNC_2(VAR_6, VAR_11);
    VAR_9 = VAR_10->requests;

    VAR_8 = FUNC_5(VAR_7, VAR_6, VAR_11, 0);

    FUNC_7(VAR_3, VAR_6->connection->log, 0,
                   "lua run thread returned %d", VAR_8);

    if (VAR_8 == VAR_0) {
        return FUNC_4(VAR_10, VAR_7, VAR_6, VAR_11, VAR_9);
    }

    if (VAR_8 == VAR_1) {
        FUNC_1(VAR_6, VAR_1);
        return FUNC_4(VAR_10, VAR_7, VAR_6, VAR_11, VAR_9);
    }

    if (VAR_11->entered_content_phase) {
        FUNC_1(VAR_6, VAR_8);
        return VAR_1;
    }

    return VAR_8;
}
