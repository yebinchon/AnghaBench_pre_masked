
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {TYPE_5__* connection; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_12__ {scalar_t__ pos; scalar_t__ last; } ;
struct TYPE_14__ {TYPE_2__ buf; int u; } ;
typedef TYPE_4__ ngx_http_proxy_connect_ctx_t ;
struct TYPE_15__ {int timedout; int log; TYPE_1__* write; } ;
typedef TYPE_5__ ngx_connection_t ;
struct TYPE_11__ {scalar_t__ timedout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__* FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (TYPE_3__*,int ,int ) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ,int ,int ,char*) ;
 int FUNC_4 (int ,int ,int ,char*) ;

__attribute__((used)) static void
FUNC_5(ngx_http_request_t *VAR_4)
{
    ngx_connection_t *VAR_5;
    ngx_http_proxy_connect_ctx_t *VAR_6;

    VAR_5 = VAR_4->connection;
    VAR_6 = FUNC_0(VAR_4, VAR_3);

    FUNC_3(VAR_1, VAR_4->connection->log, 0,
                   "proxy_connect: send connection established handler");

    if (VAR_5->write->timedout) {
        VAR_5->timedout = 1;
        FUNC_4(VAR_2, VAR_5->log, 0,
                      "proxy_connect: client write timed out");
        FUNC_1(VAR_4, VAR_6->u,
                                                VAR_0);
        return;
    }

    if (VAR_6->buf.pos != VAR_6->buf.last) {
        FUNC_2(VAR_4);
    }
}
