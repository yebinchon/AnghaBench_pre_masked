
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int ngx_uint_t ;
struct TYPE_15__ {int (* write_event_handler ) (TYPE_2__*) ;TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_16__ {TYPE_5__* write_co_ctx; scalar_t__ conn_waiting; void* write_event_handler; void* read_event_handler; int ft_type; } ;
typedef TYPE_3__ ngx_http_lua_socket_tcp_upstream_t ;
struct TYPE_17__ {TYPE_5__* cur_co_ctx; int resume_handler; } ;
typedef TYPE_4__ ngx_http_lua_ctx_t ;
struct TYPE_18__ {scalar_t__ co_ref; int * cleanup; } ;
typedef TYPE_5__ ngx_http_lua_co_ctx_t ;
struct TYPE_14__ {int log; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 TYPE_4__* FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_4__*) ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_5 (int ,int ,int ,char*) ;
 int FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_7(ngx_http_request_t *VAR_4,
    ngx_http_lua_socket_tcp_upstream_t *VAR_5, ngx_uint_t VAR_6)
{
    ngx_http_lua_ctx_t *VAR_7;
    ngx_http_lua_co_ctx_t *VAR_8;

    FUNC_5(VAR_0, VAR_4->connection->log, 0,
                   "lua tcp socket handle connect error");

    VAR_5->ft_type |= VAR_6;


    FUNC_4(VAR_4, VAR_5);


    VAR_5->read_event_handler = VAR_2;
    VAR_5->write_event_handler = VAR_2;

    FUNC_0("connection waiting: %d", (int) VAR_5->conn_waiting);

    VAR_8 = VAR_5->write_co_ctx;

    if (VAR_5->conn_waiting) {
        VAR_5->conn_waiting = 0;

        VAR_8->cleanup = ((void*)0);
        VAR_5->write_co_ctx = ((void*)0);

        VAR_7 = FUNC_1(VAR_4, VAR_1);

        VAR_7->resume_handler = VAR_3;
        VAR_7->cur_co_ctx = VAR_8;

        FUNC_2(VAR_8 && (!FUNC_3(VAR_7)
                            || VAR_8->co_ref >= 0));

        FUNC_5(VAR_0, VAR_4->connection->log, 0,
                       "lua tcp socket waking up the current request");

        VAR_4->write_event_handler(VAR_4);
    }
}
