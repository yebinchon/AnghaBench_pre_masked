
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int uint16_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_18__ {int filter_need_in_memory; int uri; TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_19__ {scalar_t__ (* header_filter_handler ) (TYPE_2__*) ;scalar_t__ body_filter_handler; } ;
typedef TYPE_3__ ngx_http_lua_loc_conf_t ;
struct TYPE_20__ {int context; int * cleanup; } ;
typedef TYPE_4__ ngx_http_lua_ctx_t ;
struct TYPE_21__ {int handler; TYPE_4__* data; } ;
typedef TYPE_5__ ngx_http_cleanup_t ;
struct TYPE_17__ {int log; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (char*,...) ;
 TYPE_5__* FUNC_1 (TYPE_2__*,int ) ;
 TYPE_4__* FUNC_2 (TYPE_2__*,int ) ;
 TYPE_3__* FUNC_3 (TYPE_2__*,int ) ;
 TYPE_4__* FUNC_4 (TYPE_2__*) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int ,int ,int ,char*,int *) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;

__attribute__((used)) static ngx_int_t
FUNC_8(ngx_http_request_t *VAR_8)
{
    ngx_http_lua_loc_conf_t *VAR_9;
    ngx_http_lua_ctx_t *VAR_10;
    ngx_int_t VAR_11;
    ngx_http_cleanup_t *VAR_12;
    uint16_t VAR_13;

    FUNC_6(VAR_4, VAR_8->connection->log, 0,
                   "lua header filter for user lua code, uri \"%V\"", &VAR_8->uri);

    VAR_9 = FUNC_3(VAR_8, VAR_6);

    if (VAR_9->body_filter_handler) {
        VAR_8->filter_need_in_memory = 1;
    }

    if (VAR_9->header_filter_handler == ((void*)0)) {
        FUNC_0("no header filter handler found");
        return FUNC_5(VAR_8);
    }

    VAR_10 = FUNC_2(VAR_8, VAR_6);

    FUNC_0("ctx = %p", VAR_10);

    if (VAR_10 == ((void*)0)) {
        VAR_10 = FUNC_4(VAR_8);
        if (VAR_10 == ((void*)0)) {
            return VAR_2;
        }
    }

    if (VAR_10->cleanup == ((void*)0)) {
        VAR_12 = FUNC_1(VAR_8, 0);
        if (VAR_12 == ((void*)0)) {
            return VAR_2;
        }

        VAR_12->handler = VAR_7;
        VAR_12->data = VAR_10;
        VAR_10->cleanup = &VAR_12->handler;
    }

    VAR_13 = VAR_10->context;
    VAR_10->context = VAR_3;

    FUNC_0("calling header filter handler");
    VAR_11 = VAR_9->header_filter_handler(VAR_8);

    VAR_10->context = VAR_13;

    if (VAR_11 == VAR_1) {
        return VAR_5;
    }

    if (VAR_11 == VAR_0 || VAR_11 == VAR_2) {
        return VAR_11;
    }

    return FUNC_5(VAR_8);
}
