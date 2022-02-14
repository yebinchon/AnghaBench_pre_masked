
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_9__ ;
typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ timer_set; TYPE_2__* data; } ;
struct TYPE_10__ {int * connection; } ;
struct TYPE_11__ {int delete; int * pool; TYPE_6__ check_timeout_ev; TYPE_6__ check_ev; TYPE_1__ pc; } ;
typedef TYPE_2__ ngx_http_upstream_check_peer_t ;
struct TYPE_13__ {int log; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_9__* VAR_1 ;
 int FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int ,char*,TYPE_2__*,TYPE_2__*,TYPE_6__*) ;
 int FUNC_4 (TYPE_2__*,int) ;

__attribute__((used)) static void
FUNC_5(ngx_http_upstream_check_peer_t *VAR_2)
{
    if (VAR_2 != VAR_2->check_ev.data) {
        FUNC_3(VAR_0, VAR_1->log, 0,
                      "different peer: %p, data: %p, timer: %p",
                      VAR_2, VAR_2->check_ev.data, &VAR_2->check_ev);
    }

    if (VAR_2->pc.connection) {
        FUNC_0(VAR_2->pc.connection);
        VAR_2->pc.connection = ((void*)0);
    }

    if (VAR_2->check_ev.timer_set) {
        FUNC_1(&VAR_2->check_ev);
    }

    if (VAR_2->check_timeout_ev.timer_set) {
        FUNC_1(&VAR_2->check_timeout_ev);
    }

    if (VAR_2->pool != ((void*)0)) {
        FUNC_2(VAR_2->pool);
        VAR_2->pool = ((void*)0);
    }

    FUNC_4(VAR_2, sizeof(ngx_http_upstream_check_peer_t));

    VAR_2->delete = 1;
}
