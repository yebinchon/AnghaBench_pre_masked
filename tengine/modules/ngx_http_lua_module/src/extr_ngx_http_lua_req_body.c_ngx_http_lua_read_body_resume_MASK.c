
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
 int VAR_2 ;
 TYPE_2__* FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;
 int * FUNC_2 (TYPE_1__*,TYPE_2__*) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (TYPE_3__*,int *,TYPE_1__*,TYPE_2__*,int ) ;
 scalar_t__ FUNC_4 (int *,TYPE_1__*,TYPE_2__*,int ) ;
 int VAR_4 ;
 int FUNC_5 (int ,int ,int ,char*,scalar_t__) ;

__attribute__((used)) static ngx_int_t
FUNC_6(ngx_http_request_t *VAR_5)
{
    lua_State *VAR_6;
    ngx_int_t VAR_7;
    ngx_uint_t VAR_8;
    ngx_connection_t *VAR_9;
    ngx_http_lua_ctx_t *VAR_10;

    VAR_10 = FUNC_0(VAR_5, VAR_3);

    VAR_10->resume_handler = VAR_4;

    VAR_9 = VAR_5->connection;
    VAR_6 = FUNC_2(VAR_5, VAR_10);
    VAR_8 = VAR_9->requests;

    VAR_7 = FUNC_4(VAR_6, VAR_5, VAR_10, 0);

    FUNC_5(VAR_2, VAR_5->connection->log, 0,
                   "lua run thread returned %d", VAR_7);

    if (VAR_7 == VAR_0) {
        return FUNC_3(VAR_9, VAR_6, VAR_5, VAR_10, VAR_8);
    }

    if (VAR_7 == VAR_1) {
        FUNC_1(VAR_5, VAR_1);
        return FUNC_3(VAR_9, VAR_6, VAR_5, VAR_10, VAR_8);
    }

    if (VAR_10->entered_content_phase) {
        FUNC_1(VAR_5, VAR_7);
        return VAR_1;
    }

    return VAR_7;
}
