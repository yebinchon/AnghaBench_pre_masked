
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_10__ ;


typedef size_t ngx_uint_t ;
struct TYPE_17__ {TYPE_5__* event; int name_expire_queue; int name_rbtree; int srv_expire_queue; int srv_rbtree; int log; } ;
typedef TYPE_3__ ngx_resolver_t ;
struct TYPE_18__ {TYPE_5__* waiting; } ;
typedef TYPE_4__ ngx_resolver_node_t ;
struct TYPE_16__ {scalar_t__ len; } ;
struct TYPE_19__ {size_t nsrvs; scalar_t__ timer_set; struct TYPE_19__* event; TYPE_2__ service; int name; struct TYPE_19__* next; TYPE_4__* node; int state; TYPE_10__* srvs; scalar_t__ quick; TYPE_3__* resolver; } ;
typedef TYPE_5__ ngx_resolver_ctx_t ;
struct TYPE_15__ {TYPE_10__* data; } ;
struct TYPE_14__ {TYPE_1__ name; struct TYPE_14__* addrs; struct TYPE_14__* sockaddr; TYPE_5__* ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (int ,int ,int ,char*,int ) ;
 int FUNC_2 (int ,int ,int ,char*,int *) ;
 int FUNC_3 (TYPE_3__*,int *,int *) ;
 int FUNC_4 (TYPE_3__*,TYPE_10__*) ;
 int FUNC_5 (TYPE_3__*,TYPE_5__*) ;
 scalar_t__ FUNC_6 (TYPE_3__*) ;

void
FUNC_7(ngx_resolver_ctx_t *VAR_4)
{
    ngx_uint_t VAR_5;
    ngx_resolver_t *VAR_6;
    ngx_resolver_ctx_t *VAR_7, **VAR_8;
    ngx_resolver_node_t *VAR_9;

    VAR_6 = VAR_4->resolver;

    FUNC_1(VAR_2, VAR_6->log, 0,
                   "resolve name done: %i", VAR_4->state);

    if (VAR_4->quick) {
        return;
    }

    if (VAR_4->event && VAR_4->event->timer_set) {
        FUNC_0(VAR_4->event);
    }



    if (VAR_4->nsrvs) {
        for (VAR_5 = 0; VAR_5 < VAR_4->nsrvs; VAR_5++) {
            if (VAR_4->srvs[VAR_5].ctx) {
                FUNC_7(VAR_4->srvs[VAR_5].ctx);
            }

            if (VAR_4->srvs[VAR_5].addrs) {
                FUNC_4(VAR_6, VAR_4->srvs[VAR_5].addrs->sockaddr);
                FUNC_4(VAR_6, VAR_4->srvs[VAR_5].addrs);
            }

            FUNC_4(VAR_6, VAR_4->srvs[VAR_5].name.data);
        }

        FUNC_4(VAR_6, VAR_4->srvs);
    }

    if (VAR_4->state == VAR_0 || VAR_4->state == VAR_3) {

        VAR_9 = VAR_4->node;

        if (VAR_9) {
            VAR_8 = &VAR_9->waiting;
            VAR_7 = VAR_9->waiting;

            while (VAR_7) {
                if (VAR_7 == VAR_4) {
                    *VAR_8 = VAR_7->next;

                    goto done;
                }

                VAR_8 = &VAR_7->next;
                VAR_7 = VAR_7->next;
            }

            FUNC_2(VAR_1, VAR_6->log, 0,
                          "could not cancel %V resolving", &VAR_4->name);
        }
    }

done:

    if (VAR_4->service.len) {
        FUNC_3(VAR_6, &VAR_6->srv_rbtree, &VAR_6->srv_expire_queue);

    } else {
        FUNC_3(VAR_6, &VAR_6->name_rbtree, &VAR_6->name_expire_queue);
    }





    if (VAR_4->event) {
        FUNC_5(VAR_6, VAR_4->event);
    }

    FUNC_5(VAR_6, VAR_4);



    if (VAR_6->event->timer_set && FUNC_6(VAR_6)) {
        FUNC_0(VAR_6->event);
    }
}
