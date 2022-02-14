
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* root; TYPE_2__* sentinel; } ;
typedef TYPE_1__ ngx_rbtree_t ;
struct TYPE_10__ {struct TYPE_10__* left; struct TYPE_10__* parent; struct TYPE_10__* right; } ;
typedef TYPE_2__ ngx_rbtree_node_t ;


 TYPE_2__* FUNC_0 (TYPE_2__*,TYPE_2__*) ;

ngx_rbtree_node_t *
FUNC_1(ngx_rbtree_t *VAR_0, ngx_rbtree_node_t *VAR_1)
{
    ngx_rbtree_node_t *VAR_2, *VAR_3, *VAR_4;

    VAR_3 = VAR_0->sentinel;

    if (VAR_1->right != VAR_3) {
        return FUNC_0(VAR_1->right, VAR_3);
    }

    VAR_2 = VAR_0->root;

    for ( ;; ) {
        VAR_4 = VAR_1->parent;

        if (VAR_1 == VAR_2) {
            return ((void*)0);
        }

        if (VAR_1 == VAR_4->left) {
            return VAR_4;
        }

        VAR_1 = VAR_4;
    }
}
