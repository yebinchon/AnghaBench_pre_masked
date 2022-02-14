
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* connection; } ;
struct TYPE_12__ {TYPE_3__* check_peer_addr; TYPE_2__ pc; } ;
typedef TYPE_4__ ngx_http_upstream_check_peer_t ;
struct TYPE_13__ {int log; TYPE_4__* data; } ;
typedef TYPE_5__ ngx_event_t ;
struct TYPE_11__ {int name; } ;
struct TYPE_9__ {int error; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (TYPE_4__*,int ) ;
 int FUNC_3 (int ,int ,int ,char*,int *) ;

__attribute__((used)) static void
FUNC_4(ngx_event_t *VAR_1)
{
    ngx_http_upstream_check_peer_t *VAR_2;

    if (FUNC_1()) {
        return;
    }

    VAR_2 = VAR_1->data;
    VAR_2->pc.connection->error = 1;

    FUNC_3(VAR_0, VAR_1->log, 0,
                  "check time out with peer: %V ",
                  &VAR_2->check_peer_addr->name);

    FUNC_2(VAR_2, 0);
    FUNC_0(VAR_2);
}
