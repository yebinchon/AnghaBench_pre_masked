
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_9__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_10__ {scalar_t__ connections; int free; } ;
typedef TYPE_1__ ngx_http_lua_socket_pool_t ;
struct TYPE_11__ {int queue; TYPE_1__* socket_pool; } ;
typedef TYPE_2__ ngx_http_lua_socket_pool_item_t ;
struct TYPE_12__ {int log; TYPE_4__* data; } ;
typedef TYPE_3__ ngx_event_t ;
struct TYPE_13__ {TYPE_2__* data; int fd; TYPE_9__* read; scalar_t__ close; } ;
typedef TYPE_4__ ngx_connection_t ;
struct TYPE_14__ {scalar_t__ ready; scalar_t__ timedout; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*,unsigned int) ;
 scalar_t__ FUNC_1 (TYPE_9__*,int ) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,int ,int ,char*) ;
 int FUNC_6 (int ,int ,int ,char*,int ) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ VAR_5 ;
 int FUNC_9 (int ,char*,int,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_10(ngx_event_t *VAR_6)
{
    ngx_http_lua_socket_pool_item_t *VAR_7;
    ngx_http_lua_socket_pool_t *VAR_8;

    int VAR_9;
    char VAR_10[1];
    ngx_connection_t *VAR_11;

    VAR_11 = VAR_6->data;

    if (VAR_11->close) {
        goto close;
    }

    if (VAR_11->read->timedout) {
        FUNC_5(VAR_3, VAR_6->log, 0,
                       "lua tcp socket keepalive max idle timeout");

        goto close;
    }

    FUNC_0("read event ready: %d", (int) VAR_11->read->ready);

    FUNC_5(VAR_3, VAR_6->log, 0,
                   "lua tcp socket keepalive close handler check stale events");

    VAR_9 = FUNC_9(VAR_11->fd, VAR_10, 1, VAR_0);

    if (VAR_9 == -1 && VAR_5 == VAR_2) {


        if (FUNC_1(VAR_11->read, 0) != VAR_4) {
            goto close;
        }

        return VAR_4;
    }

close:

    FUNC_6(VAR_3, VAR_6->log, 0,
                   "lua tcp socket keepalive close handler: fd:%d", VAR_11->fd);

    VAR_7 = VAR_11->data;
    VAR_8 = VAR_7->socket_pool;

    FUNC_3(VAR_11);

    FUNC_8(&VAR_7->queue);
    FUNC_7(&VAR_8->free, &VAR_7->queue);
    VAR_8->connections--;

    FUNC_0("keepalive: connections: %u", (unsigned) VAR_8->connections);

    if (VAR_8->connections == 0) {
        FUNC_2(VAR_6->log, VAR_8);

    } else {
        FUNC_4(VAR_8);
    }

    return VAR_1;
}
