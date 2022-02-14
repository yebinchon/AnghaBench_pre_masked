
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ ngx_socket_t ;
struct TYPE_6__ {int status; } ;
struct TYPE_7__ {int err_status; scalar_t__ http_version; TYPE_2__ headers_out; TYPE_1__* connection; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_5__ {scalar_t__ fd; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

int
FUNC_0(ngx_http_request_t *VAR_2)
{
    if (VAR_2->connection->fd == (ngx_socket_t) -1) {
        return VAR_0;
    }

    if (VAR_2->err_status) {
        return VAR_2->err_status;

    } else if (VAR_2->headers_out.status) {
        return VAR_2->headers_out.status;

    } else if (VAR_2->http_version == VAR_1) {
        return 9;

    } else {
        return 0;
    }
}
