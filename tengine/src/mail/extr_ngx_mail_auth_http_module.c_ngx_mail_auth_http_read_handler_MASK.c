
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
typedef int ngx_mail_session_t ;
struct TYPE_11__ {int name; } ;
struct TYPE_12__ {int pool; int (* handler ) (int *,TYPE_2__*) ;TYPE_9__* response; TYPE_1__ peer; } ;
typedef TYPE_2__ ngx_mail_auth_http_ctx_t ;
struct TYPE_13__ {int log; scalar_t__ timedout; TYPE_4__* data; } ;
typedef TYPE_3__ ngx_event_t ;
struct TYPE_14__ {int * data; } ;
typedef TYPE_4__ ngx_connection_t ;
struct TYPE_15__ {scalar_t__ end; scalar_t__ last; int pos; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_4__*) ;
 TYPE_9__* FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,char*) ;
 int FUNC_4 (int ,int ,int ,char*,int ) ;
 int VAR_4 ;
 TYPE_2__* FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (TYPE_4__*,int ,scalar_t__) ;
 int FUNC_8 (int *,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_9(ngx_event_t *VAR_5)
{
    ssize_t VAR_6, VAR_7;
    ngx_connection_t *VAR_8;
    ngx_mail_session_t *VAR_9;
    ngx_mail_auth_http_ctx_t *VAR_10;

    VAR_8 = VAR_5->data;
    VAR_9 = VAR_8->data;

    FUNC_3(VAR_2, VAR_5->log, 0,
                   "mail auth http read handler");

    VAR_10 = FUNC_5(VAR_9, VAR_4);

    if (VAR_5->timedout) {
        FUNC_4(VAR_3, VAR_5->log, VAR_1,
                      "auth http server %V timed out", VAR_10->peer.name);
        FUNC_0(VAR_8);
        FUNC_2(VAR_10->pool);
        FUNC_6(VAR_9);
        return;
    }

    if (VAR_10->response == ((void*)0)) {
        VAR_10->response = FUNC_1(VAR_10->pool, 1024);
        if (VAR_10->response == ((void*)0)) {
            FUNC_0(VAR_8);
            FUNC_2(VAR_10->pool);
            FUNC_6(VAR_9);
            return;
        }
    }

    VAR_7 = VAR_10->response->end - VAR_10->response->last;

    VAR_6 = FUNC_7(VAR_8, VAR_10->response->pos, VAR_7);

    if (VAR_6 > 0) {
        VAR_10->response->last += VAR_6;

        VAR_10->handler(VAR_9, VAR_10);
        return;
    }

    if (VAR_6 == VAR_0) {
        return;
    }

    FUNC_0(VAR_8);
    FUNC_2(VAR_10->pool);
    FUNC_6(VAR_9);
}
