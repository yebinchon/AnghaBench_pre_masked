
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ ngx_socket_t ;
struct TYPE_13__ {TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_14__ {int running_timers; } ;
typedef TYPE_3__ ngx_http_lua_main_conf_t ;
struct TYPE_15__ {scalar_t__ context; int ** cleanup; TYPE_2__* request; } ;
typedef TYPE_4__ ngx_http_lua_ctx_t ;
typedef int lua_State ;
struct TYPE_12__ {scalar_t__ fd; int log; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 TYPE_3__* FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,TYPE_4__*,int *) ;
 int * FUNC_3 (TYPE_2__*,TYPE_4__*) ;
 int VAR_2 ;
 int FUNC_4 (int ,int ,int ,char*,int) ;

void
FUNC_5(ngx_http_lua_ctx_t *VAR_3, int VAR_4)
{
    lua_State *VAR_5;
    ngx_http_request_t *VAR_6;
    ngx_http_lua_main_conf_t *VAR_7;


    if (VAR_3 == ((void*)0)) {
        FUNC_0("ctx is NULL");
        return;
    }

    VAR_6 = VAR_3->request;

    FUNC_4(VAR_1, VAR_6->connection->log, 0,
                   "lua request cleanup: forcible=%d", VAR_4);

    if (VAR_3->cleanup) {
        *VAR_3->cleanup = ((void*)0);
        VAR_3->cleanup = ((void*)0);
    }

    VAR_7 = FUNC_1(VAR_6, VAR_2);


    if (VAR_6->connection->fd == (ngx_socket_t) -1) {


        if (VAR_3->context == VAR_0) {

            VAR_7->running_timers--;
        }
    }


    VAR_5 = FUNC_3(VAR_6, VAR_3);

    FUNC_2(VAR_6, VAR_3, VAR_5);
}
