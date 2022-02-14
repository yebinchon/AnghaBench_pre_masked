
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_20__ ;
typedef struct TYPE_25__ TYPE_1__ ;
typedef struct TYPE_24__ TYPE_19__ ;
typedef struct TYPE_23__ TYPE_18__ ;
typedef struct TYPE_22__ TYPE_13__ ;


typedef int ngx_pool_t ;
struct TYPE_29__ {TYPE_3__* connection; } ;
typedef TYPE_4__ ngx_mail_session_t ;
struct TYPE_23__ {TYPE_20__* connection; int log_error; TYPE_19__* log; int get; int * name; int socklen; int sockaddr; } ;
struct TYPE_30__ {TYPE_18__ peer; int handler; int * pool; int * request; } ;
typedef TYPE_5__ ngx_mail_auth_http_ctx_t ;
struct TYPE_31__ {int timeout; TYPE_1__* peer; } ;
typedef TYPE_6__ ngx_mail_auth_http_conf_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_28__ {TYPE_2__* read; int pool; TYPE_19__* log; } ;
struct TYPE_27__ {int handler; } ;
struct TYPE_26__ {TYPE_13__* write; TYPE_13__* read; int pool; TYPE_4__* data; } ;
struct TYPE_25__ {int name; int socklen; int sockaddr; } ;
struct TYPE_24__ {char* action; } ;
struct TYPE_22__ {int (* handler ) (TYPE_13__*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_13__*,int ) ;
 int FUNC_1 (TYPE_20__*) ;
 int * FUNC_2 (int,TYPE_19__*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (TYPE_18__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_5 (TYPE_4__*,int *,TYPE_6__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (TYPE_13__*) ;
 int FUNC_7 (TYPE_13__*) ;
 TYPE_6__* FUNC_8 (TYPE_4__*,int ) ;
 int FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (TYPE_4__*,TYPE_5__*,int ) ;
 TYPE_5__* FUNC_11 (int *,int) ;

void
FUNC_12(ngx_mail_session_t *VAR_9)
{
    ngx_int_t VAR_10;
    ngx_pool_t *VAR_11;
    ngx_mail_auth_http_ctx_t *VAR_12;
    ngx_mail_auth_http_conf_t *VAR_13;

    VAR_9->connection->log->action = "in http auth state";

    VAR_11 = FUNC_2(2048, VAR_9->connection->log);
    if (VAR_11 == ((void*)0)) {
        FUNC_9(VAR_9);
        return;
    }

    VAR_12 = FUNC_11(VAR_11, sizeof(ngx_mail_auth_http_ctx_t));
    if (VAR_12 == ((void*)0)) {
        FUNC_3(VAR_11);
        FUNC_9(VAR_9);
        return;
    }

    VAR_12->pool = VAR_11;

    VAR_13 = FUNC_8(VAR_9, VAR_8);

    VAR_12->request = FUNC_5(VAR_9, VAR_11, VAR_13);
    if (VAR_12->request == ((void*)0)) {
        FUNC_3(VAR_12->pool);
        FUNC_9(VAR_9);
        return;
    }

    FUNC_10(VAR_9, VAR_12, VAR_8);

    VAR_12->peer.sockaddr = VAR_13->peer->sockaddr;
    VAR_12->peer.socklen = VAR_13->peer->socklen;
    VAR_12->peer.name = &VAR_13->peer->name;
    VAR_12->peer.get = VAR_5;
    VAR_12->peer.log = VAR_9->connection->log;
    VAR_12->peer.log_error = VAR_3;

    VAR_10 = FUNC_4(&VAR_12->peer);

    if (VAR_10 == VAR_2 || VAR_10 == VAR_0 || VAR_10 == VAR_1) {
        if (VAR_12->peer.connection) {
            FUNC_1(VAR_12->peer.connection);
        }

        FUNC_3(VAR_12->pool);
        FUNC_9(VAR_9);
        return;
    }

    VAR_12->peer.connection->data = VAR_9;
    VAR_12->peer.connection->pool = VAR_9->connection->pool;

    VAR_9->connection->read->handler = VAR_6;
    VAR_12->peer.connection->read->handler = FUNC_6;
    VAR_12->peer.connection->write->handler = FUNC_7;

    VAR_12->handler = VAR_7;

    FUNC_0(VAR_12->peer.connection->read, VAR_13->timeout);
    FUNC_0(VAR_12->peer.connection->write, VAR_13->timeout);

    if (VAR_10 == VAR_4) {
        FUNC_7(VAR_12->peer.connection->write);
        return;
    }
}
