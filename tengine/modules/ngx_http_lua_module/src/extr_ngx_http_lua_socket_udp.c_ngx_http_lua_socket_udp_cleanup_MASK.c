
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int uri; TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_8__ {TYPE_2__* request; } ;
typedef TYPE_3__ ngx_http_lua_socket_udp_upstream_t ;
struct TYPE_6__ {int log; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_1 (int ,int ,int ,char*,int *) ;

__attribute__((used)) static void
FUNC_2(void *VAR_1)
{
    ngx_http_lua_socket_udp_upstream_t *VAR_2 = VAR_1;

    ngx_http_request_t *VAR_3;

    VAR_3 = VAR_2->request;

    FUNC_1(VAR_0, VAR_3->connection->log, 0,
                   "cleanup lua udp socket upstream request: \"%V\"", &VAR_3->uri);

    FUNC_0(VAR_3, VAR_2);
}
