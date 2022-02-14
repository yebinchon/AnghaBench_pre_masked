
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ timedout; int write; TYPE_4__* data; } ;
typedef TYPE_3__ ngx_event_t ;
struct TYPE_12__ {TYPE_2__* ssl; TYPE_1__* async; int log; } ;
typedef TYPE_4__ ngx_connection_t ;
struct TYPE_10__ {int (* handler ) (TYPE_4__*) ;} ;
struct TYPE_9__ {int handler; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,char*,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;

__attribute__((used)) static void
FUNC_4(ngx_event_t *VAR_3)
{
    ngx_connection_t *VAR_4;

    VAR_4 = VAR_3->data;

    FUNC_0(VAR_1, VAR_4->log, 0,
                   "SSL handshake handler: %d", VAR_3->write);

    if (VAR_3->timedout) {
        VAR_4->ssl->handler(VAR_4);
        return;
    }

    if (FUNC_1(VAR_4) == VAR_0) {
        return;
    }
    VAR_4->ssl->handler(VAR_4);
}
