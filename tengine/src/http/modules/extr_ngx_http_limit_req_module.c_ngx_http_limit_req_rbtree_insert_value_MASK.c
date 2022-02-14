
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ key; struct TYPE_7__* right; struct TYPE_7__* left; struct TYPE_7__* parent; int color; } ;
typedef TYPE_1__ ngx_rbtree_node_t ;
struct TYPE_8__ {int len; int data; } ;
typedef TYPE_2__ ngx_http_limit_req_node_t ;


 scalar_t__ FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_2(ngx_rbtree_node_t *VAR_0,
    ngx_rbtree_node_t *VAR_1, ngx_rbtree_node_t *VAR_2)
{
    ngx_rbtree_node_t **VAR_3;
    ngx_http_limit_req_node_t *VAR_4, *VAR_5;

    for ( ;; ) {

        if (VAR_1->key < VAR_0->key) {

            VAR_3 = &VAR_0->left;

        } else if (VAR_1->key > VAR_0->key) {

            VAR_3 = &VAR_0->right;

        } else {

            VAR_4 = (ngx_http_limit_req_node_t *) &VAR_1->color;
            VAR_5 = (ngx_http_limit_req_node_t *) &VAR_0->color;

            VAR_3 = (FUNC_0(VAR_4->data, VAR_5->data, VAR_4->len, VAR_5->len) < 0)
                ? &VAR_0->left : &VAR_0->right;
        }

        if (*VAR_3 == VAR_2) {
            break;
        }

        VAR_0 = *VAR_3;
    }

    *VAR_3 = VAR_1;
    VAR_1->parent = VAR_0;
    VAR_1->left = VAR_2;
    VAR_1->right = VAR_2;
    FUNC_1(VAR_1);
}
