
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ key; struct TYPE_7__* right; struct TYPE_7__* left; struct TYPE_7__* parent; } ;
typedef TYPE_1__ ngx_rbtree_node_t ;
typedef int ngx_rbtree_key_t ;
struct TYPE_8__ {int key; } ;
typedef TYPE_2__ ngx_http_file_cache_node_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_2(ngx_rbtree_node_t *VAR_1,
    ngx_rbtree_node_t *VAR_2, ngx_rbtree_node_t *VAR_3)
{
    ngx_rbtree_node_t **VAR_4;
    ngx_http_file_cache_node_t *VAR_5, *VAR_6;

    for ( ;; ) {

        if (VAR_2->key < VAR_1->key) {

            VAR_4 = &VAR_1->left;

        } else if (VAR_2->key > VAR_1->key) {

            VAR_4 = &VAR_1->right;

        } else {

            VAR_5 = (ngx_http_file_cache_node_t *) VAR_2;
            VAR_6 = (ngx_http_file_cache_node_t *) VAR_1;

            VAR_4 = (FUNC_0(VAR_5->key, VAR_6->key,
                            VAR_0 - sizeof(ngx_rbtree_key_t))
                 < 0)
                    ? &VAR_1->left : &VAR_1->right;
        }

        if (*VAR_4 == VAR_3) {
            break;
        }

        VAR_1 = *VAR_4;
    }

    *VAR_4 = VAR_2;
    VAR_2->parent = VAR_1;
    VAR_2->left = VAR_3;
    VAR_2->right = VAR_3;
    FUNC_1(VAR_2);
}
