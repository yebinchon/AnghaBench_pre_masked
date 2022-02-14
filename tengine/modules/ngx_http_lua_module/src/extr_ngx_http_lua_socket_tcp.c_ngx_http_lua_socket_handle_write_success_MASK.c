
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int (* write_event_handler ) (TYPE_2__*) ;TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_14__ {TYPE_5__* write_co_ctx; scalar_t__ write_waiting; int write_event_handler; } ;
typedef TYPE_3__ ngx_http_lua_socket_tcp_upstream_t ;
struct TYPE_15__ {TYPE_5__* cur_co_ctx; int resume_handler; } ;
typedef TYPE_4__ ngx_http_lua_ctx_t ;
struct TYPE_16__ {scalar_t__ co_ref; int * cleanup; } ;
typedef TYPE_5__ ngx_http_lua_co_ctx_t ;
struct TYPE_12__ {int log; } ;


 int VAR_0 ;
 TYPE_4__* FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_4__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int ,int ,char*) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_5(ngx_http_request_t *VAR_4,
    ngx_http_lua_socket_tcp_upstream_t *VAR_5)
{
    ngx_http_lua_ctx_t *VAR_6;
    ngx_http_lua_co_ctx_t *VAR_7;


    VAR_5->write_event_handler = VAR_2;


    if (VAR_5->write_waiting) {
        VAR_5->write_waiting = 0;

        VAR_7 = VAR_5->write_co_ctx;
        VAR_7->cleanup = ((void*)0);
        VAR_5->write_co_ctx = ((void*)0);

        VAR_6 = FUNC_0(VAR_4, VAR_1);
        if (VAR_6 == ((void*)0)) {
            return;
        }

        VAR_6->resume_handler = VAR_3;
        VAR_6->cur_co_ctx = VAR_7;

        FUNC_1(VAR_7 && (!FUNC_2(VAR_6)
                            || VAR_7->co_ref >= 0));

        FUNC_3(VAR_0, VAR_4->connection->log, 0,
                       "lua tcp socket waking up the current request (read)");

        VAR_4->write_event_handler(VAR_4);
    }
}
