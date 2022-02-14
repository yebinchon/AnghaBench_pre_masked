
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ ngx_socket_t ;
struct TYPE_9__ {scalar_t__ len; } ;
struct TYPE_6__ {int status; TYPE_4__ status_line; } ;
struct TYPE_8__ {TYPE_1__ headers_out; scalar_t__ err_status; TYPE_2__* connection; scalar_t__ header_sent; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_7__ {scalar_t__ fd; int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,char*) ;
 int FUNC_1 (TYPE_4__*,char*) ;

int
FUNC_2(ngx_http_request_t *VAR_4, int VAR_5)
{
    if (VAR_4->connection->fd == (ngx_socket_t) -1) {
        return VAR_1;
    }

    if (VAR_4->header_sent) {
        FUNC_0(VAR_2, VAR_4->connection->log, 0,
                      "attempt to set ngx.status after sending out "
                      "response headers");
        return VAR_0;
    }

    VAR_4->headers_out.status = VAR_5;

    if (VAR_4->err_status) {
        VAR_4->err_status = 0;
    }

    if (VAR_5 == 101) {





        FUNC_1(&VAR_4->headers_out.status_line, "101 Switching Protocols");

    } else {
        VAR_4->headers_out.status_line.len = 0;
    }

    return VAR_3;
}
