
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
typedef scalar_t__ ngx_socket_t ;
struct TYPE_6__ {size_t len; int * data; } ;
struct TYPE_7__ {TYPE_2__ method_name; TYPE_1__* connection; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_5__ {scalar_t__ fd; } ;


 int VAR_0 ;
 int VAR_1 ;

int
FUNC_0(ngx_http_request_t *VAR_2, u_char **VAR_3,
    size_t *VAR_4)
{
    if (VAR_2->connection->fd == (ngx_socket_t) -1) {
        return VAR_0;
    }

    *VAR_3 = VAR_2->method_name.data;
    *VAR_4 = VAR_2->method_name.len;

    return VAR_1;
}
