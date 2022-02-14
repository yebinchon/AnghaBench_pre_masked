
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int log; } ;
typedef TYPE_1__ ngx_resolver_t ;
struct TYPE_9__ {scalar_t__ timeout; int ident; TYPE_5__* event; int cancelable; } ;
typedef TYPE_2__ ngx_resolver_ctx_t ;
typedef int ngx_int_t ;
typedef int ngx_event_t ;
struct TYPE_10__ {int cancelable; int log; TYPE_2__* data; int handler; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_5__*,scalar_t__) ;
 TYPE_5__* FUNC_1 (TYPE_1__*,int) ;
 int VAR_2 ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_resolver_t *VAR_3, ngx_resolver_ctx_t *VAR_4)
{
    if (VAR_4->event || VAR_4->timeout == 0) {
        return VAR_1;
    }

    VAR_4->event = FUNC_1(VAR_3, sizeof(ngx_event_t));
    if (VAR_4->event == ((void*)0)) {
        return VAR_0;
    }

    VAR_4->event->handler = VAR_2;
    VAR_4->event->data = VAR_4;
    VAR_4->event->log = VAR_3->log;
    VAR_4->event->cancelable = VAR_4->cancelable;
    VAR_4->ident = -1;

    FUNC_0(VAR_4->event, VAR_4->timeout);

    return VAR_1;
}
