
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ngx_socket_t ;
struct TYPE_5__ {int method; TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_4__ {scalar_t__ fd; } ;


 int VAR_0 ;

int
FUNC_0(ngx_http_request_t *VAR_1)
{
    if (VAR_1->connection->fd == (ngx_socket_t) -1) {
        return VAR_0;
    }

    return VAR_1->method;
}
