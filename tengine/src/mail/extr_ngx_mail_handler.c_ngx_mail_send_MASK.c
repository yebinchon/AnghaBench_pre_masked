
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ len; int data; } ;
struct TYPE_14__ {scalar_t__ blocked; scalar_t__ quit; TYPE_1__ out; } ;
typedef TYPE_2__ ngx_mail_session_t ;
struct TYPE_15__ {int timeout; } ;
typedef TYPE_3__ ngx_mail_core_srv_conf_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_16__ {scalar_t__ timer_set; scalar_t__ timedout; TYPE_5__* data; } ;
typedef TYPE_4__ ngx_event_t ;
struct TYPE_17__ {int timedout; scalar_t__ (* send ) (TYPE_5__*,int ,scalar_t__) ;int write; TYPE_6__* read; int log; TYPE_2__* data; } ;
typedef TYPE_5__ ngx_connection_t ;
struct TYPE_18__ {int (* handler ) (TYPE_6__*) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_4__*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ,char*) ;
 int FUNC_4 (TYPE_5__*) ;
 int VAR_4 ;
 TYPE_3__* FUNC_5 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_6 (TYPE_5__*,int ,scalar_t__) ;
 int FUNC_7 (TYPE_6__*) ;

void
FUNC_8(ngx_event_t *VAR_5)
{
    ngx_int_t VAR_6;
    ngx_connection_t *VAR_7;
    ngx_mail_session_t *VAR_8;
    ngx_mail_core_srv_conf_t *VAR_9;

    VAR_7 = VAR_5->data;
    VAR_8 = VAR_7->data;

    if (VAR_5->timedout) {
        FUNC_3(VAR_2, VAR_7->log, VAR_1, "client timed out");
        VAR_7->timedout = 1;
        FUNC_4(VAR_7);
        return;
    }

    if (VAR_8->out.len == 0) {
        if (FUNC_2(VAR_7->write, 0) != VAR_3) {
            FUNC_4(VAR_7);
        }

        return;
    }

    VAR_6 = VAR_7->send(VAR_7, VAR_8->out.data, VAR_8->out.len);

    if (VAR_6 > 0) {
        VAR_8->out.data += VAR_6;
        VAR_8->out.len -= VAR_6;

        if (VAR_8->out.len != 0) {
            goto again;
        }

        if (VAR_5->timer_set) {
            FUNC_1(VAR_5);
        }

        if (VAR_8->quit) {
            FUNC_4(VAR_7);
            return;
        }

        if (VAR_8->blocked) {
            VAR_7->read->handler(VAR_7->read);
        }

        return;
    }

    if (VAR_6 == VAR_0) {
        FUNC_4(VAR_7);
        return;
    }



again:

    VAR_9 = FUNC_5(VAR_8, VAR_4);

    FUNC_0(VAR_7->write, VAR_9->timeout);

    if (FUNC_2(VAR_7->write, 0) != VAR_3) {
        FUNC_4(VAR_7);
        return;
    }
}
