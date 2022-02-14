
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_13__ ;


struct TYPE_21__ {int len; } ;
struct TYPE_17__ {scalar_t__ state; TYPE_7__ name; TYPE_2__* data; } ;
typedef TYPE_1__ ngx_resolver_ctx_t ;
struct TYPE_20__ {int len; int * data; } ;
struct TYPE_18__ {TYPE_4__ host; TYPE_3__* connection; } ;
typedef TYPE_2__ ngx_mail_session_t ;
struct TYPE_19__ {TYPE_8__* read; TYPE_13__* log; int pool; int addr_text; } ;
typedef TYPE_3__ ngx_connection_t ;
struct TYPE_22__ {int handler; } ;
struct TYPE_16__ {char* action; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,TYPE_13__*,int ,char*,TYPE_4__*) ;
 int FUNC_1 (int ,TYPE_13__*,int ,char*,int *,scalar_t__,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_2__*,TYPE_3__*) ;
 int VAR_3 ;
 int FUNC_4 (TYPE_8__*,int *) ;
 int VAR_4 ;
 int * FUNC_5 (int ,TYPE_7__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (scalar_t__) ;
 TYPE_4__ VAR_5 ;
 TYPE_4__ VAR_6 ;

__attribute__((used)) static void
FUNC_8(ngx_resolver_ctx_t *VAR_7)
{
    ngx_connection_t *VAR_8;
    ngx_mail_session_t *VAR_9;

    VAR_9 = VAR_7->data;
    VAR_8 = VAR_9->connection;

    if (VAR_7->state) {
        FUNC_1(VAR_1, VAR_8->log, 0,
                      "%V could not be resolved (%i: %s)",
                      &VAR_8->addr_text, VAR_7->state,
                      FUNC_7(VAR_7->state));

        if (VAR_7->state == VAR_2) {
            VAR_9->host = VAR_6;

        } else {
            VAR_9->host = VAR_5;
        }

        FUNC_6(VAR_7);

        FUNC_3(VAR_9, VAR_9->connection);

        return;
    }

    VAR_8->log->action = "in resolving client hostname";

    VAR_9->host.data = FUNC_5(VAR_8->pool, &VAR_7->name);
    if (VAR_9->host.data == ((void*)0)) {
        FUNC_6(VAR_7);
        FUNC_2(VAR_8);
        return;
    }

    VAR_9->host.len = VAR_7->name.len;

    FUNC_6(VAR_7);

    FUNC_0(VAR_0, VAR_8->log, 0,
                   "address resolved: %V", &VAR_9->host);

    VAR_8->read->handler = VAR_3;

    FUNC_4(VAR_8->read, &VAR_4);
}
