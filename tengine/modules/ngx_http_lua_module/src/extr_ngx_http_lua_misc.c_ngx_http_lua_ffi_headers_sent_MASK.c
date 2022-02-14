
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ ngx_socket_t ;
struct TYPE_6__ {scalar_t__ header_sent; TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_http_request_t ;
typedef int ngx_http_lua_ctx_t ;
struct TYPE_5__ {scalar_t__ fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (TYPE_2__*,int ) ;
 int VAR_2 ;

int
FUNC_1(ngx_http_request_t *VAR_3)
{
    ngx_http_lua_ctx_t *VAR_4;

    VAR_4 = FUNC_0(VAR_3, VAR_2);
    if (VAR_4 == ((void*)0)) {
        return VAR_1;
    }

    if (VAR_3->connection->fd == (ngx_socket_t) -1) {
        return VAR_0;
    }

    return VAR_3->header_sent ? 1 : 0;
}
