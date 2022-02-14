
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_12__ {int len; int data; } ;
typedef TYPE_2__ ngx_str_t ;
struct TYPE_11__ {TYPE_5__* sentinel; TYPE_5__* root; } ;
struct TYPE_13__ {TYPE_1__ name_rbtree; } ;
typedef TYPE_3__ ngx_resolver_t ;
struct TYPE_14__ {int nlen; int name; } ;
typedef TYPE_4__ ngx_resolver_node_t ;
struct TYPE_15__ {scalar_t__ key; struct TYPE_15__* right; struct TYPE_15__* left; } ;
typedef TYPE_5__ ngx_rbtree_node_t ;
typedef scalar_t__ ngx_int_t ;


 scalar_t__ FUNC_0 (int ,int ,int ,int ) ;
 TYPE_4__* FUNC_1 (TYPE_5__*) ;

__attribute__((used)) static ngx_resolver_node_t *
FUNC_2(ngx_resolver_t *VAR_0, ngx_str_t *VAR_1, uint32_t VAR_2)
{
    ngx_int_t VAR_3;
    ngx_rbtree_node_t *VAR_4, *VAR_5;
    ngx_resolver_node_t *VAR_6;

    VAR_4 = VAR_0->name_rbtree.root;
    VAR_5 = VAR_0->name_rbtree.sentinel;

    while (VAR_4 != VAR_5) {

        if (VAR_2 < VAR_4->key) {
            VAR_4 = VAR_4->left;
            continue;
        }

        if (VAR_2 > VAR_4->key) {
            VAR_4 = VAR_4->right;
            continue;
        }



        VAR_6 = FUNC_1(VAR_4);

        VAR_3 = FUNC_0(VAR_1->data, VAR_6->name, VAR_1->len, VAR_6->nlen);

        if (VAR_3 == 0) {
            return VAR_6;
        }

        VAR_4 = (VAR_3 < 0) ? VAR_4->left : VAR_4->right;
    }



    return ((void*)0);
}
