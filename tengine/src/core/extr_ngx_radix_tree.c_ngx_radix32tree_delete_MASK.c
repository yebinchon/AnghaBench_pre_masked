
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {TYPE_2__* free; TYPE_2__* root; } ;
typedef TYPE_1__ ngx_radix_tree_t ;
struct TYPE_5__ {scalar_t__ value; struct TYPE_5__* parent; struct TYPE_5__* left; struct TYPE_5__* right; } ;
typedef TYPE_2__ ngx_radix_node_t ;
typedef int ngx_int_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

ngx_int_t
FUNC_0(ngx_radix_tree_t *VAR_3, uint32_t VAR_4, uint32_t VAR_5)
{
    uint32_t VAR_6;
    ngx_radix_node_t *VAR_7;

    VAR_6 = 0x80000000;
    VAR_7 = VAR_3->root;

    while (VAR_7 && (VAR_6 & VAR_5)) {
        if (VAR_4 & VAR_6) {
            VAR_7 = VAR_7->right;

        } else {
            VAR_7 = VAR_7->left;
        }

        VAR_6 >>= 1;
    }

    if (VAR_7 == ((void*)0)) {
        return VAR_0;
    }

    if (VAR_7->right || VAR_7->left) {
        if (VAR_7->value != VAR_2) {
            VAR_7->value = VAR_2;
            return VAR_1;
        }

        return VAR_0;
    }

    for ( ;; ) {
        if (VAR_7->parent->right == VAR_7) {
            VAR_7->parent->right = ((void*)0);

        } else {
            VAR_7->parent->left = ((void*)0);
        }

        VAR_7->right = VAR_3->free;
        VAR_3->free = VAR_7;

        VAR_7 = VAR_7->parent;

        if (VAR_7->right || VAR_7->left) {
            break;
        }

        if (VAR_7->value != VAR_2) {
            break;
        }

        if (VAR_7->parent == ((void*)0)) {
            break;
        }
    }

    return VAR_1;
}
