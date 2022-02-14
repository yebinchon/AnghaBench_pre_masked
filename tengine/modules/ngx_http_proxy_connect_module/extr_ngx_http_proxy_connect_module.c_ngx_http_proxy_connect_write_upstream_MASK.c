
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_16__ ;


struct TYPE_21__ {TYPE_1__* connection; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_20__ {int name; TYPE_6__* connection; } ;
struct TYPE_22__ {TYPE_2__ peer; scalar_t__ connected; } ;
typedef TYPE_4__ ngx_http_proxy_connect_upstream_t ;
struct TYPE_23__ {int send_established_done; int send_established; } ;
typedef TYPE_5__ ngx_http_proxy_connect_ctx_t ;
struct TYPE_24__ {TYPE_16__* write; int log; } ;
typedef TYPE_6__ ngx_connection_t ;
struct TYPE_19__ {int log; } ;
struct TYPE_18__ {scalar_t__ timer_set; scalar_t__ timedout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (TYPE_16__*) ;
 scalar_t__ FUNC_1 (TYPE_16__*,int ) ;
 TYPE_5__* FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (TYPE_3__*,TYPE_4__*,int ) ;
 int VAR_6 ;
 int FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (TYPE_6__*) ;
 int FUNC_6 (TYPE_3__*,int ,int) ;
 int FUNC_7 (int ,int ,int ,char*) ;
 int FUNC_8 (int ,int ,int ,char*,char*,int ) ;

__attribute__((used)) static void
FUNC_9(ngx_http_request_t *VAR_7,
    ngx_http_proxy_connect_upstream_t *VAR_8)
{
    ngx_connection_t *VAR_9;
    ngx_http_proxy_connect_ctx_t *VAR_10;

    VAR_9 = VAR_8->peer.connection;

    FUNC_7(VAR_3, VAR_7->connection->log, 0,
                   "proxy_connect: upstream write handler");

    if (VAR_9->write->timedout) {
        FUNC_8(VAR_4, VAR_9->log, 0,
                      "proxy_connect: upstream %s timed out (peer:%V)",
                      VAR_8->connected ? "write" : "connect", VAR_8->peer.name);
        FUNC_3(VAR_7, VAR_8,
                                                VAR_1);
        return;
    }

    VAR_10 = FUNC_2(VAR_7, VAR_6);

    if (VAR_9->write->timer_set) {
        FUNC_0(VAR_9->write);
    }

    if (!VAR_10->send_established &&
        FUNC_5(VAR_9) != VAR_5)
    {
        FUNC_3(VAR_7, VAR_8, VAR_0);
        return;
    }

    if (!VAR_10->send_established) {
        FUNC_4(VAR_7);
        return;
    }

    if (!VAR_10->send_established_done) {
        if (FUNC_1(VAR_9->write, 0) != VAR_5) {
            FUNC_3(VAR_7, VAR_8,
                                               VAR_2);
            return;
        }

        return;
    }

    FUNC_6(VAR_7, 0, 1);
}
