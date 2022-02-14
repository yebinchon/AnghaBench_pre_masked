
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int ngx_uint_t ;
struct TYPE_14__ {int (* write_event_handler ) (TYPE_2__*) ;TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_15__ {scalar_t__ waiting; TYPE_5__* co_ctx; int read_event_handler; int ft_type; } ;
typedef TYPE_3__ ngx_http_lua_socket_udp_upstream_t ;
struct TYPE_16__ {TYPE_5__* cur_co_ctx; int resume_handler; } ;
typedef TYPE_4__ ngx_http_lua_ctx_t ;
struct TYPE_17__ {int * cleanup; } ;
typedef TYPE_5__ ngx_http_lua_co_ctx_t ;
struct TYPE_13__ {int log; } ;


 int VAR_0 ;
 TYPE_4__* FUNC_0 (TYPE_2__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,TYPE_3__*) ;
 int VAR_3 ;
 int FUNC_2 (int ,int ,int ,char*) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_4(ngx_http_request_t *VAR_4,
    ngx_http_lua_socket_udp_upstream_t *VAR_5, ngx_uint_t VAR_6)
{
    ngx_http_lua_ctx_t *VAR_7;
    ngx_http_lua_co_ctx_t *VAR_8;

    FUNC_2(VAR_0, VAR_4->connection->log, 0,
                   "lua udp socket handle error");

    VAR_5->ft_type |= VAR_6;





    VAR_5->read_event_handler = VAR_2;

    VAR_8 = VAR_5->co_ctx;

    if (VAR_8) {
        VAR_8->cleanup = ((void*)0);
    }

    if (VAR_5->waiting) {
        VAR_5->waiting = 0;

        VAR_7 = FUNC_0(VAR_4, VAR_1);
        if (VAR_7 == ((void*)0)) {
            return;
        }

        VAR_7->resume_handler = VAR_3;
        VAR_7->cur_co_ctx = VAR_8;

        FUNC_2(VAR_0, VAR_4->connection->log, 0,
                       "lua udp socket waking up the current request");

        VAR_4->write_event_handler(VAR_4);
    }
}
