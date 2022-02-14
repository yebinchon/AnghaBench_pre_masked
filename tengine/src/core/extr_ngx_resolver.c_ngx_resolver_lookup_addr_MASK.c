
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* sentinel; TYPE_3__* root; } ;
struct TYPE_7__ {TYPE_1__ addr_rbtree; } ;
typedef TYPE_2__ ngx_resolver_t ;
typedef int ngx_resolver_node_t ;
struct TYPE_8__ {scalar_t__ key; struct TYPE_8__* right; struct TYPE_8__* left; } ;
typedef TYPE_3__ ngx_rbtree_node_t ;
typedef scalar_t__ in_addr_t ;


 int * FUNC_0 (TYPE_3__*) ;

__attribute__((used)) static ngx_resolver_node_t *
FUNC_1(ngx_resolver_t *VAR_0, in_addr_t VAR_1)
{
    ngx_rbtree_node_t *VAR_2, *VAR_3;

    VAR_2 = VAR_0->addr_rbtree.root;
    VAR_3 = VAR_0->addr_rbtree.sentinel;

    while (VAR_2 != VAR_3) {

        if (VAR_1 < VAR_2->key) {
            VAR_2 = VAR_2->left;
            continue;
        }

        if (VAR_1 > VAR_2->key) {
            VAR_2 = VAR_2->right;
            continue;
        }



        return FUNC_0(VAR_2);
    }



    return ((void*)0);
}
