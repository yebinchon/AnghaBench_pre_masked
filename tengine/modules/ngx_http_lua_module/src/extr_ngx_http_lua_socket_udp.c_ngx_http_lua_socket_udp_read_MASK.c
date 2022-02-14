
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
typedef scalar_t__ ngx_int_t ;
typedef int ngx_http_request_t ;
struct TYPE_12__ {TYPE_4__* connection; } ;
struct TYPE_13__ {int read_timeout; int socket_errno; scalar_t__ received; int recv_buf_size; TYPE_1__ udp_connection; scalar_t__ waiting; } ;
typedef TYPE_2__ ngx_http_lua_socket_udp_upstream_t ;
struct TYPE_14__ {scalar_t__ timer_set; scalar_t__ active; } ;
typedef TYPE_3__ ngx_event_t ;
struct TYPE_15__ {int log; TYPE_3__* read; } ;
typedef TYPE_4__ ngx_connection_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*,int ) ;
 int VAR_5 ;
 int FUNC_3 (int *,TYPE_2__*,int ) ;
 int FUNC_4 (int *,TYPE_2__*) ;
 int FUNC_5 (int ,int ,int ,char*,scalar_t__) ;
 int VAR_6 ;
 scalar_t__ FUNC_6 (TYPE_4__*,int ,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_7(ngx_http_request_t *VAR_7,
    ngx_http_lua_socket_udp_upstream_t *VAR_8)
{
    ngx_connection_t *VAR_9;
    ngx_event_t *VAR_10;
    ssize_t VAR_11;

    VAR_9 = VAR_8->udp_connection.connection;
    VAR_10 = VAR_9->read;

    FUNC_5(VAR_3, VAR_9->log, 0,
                   "lua udp socket read data: waiting: %d", (int) VAR_8->waiting);

    VAR_11 = FUNC_6(VAR_8->udp_connection.connection,
                     VAR_5, VAR_8->recv_buf_size);

    FUNC_5(VAR_3, VAR_9->log, 0,
                   "lua udp recv returned %z", VAR_11);

    if (VAR_11 >= 0) {
        VAR_8->received = VAR_11;
        FUNC_4(VAR_7, VAR_8);
        return VAR_4;
    }

    if (VAR_11 == VAR_1) {
        VAR_8->socket_errno = VAR_6;
        FUNC_3(VAR_7, VAR_8,
                                             VAR_2);
        return VAR_1;
    }




    if (FUNC_2(VAR_10, 0) != VAR_4) {
        FUNC_3(VAR_7, VAR_8,
                                             VAR_2);
        return VAR_1;
    }


    if (VAR_10->active) {
        FUNC_0(VAR_10, VAR_8->read_timeout);

    } else if (VAR_10->timer_set) {
        FUNC_1(VAR_10);
    }

    return VAR_0;
}
