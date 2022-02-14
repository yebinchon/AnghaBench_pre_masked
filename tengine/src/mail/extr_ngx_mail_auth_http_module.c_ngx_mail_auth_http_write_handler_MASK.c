
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
typedef int ngx_mail_session_t ;
struct TYPE_15__ {int name; } ;
struct TYPE_17__ {int pool; TYPE_2__* request; TYPE_1__ peer; } ;
typedef TYPE_3__ ngx_mail_auth_http_ctx_t ;
struct TYPE_18__ {int timeout; } ;
typedef TYPE_4__ ngx_mail_auth_http_conf_t ;
struct TYPE_19__ {scalar_t__ timer_set; int handler; int log; scalar_t__ timedout; TYPE_6__* data; } ;
typedef TYPE_5__ ngx_event_t ;
struct TYPE_20__ {int * data; } ;
typedef TYPE_6__ ngx_connection_t ;
struct TYPE_16__ {scalar_t__ last; scalar_t__ pos; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_5__*,int ) ;
 int FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (TYPE_5__*,int ) ;
 int FUNC_5 (int ,int ,int ,char*) ;
 int FUNC_6 (int ,int ,int ,char*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_3__* FUNC_7 (int *,int ) ;
 TYPE_4__* FUNC_8 (int *,int ) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (TYPE_6__*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_11(ngx_event_t *VAR_7)
{
    ssize_t VAR_8, VAR_9;
    ngx_connection_t *VAR_10;
    ngx_mail_session_t *VAR_11;
    ngx_mail_auth_http_ctx_t *VAR_12;
    ngx_mail_auth_http_conf_t *VAR_13;

    VAR_10 = VAR_7->data;
    VAR_11 = VAR_10->data;

    VAR_12 = FUNC_7(VAR_11, VAR_6);

    FUNC_5(VAR_2, VAR_7->log, 0,
                   "mail auth http write handler");

    if (VAR_7->timedout) {
        FUNC_6(VAR_3, VAR_7->log, VAR_1,
                      "auth http server %V timed out", VAR_12->peer.name);
        FUNC_1(VAR_10);
        FUNC_3(VAR_12->pool);
        FUNC_9(VAR_11);
        return;
    }

    VAR_9 = VAR_12->request->last - VAR_12->request->pos;

    VAR_8 = FUNC_10(VAR_10, VAR_12->request->pos, VAR_9);

    if (VAR_8 == VAR_0) {
        FUNC_1(VAR_10);
        FUNC_3(VAR_12->pool);
        FUNC_9(VAR_11);
        return;
    }

    if (VAR_8 > 0) {
        VAR_12->request->pos += VAR_8;

        if (VAR_8 == VAR_9) {
            VAR_7->handler = VAR_5;

            if (VAR_7->timer_set) {
                FUNC_2(VAR_7);
            }

            if (FUNC_4(VAR_7, 0) != VAR_4) {
                FUNC_1(VAR_10);
                FUNC_3(VAR_12->pool);
                FUNC_9(VAR_11);
            }

            return;
        }
    }

    if (!VAR_7->timer_set) {
        VAR_13 = FUNC_8(VAR_11, VAR_6);
        FUNC_0(VAR_7, VAR_13->timeout);
    }
}
