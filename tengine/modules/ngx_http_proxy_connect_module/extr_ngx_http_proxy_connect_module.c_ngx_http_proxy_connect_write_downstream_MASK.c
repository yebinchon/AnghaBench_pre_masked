
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {TYPE_2__* connection; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_13__ {int u; } ;
typedef TYPE_4__ ngx_http_proxy_connect_ctx_t ;
struct TYPE_11__ {int timedout; int log; TYPE_1__* write; } ;
struct TYPE_10__ {scalar_t__ timedout; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (TYPE_3__*,int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_3__*,int,int) ;
 int FUNC_3 (int ,int ,int ,char*) ;

__attribute__((used)) static void
FUNC_4(ngx_http_request_t *VAR_3)
{
    ngx_http_proxy_connect_ctx_t *VAR_4;

    VAR_4 = FUNC_0(VAR_3, VAR_2);

    if (VAR_3->connection->write->timedout) {
        VAR_3->connection->timedout = 1;
        FUNC_3(VAR_1, VAR_3->connection->log, 0,
                      "proxy_connect: client write timed out");
        FUNC_1(VAR_3, VAR_4->u,
                                                VAR_0);
        return;
    }

    FUNC_2(VAR_3, 1, 1);
}
