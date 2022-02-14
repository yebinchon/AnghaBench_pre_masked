
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ssize_t ;
typedef int ngx_int_t ;
struct TYPE_6__ {TYPE_2__* request; int buf_in; int buffer; } ;
typedef TYPE_3__ ngx_http_lua_socket_tcp_upstream_t ;
struct TYPE_5__ {TYPE_1__* connection; } ;
struct TYPE_4__ {int log; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,char*) ;

__attribute__((used)) static ngx_int_t
FUNC_2(void *VAR_1, ssize_t VAR_2)
{
    ngx_http_lua_socket_tcp_upstream_t *VAR_3 = VAR_1;

    FUNC_1(VAR_0, VAR_3->request->connection->log, 0,
                   "lua tcp socket read all");
    return FUNC_0(&VAR_3->buffer, VAR_3->buf_in, VAR_2,
                                 VAR_3->request->connection->log);
}
