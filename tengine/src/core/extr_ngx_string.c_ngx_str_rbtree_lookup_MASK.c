
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_10__ {scalar_t__ len; int data; } ;
typedef TYPE_2__ ngx_str_t ;
struct TYPE_9__ {scalar_t__ len; int data; } ;
struct TYPE_11__ {TYPE_1__ str; } ;
typedef TYPE_3__ ngx_str_node_t ;
struct TYPE_12__ {TYPE_5__* sentinel; TYPE_5__* root; } ;
typedef TYPE_4__ ngx_rbtree_t ;
struct TYPE_13__ {scalar_t__ key; struct TYPE_13__* right; struct TYPE_13__* left; } ;
typedef TYPE_5__ ngx_rbtree_node_t ;
typedef scalar_t__ ngx_int_t ;


 scalar_t__ FUNC_0 (int ,int ,scalar_t__) ;

ngx_str_node_t *
FUNC_1(ngx_rbtree_t *VAR_0, ngx_str_t *VAR_1, uint32_t VAR_2)
{
    ngx_int_t VAR_3;
    ngx_str_node_t *VAR_4;
    ngx_rbtree_node_t *VAR_5, *VAR_6;

    VAR_5 = VAR_0->root;
    VAR_6 = VAR_0->sentinel;

    while (VAR_5 != VAR_6) {

        VAR_4 = (ngx_str_node_t *) VAR_5;

        if (VAR_2 != VAR_5->key) {
            VAR_5 = (VAR_2 < VAR_5->key) ? VAR_5->left : VAR_5->right;
            continue;
        }

        if (VAR_1->len != VAR_4->str.len) {
            VAR_5 = (VAR_1->len < VAR_4->str.len) ? VAR_5->left : VAR_5->right;
            continue;
        }

        VAR_3 = FUNC_0(VAR_1->data, VAR_4->str.data, VAR_1->len);

        if (VAR_3 < 0) {
            VAR_5 = VAR_5->left;
            continue;
        }

        if (VAR_3 > 0) {
            VAR_5 = VAR_5->right;
            continue;
        }

        return VAR_4;
    }

    return ((void*)0);
}
