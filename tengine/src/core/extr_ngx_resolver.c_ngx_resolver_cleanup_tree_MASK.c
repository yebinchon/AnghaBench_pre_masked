
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int ngx_resolver_t ;
struct TYPE_10__ {int node; TYPE_2__* waiting; int queue; } ;
typedef TYPE_1__ ngx_resolver_node_t ;
struct TYPE_11__ {struct TYPE_11__* event; scalar_t__ timer_set; struct TYPE_11__* next; } ;
typedef TYPE_2__ ngx_resolver_ctx_t ;
struct TYPE_12__ {scalar_t__ root; scalar_t__ sentinel; } ;
typedef TYPE_3__ ngx_rbtree_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*,int *) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (int *,TYPE_2__*) ;
 int FUNC_5 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(ngx_resolver_t *VAR_0, ngx_rbtree_t *VAR_1)
{
    ngx_resolver_ctx_t *VAR_2, *VAR_3;
    ngx_resolver_node_t *VAR_4;

    while (VAR_1->root != VAR_1->sentinel) {

        VAR_4 = FUNC_6(FUNC_3(VAR_1->root, VAR_1->sentinel));

        FUNC_1(&VAR_4->queue);

        for (VAR_2 = VAR_4->waiting; VAR_2; VAR_2 = VAR_3) {
            VAR_3 = VAR_2->next;

            if (VAR_2->event) {
                if (VAR_2->event->timer_set) {
                    FUNC_0(VAR_2->event);
                }

                FUNC_4(VAR_0, VAR_2->event);
            }

            FUNC_4(VAR_0, VAR_2);
        }

        FUNC_2(VAR_1, &VAR_4->node);

        FUNC_5(VAR_0, VAR_4);
    }
}
