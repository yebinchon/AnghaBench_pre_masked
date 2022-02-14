
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_13__ {int mail_state; int * buffer; } ;
typedef TYPE_2__ ngx_mail_session_t ;
struct TYPE_14__ {scalar_t__ timedout; TYPE_4__* data; } ;
typedef TYPE_3__ ngx_event_t ;
struct TYPE_15__ {int timedout; TYPE_1__* read; TYPE_2__* data; TYPE_10__* log; } ;
typedef TYPE_4__ ngx_connection_t ;
struct TYPE_12__ {int (* handler ) (TYPE_3__*) ;} ;
struct TYPE_11__ {char* action; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,TYPE_10__*,int ,char*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,TYPE_4__*) ;
 int VAR_3 ;

void
FUNC_4(ngx_event_t *VAR_4)
{
    ngx_connection_t *VAR_5;
    ngx_mail_session_t *VAR_6;

    VAR_5 = VAR_4->data;

    VAR_5->log->action = "in auth state";

    if (VAR_4->timedout) {
        FUNC_0(VAR_1, VAR_5->log, VAR_0, "client timed out");
        VAR_5->timedout = 1;
        FUNC_1(VAR_5);
        return;
    }

    VAR_6 = VAR_5->data;

    if (VAR_6->buffer == ((void*)0)) {
        if (FUNC_3(VAR_6, VAR_5) != VAR_2) {
            return;
        }
    }

    VAR_6->mail_state = VAR_3;
    VAR_5->read->handler = FUNC_2;

    FUNC_2(VAR_4);
}
