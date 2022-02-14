
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_14__ {TYPE_2__* connection; scalar_t__ keepalive; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_16__ {TYPE_10__* connection; int * sockaddr; int data; int (* free ) (TYPE_5__*,int ,int ) ;} ;
struct TYPE_15__ {scalar_t__ connected; TYPE_5__ peer; TYPE_1__* resolved; } ;
typedef TYPE_4__ ngx_http_proxy_connect_upstream_t ;
struct TYPE_17__ {char* action; } ;
struct TYPE_13__ {TYPE_6__* log; } ;
struct TYPE_12__ {int * ctx; } ;
struct TYPE_11__ {scalar_t__ fd; scalar_t__ pool; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_10__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_3__*,scalar_t__) ;
 int FUNC_3 (int ,TYPE_6__*,int ,char*,scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_5__*,int ,int ) ;

__attribute__((used)) static void
FUNC_6(ngx_http_request_t *VAR_6,
    ngx_http_proxy_connect_upstream_t *VAR_7, ngx_int_t VAR_8)
{
    FUNC_3(VAR_5, VAR_6->connection->log, 0,
                   "proxy_connect: finalize upstream request: %i", VAR_8);

    VAR_6->keepalive = 0;

    if (VAR_7->resolved && VAR_7->resolved->ctx) {
        FUNC_4(VAR_7->resolved->ctx);
        VAR_7->resolved->ctx = ((void*)0);
    }

    if (VAR_7->peer.free && VAR_7->peer.sockaddr) {
        VAR_7->peer.free(&VAR_7->peer, VAR_7->peer.data, 0);
        VAR_7->peer.sockaddr = ((void*)0);
    }

    if (VAR_7->peer.connection) {

        FUNC_3(VAR_5, VAR_6->connection->log, 0,
                       "proxy_connect: close upstream connection: %d",
                       VAR_7->peer.connection->fd);

        if (VAR_7->peer.connection->pool) {
            FUNC_1(VAR_7->peer.connection->pool);
        }

        FUNC_0(VAR_7->peer.connection);
    }

    VAR_7->peer.connection = ((void*)0);

    if (VAR_8 == VAR_0) {
        return;
    }

    VAR_6->connection->log->action = "sending to client";

    if (VAR_8 == VAR_3
        || VAR_8 == VAR_2)
    {
        FUNC_2(VAR_6, VAR_8);
        return;
    }

    if (VAR_7->connected && VAR_8 >= VAR_4) {
        VAR_8 = VAR_1;
    }

    FUNC_2(VAR_6, VAR_8);
}
