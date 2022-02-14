
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef scalar_t__ ngx_uint_t ;
typedef int ngx_int_t ;
struct TYPE_19__ {TYPE_2__* main; int uri; TYPE_1__* connection; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_20__ {scalar_t__ malloc_trim_cycle; scalar_t__ malloc_trim_req_count; } ;
typedef TYPE_4__ ngx_http_lua_main_conf_t ;
struct TYPE_21__ {int (* log_handler ) (TYPE_3__*) ;} ;
typedef TYPE_5__ ngx_http_lua_loc_conf_t ;
struct TYPE_22__ {int context; } ;
typedef TYPE_6__ ngx_http_lua_ctx_t ;
struct TYPE_18__ {int count; } ;
struct TYPE_17__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int) ;
 TYPE_6__* FUNC_2 (TYPE_3__*,int ) ;
 TYPE_5__* FUNC_3 (TYPE_3__*,int ) ;
 TYPE_4__* FUNC_4 (TYPE_3__*,int ) ;
 TYPE_6__* FUNC_5 (TYPE_3__*) ;
 int VAR_4 ;
 int FUNC_6 (int ,int ,int ,char*) ;
 int FUNC_7 (int ,int ,int ,char*,int ) ;
 int FUNC_8 (int ,int ,int ,char*,int *,int ) ;
 int FUNC_9 (TYPE_3__*) ;

ngx_int_t
FUNC_10(ngx_http_request_t *VAR_5)
{




    ngx_http_lua_loc_conf_t *VAR_6;
    ngx_http_lua_ctx_t *VAR_7;
    FUNC_8(VAR_3, VAR_5->connection->log, 0,
                   "lua log handler, uri:\"%V\" c:%ud", &VAR_5->uri,
                   VAR_5->main->count);

    VAR_6 = FUNC_3(VAR_5, VAR_4);

    if (VAR_6->log_handler == ((void*)0)) {
        FUNC_0("no log handler found");
        return VAR_0;
    }

    VAR_7 = FUNC_2(VAR_5, VAR_4);

    FUNC_0("ctx = %p", VAR_7);

    if (VAR_7 == ((void*)0)) {
        VAR_7 = FUNC_5(VAR_5);
        if (VAR_7 == ((void*)0)) {
            return VAR_1;
        }
    }

    VAR_7->context = VAR_2;

    FUNC_0("calling log handler");
    return VAR_6->log_handler(VAR_5);
}
