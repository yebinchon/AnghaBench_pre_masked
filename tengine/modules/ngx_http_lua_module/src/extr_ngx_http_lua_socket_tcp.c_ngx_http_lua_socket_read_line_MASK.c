
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ssize_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_6__ {int ft_type; TYPE_1__* request; int buf_in; int buffer; } ;
typedef TYPE_3__ ngx_http_lua_socket_tcp_upstream_t ;
struct TYPE_5__ {int log; } ;
struct TYPE_4__ {TYPE_2__* connection; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,char*) ;

__attribute__((used)) static ngx_int_t
FUNC_2(void *VAR_3, ssize_t VAR_4)
{
    ngx_http_lua_socket_tcp_upstream_t *VAR_5 = VAR_3;

    ngx_int_t VAR_6;

    FUNC_1(VAR_2, VAR_5->request->connection->log, 0,
                   "lua tcp socket read line");

    VAR_6 = FUNC_0(&VAR_5->buffer, VAR_5->buf_in, VAR_4,
                                VAR_5->request->connection->log);
    if (VAR_6 == VAR_0) {
        VAR_5->ft_type |= VAR_1;
        return VAR_0;
    }

    return VAR_6;
}
