
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ ngx_socket_t ;
typedef int ngx_int_t ;
struct TYPE_10__ {TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_11__ {scalar_t__ cur_co_ctx; } ;
typedef TYPE_3__ ngx_http_lua_ctx_t ;
struct TYPE_9__ {scalar_t__ fd; } ;


 int FUNC_0 (TYPE_2__*,int ) ;
 TYPE_3__* FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int VAR_0 ;

void
FUNC_4(ngx_http_request_t *VAR_1, ngx_int_t VAR_2)
{
    ngx_http_lua_ctx_t *VAR_3;

    VAR_3 = FUNC_1(VAR_1, VAR_0);
    if (VAR_3 && VAR_3->cur_co_ctx) {
        FUNC_2(VAR_3->cur_co_ctx);
    }

    if (VAR_1->connection->fd != (ngx_socket_t) -1) {
        FUNC_0(VAR_1, VAR_2);
        return;
    }

    FUNC_3(VAR_1, VAR_2);
}
