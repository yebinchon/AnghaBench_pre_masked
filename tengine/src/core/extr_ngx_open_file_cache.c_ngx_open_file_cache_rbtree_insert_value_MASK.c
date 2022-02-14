
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ key; struct TYPE_7__* right; struct TYPE_7__* left; struct TYPE_7__* parent; } ;
typedef TYPE_1__ ngx_rbtree_node_t ;
struct TYPE_8__ {int name; } ;
typedef TYPE_2__ ngx_cached_open_file_t ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static void
FUNC_2(ngx_rbtree_node_t *VAR_0,
    ngx_rbtree_node_t *VAR_1, ngx_rbtree_node_t *VAR_2)
{
    ngx_rbtree_node_t **VAR_3;
    ngx_cached_open_file_t *VAR_4, *VAR_5;

    for ( ;; ) {

        if (VAR_1->key < VAR_0->key) {

            VAR_3 = &VAR_0->left;

        } else if (VAR_1->key > VAR_0->key) {

            VAR_3 = &VAR_0->right;

        } else {

            VAR_4 = (ngx_cached_open_file_t *) VAR_1;
            VAR_5 = (ngx_cached_open_file_t *) VAR_0;

            VAR_3 = (FUNC_1(VAR_4->name, VAR_5->name) < 0)
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
    FUNC_0(VAR_1);
}
