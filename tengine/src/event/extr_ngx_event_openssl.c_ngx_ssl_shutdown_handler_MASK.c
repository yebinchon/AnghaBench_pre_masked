
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int log; scalar_t__ timedout; TYPE_4__* data; } ;
typedef TYPE_3__ ngx_event_t ;
struct TYPE_11__ {int timedout; TYPE_2__* async; TYPE_1__* ssl; } ;
typedef TYPE_4__ ngx_connection_t ;
typedef int (* ngx_connection_handler_pt ) (TYPE_4__*) ;
struct TYPE_9__ {int handler; } ;
struct TYPE_8__ {int (* handler ) (TYPE_4__*) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;

__attribute__((used)) static void
FUNC_2(ngx_event_t *VAR_3)
{
    ngx_connection_t *VAR_4;
    ngx_connection_handler_pt VAR_5;

    VAR_4 = VAR_3->data;
    VAR_5 = VAR_4->ssl->handler;

    if (VAR_3->timedout) {
        VAR_4->timedout = 1;
    }

    FUNC_0(VAR_1, VAR_3->log, 0, "SSL shutdown handler");

    if (FUNC_1(VAR_4) == VAR_0) {
        return;
    }
    VAR_5(VAR_4);
}
