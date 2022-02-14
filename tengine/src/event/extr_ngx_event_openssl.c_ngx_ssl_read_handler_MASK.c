
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* data; } ;
typedef TYPE_1__ ngx_event_t ;
struct TYPE_6__ {TYPE_3__* write; int log; } ;
typedef TYPE_2__ ngx_connection_t ;
struct TYPE_7__ {int (* handler ) (TYPE_3__*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,char*) ;
 int FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static void
FUNC_2(ngx_event_t *VAR_1)
{
    ngx_connection_t *VAR_2;

    VAR_2 = VAR_1->data;

    FUNC_0(VAR_0, VAR_2->log, 0, "SSL read handler");

    VAR_2->write->handler(VAR_2->write);
}
