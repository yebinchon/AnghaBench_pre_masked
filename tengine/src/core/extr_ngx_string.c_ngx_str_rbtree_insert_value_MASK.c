
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ len; int data; } ;
struct TYPE_9__ {TYPE_1__ str; } ;
typedef TYPE_2__ ngx_str_node_t ;
struct TYPE_10__ {scalar_t__ key; struct TYPE_10__* right; struct TYPE_10__* left; struct TYPE_10__* parent; } ;
typedef TYPE_3__ ngx_rbtree_node_t ;


 scalar_t__ FUNC_0 (int ,int ,scalar_t__) ;
 int FUNC_1 (TYPE_3__*) ;

void
FUNC_2(ngx_rbtree_node_t *VAR_0,
    ngx_rbtree_node_t *VAR_1, ngx_rbtree_node_t *VAR_2)
{
    ngx_str_node_t *VAR_3, *VAR_4;
    ngx_rbtree_node_t **VAR_5;

    for ( ;; ) {

        VAR_3 = (ngx_str_node_t *) VAR_1;
        VAR_4 = (ngx_str_node_t *) VAR_0;

        if (VAR_1->key != VAR_0->key) {

            VAR_5 = (VAR_1->key < VAR_0->key) ? &VAR_0->left : &VAR_0->right;

        } else if (VAR_3->str.len != VAR_4->str.len) {

            VAR_5 = (VAR_3->str.len < VAR_4->str.len) ? &VAR_0->left : &VAR_0->right;

        } else {
            VAR_5 = (FUNC_0(VAR_3->str.data, VAR_4->str.data, VAR_3->str.len) < 0)
                 ? &VAR_0->left : &VAR_0->right;
        }

        if (*VAR_5 == VAR_2) {
            break;
        }

        VAR_0 = *VAR_5;
    }

    *VAR_5 = VAR_1;
    VAR_1->parent = VAR_0;
    VAR_1->left = VAR_2;
    VAR_1->right = VAR_2;
    FUNC_1(VAR_1);
}
