
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_17__ ;


struct TYPE_23__ {int pool; TYPE_1__* connection; } ;
typedef TYPE_5__ ngx_http_request_t ;
struct TYPE_22__ {int temporary; int * start; int * end; int * last; int * pos; } ;
struct TYPE_20__ {int name; TYPE_8__* connection; } ;
struct TYPE_24__ {TYPE_4__ buffer; TYPE_3__* conf; TYPE_2__ peer; } ;
typedef TYPE_6__ ngx_http_proxy_connect_upstream_t ;
struct TYPE_25__ {int send_established_done; int send_established; } ;
typedef TYPE_7__ ngx_http_proxy_connect_ctx_t ;
struct TYPE_26__ {TYPE_17__* read; int log; } ;
typedef TYPE_8__ ngx_connection_t ;
struct TYPE_21__ {int buffer_size; } ;
struct TYPE_19__ {int log; } ;
struct TYPE_18__ {scalar_t__ timedout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_17__*,int ) ;
 TYPE_7__* FUNC_1 (TYPE_5__*,int ) ;
 int FUNC_2 (TYPE_5__*,TYPE_6__*,int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (TYPE_8__*) ;
 int FUNC_4 (TYPE_5__*,int,int ) ;
 int FUNC_5 (int ,int ,int ,char*) ;
 int FUNC_6 (int ,int ,int ,char*,int ) ;
 int * FUNC_7 (int ,int) ;

__attribute__((used)) static void
FUNC_8(ngx_http_request_t *VAR_7,
    ngx_http_proxy_connect_upstream_t *VAR_8)
{
    ngx_connection_t *VAR_9;
    ngx_http_proxy_connect_ctx_t *VAR_10;

    FUNC_5(VAR_3, VAR_7->connection->log, 0,
                   "proxy_connect: upstream read handler");

    VAR_10 = FUNC_1(VAR_7, VAR_6);

    VAR_9 = VAR_8->peer.connection;

    if (VAR_9->read->timedout) {
        FUNC_6(VAR_4, VAR_9->log, 0,
                      "proxy_connect: upstream read timed out (peer:%V)",
                      VAR_8->peer.name);
        FUNC_2(VAR_7, VAR_8, VAR_1);
        return;
    }

    if (!VAR_10->send_established &&
        FUNC_3(VAR_9) != VAR_5)
    {
        FUNC_2(VAR_7, VAR_8, VAR_0);
        return;
    }

    if (VAR_8->buffer.start == ((void*)0)) {
        VAR_8->buffer.start = FUNC_7(VAR_7->pool, VAR_8->conf->buffer_size);
        if (VAR_8->buffer.start == ((void*)0)) {
            FUNC_2(VAR_7, VAR_8,
                                               VAR_2);
            return;
        }

        VAR_8->buffer.pos = VAR_8->buffer.start;
        VAR_8->buffer.last = VAR_8->buffer.start;
        VAR_8->buffer.end = VAR_8->buffer.start + VAR_8->conf->buffer_size;
        VAR_8->buffer.temporary = 1;
    }

    if (!VAR_10->send_established_done) {
        if (FUNC_0(VAR_9->read, 0) != VAR_5) {
            FUNC_2(VAR_7, VAR_8,
                                               VAR_2);
            return;
        }

        return;
    }

    FUNC_4(VAR_7, 1, 0);
}
