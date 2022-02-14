
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_15__ {int len; int * data; } ;
typedef TYPE_2__ ngx_str_t ;
struct TYPE_16__ {TYPE_5__* event; int log; int addr_expire_queue; int addr_rbtree; int addr6_expire_queue; int addr6_rbtree; } ;
typedef TYPE_3__ ngx_resolver_t ;
struct TYPE_17__ {TYPE_5__* waiting; } ;
typedef TYPE_4__ ngx_resolver_node_t ;
struct TYPE_14__ {int socklen; TYPE_6__* sockaddr; } ;
struct TYPE_18__ {scalar_t__ timer_set; struct TYPE_18__* event; TYPE_1__ addr; struct TYPE_18__* next; TYPE_4__* node; int state; TYPE_3__* resolver; } ;
typedef TYPE_5__ ngx_resolver_ctx_t ;
typedef int ngx_rbtree_t ;
typedef int ngx_queue_t ;
struct TYPE_19__ {int sa_family; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (int ,int ,int ,char*,int ) ;
 int FUNC_2 (int ,int ,int ,char*,TYPE_2__*) ;
 int FUNC_3 (TYPE_3__*,int *,int *) ;
 int FUNC_4 (TYPE_3__*,TYPE_5__*) ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_6__*,int ,int *,int,int ) ;

void
FUNC_7(ngx_resolver_ctx_t *VAR_5)
{
    ngx_queue_t *VAR_6;
    ngx_rbtree_t *VAR_7;
    ngx_resolver_t *VAR_8;
    ngx_resolver_ctx_t *VAR_9, **VAR_10;
    ngx_resolver_node_t *VAR_11;

    VAR_8 = VAR_5->resolver;

    switch (VAR_5->addr.sockaddr->sa_family) {
    default:
        VAR_7 = &VAR_8->addr_rbtree;
        VAR_6 = &VAR_8->addr_expire_queue;
    }

    FUNC_1(VAR_2, VAR_8->log, 0,
                   "resolve addr done: %i", VAR_5->state);

    if (VAR_5->event && VAR_5->event->timer_set) {
        FUNC_0(VAR_5->event);
    }



    if (VAR_5->state == VAR_0 || VAR_5->state == VAR_3) {

        VAR_11 = VAR_5->node;

        if (VAR_11) {
            VAR_10 = &VAR_11->waiting;
            VAR_9 = VAR_11->waiting;

            while (VAR_9) {
                if (VAR_9 == VAR_5) {
                    *VAR_10 = VAR_9->next;

                    goto done;
                }

                VAR_10 = &VAR_9->next;
                VAR_9 = VAR_9->next;
            }
        }

        {
            u_char VAR_12[VAR_4];
            ngx_str_t VAR_13;

            VAR_13.data = VAR_12;
            VAR_13.len = FUNC_6(VAR_5->addr.sockaddr, VAR_5->addr.socklen,
                                         VAR_12, VAR_4, 0);

            FUNC_2(VAR_1, VAR_8->log, 0,
                          "could not cancel %V resolving", &VAR_13);
        }
    }

done:

    FUNC_3(VAR_8, VAR_7, VAR_6);





    if (VAR_5->event) {
        FUNC_4(VAR_8, VAR_5->event);
    }

    FUNC_4(VAR_8, VAR_5);



    if (VAR_8->event->timer_set && FUNC_5(VAR_8)) {
        FUNC_0(VAR_8->event);
    }
}
