
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int ngx_peer_connection_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_17__ {int check_timeout; } ;
typedef TYPE_3__ ngx_http_upstream_check_srv_conf_t ;
struct TYPE_22__ {int log; TYPE_6__* connection; scalar_t__ cached; int log_error; int get; int * name; int socklen; int sockaddr; } ;
struct TYPE_18__ {int check_timeout_ev; int recv_handler; int (* send_handler ) (TYPE_7__*) ;int state; int pool; TYPE_8__ pc; TYPE_1__* check_peer_addr; TYPE_3__* conf; } ;
typedef TYPE_4__ ngx_http_upstream_check_peer_t ;
struct TYPE_19__ {int log; TYPE_4__* data; } ;
typedef TYPE_5__ ngx_event_t ;
struct TYPE_20__ {TYPE_7__* write; TYPE_2__* read; int pool; int log; scalar_t__ sendfile; TYPE_4__* data; } ;
typedef TYPE_6__ ngx_connection_t ;
struct TYPE_21__ {int (* handler ) (TYPE_7__*) ;int log; } ;
struct TYPE_16__ {int handler; int log; } ;
struct TYPE_15__ {int name; int socklen; int sockaddr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_6__*) ;
 scalar_t__ FUNC_2 (TYPE_8__*) ;
 int VAR_5 ;
 int FUNC_3 (TYPE_4__*) ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 (TYPE_6__*) ;
 int FUNC_6 (TYPE_4__*,int ) ;
 int FUNC_7 (TYPE_8__*,int) ;
 int FUNC_8 (TYPE_7__*) ;

__attribute__((used)) static void
FUNC_9(ngx_event_t *VAR_6)
{
    ngx_int_t VAR_7;
    ngx_connection_t *VAR_8;
    ngx_http_upstream_check_peer_t *VAR_9;
    ngx_http_upstream_check_srv_conf_t *VAR_10;

    if (FUNC_4()) {
        return;
    }

    VAR_9 = VAR_6->data;
    VAR_10 = VAR_9->conf;

    if (VAR_9->pc.connection != ((void*)0)) {
        VAR_8 = VAR_9->pc.connection;
        if ((VAR_7 = FUNC_5(VAR_8)) == VAR_4) {
            goto upstream_check_connect_done;
        } else {
            FUNC_1(VAR_8);
            VAR_9->pc.connection = ((void*)0);
        }
    }
    FUNC_7(&VAR_9->pc, sizeof(ngx_peer_connection_t));

    VAR_9->pc.sockaddr = VAR_9->check_peer_addr->sockaddr;
    VAR_9->pc.socklen = VAR_9->check_peer_addr->socklen;
    VAR_9->pc.name = &VAR_9->check_peer_addr->name;

    VAR_9->pc.get = VAR_5;
    VAR_9->pc.log = VAR_6->log;
    VAR_9->pc.log_error = VAR_2;

    VAR_9->pc.cached = 0;
    VAR_9->pc.connection = ((void*)0);

    VAR_7 = FUNC_2(&VAR_9->pc);

    if (VAR_7 == VAR_1 || VAR_7 == VAR_0) {
        FUNC_6(VAR_9, 0);
        FUNC_3(VAR_9);
        return;
    }


    VAR_8 = VAR_9->pc.connection;
    VAR_8->data = VAR_9;
    VAR_8->log = VAR_9->pc.log;
    VAR_8->sendfile = 0;
    VAR_8->read->log = VAR_8->log;
    VAR_8->write->log = VAR_8->log;
    VAR_8->pool = VAR_9->pool;

upstream_check_connect_done:
    VAR_9->state = VAR_3;

    VAR_8->write->handler = VAR_9->send_handler;
    VAR_8->read->handler = VAR_9->recv_handler;

    FUNC_0(&VAR_9->check_timeout_ev, VAR_10->check_timeout);


    if (VAR_7 == VAR_4) {
        VAR_8->write->handler(VAR_8->write);
    }
}
