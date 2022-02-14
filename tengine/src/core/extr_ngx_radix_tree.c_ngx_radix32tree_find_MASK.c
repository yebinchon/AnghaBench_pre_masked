
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {TYPE_2__* root; } ;
typedef TYPE_1__ ngx_radix_tree_t ;
struct TYPE_5__ {uintptr_t value; struct TYPE_5__* left; struct TYPE_5__* right; } ;
typedef TYPE_2__ ngx_radix_node_t ;


 uintptr_t VAR_0 ;

uintptr_t
FUNC_0(ngx_radix_tree_t *VAR_1, uint32_t VAR_2)
{
    uint32_t VAR_3;
    uintptr_t VAR_4;
    ngx_radix_node_t *VAR_5;

    VAR_3 = 0x80000000;
    VAR_4 = VAR_0;
    VAR_5 = VAR_1->root;

    while (VAR_5) {
        if (VAR_5->value != VAR_0) {
            VAR_4 = VAR_5->value;
        }

        if (VAR_2 & VAR_3) {
            VAR_5 = VAR_5->right;

        } else {
            VAR_5 = VAR_5->left;
        }

        VAR_3 >>= 1;
    }

    return VAR_4;
}
