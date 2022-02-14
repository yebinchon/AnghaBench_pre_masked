
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {TYPE_2__* root; } ;
typedef TYPE_1__ ngx_radix_tree_t ;
struct TYPE_7__ {uintptr_t value; struct TYPE_7__* left; struct TYPE_7__* right; struct TYPE_7__* parent; } ;
typedef TYPE_2__ ngx_radix_node_t ;
typedef int ngx_int_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 uintptr_t VAR_3 ;
 TYPE_2__* FUNC_0 (TYPE_1__*) ;

ngx_int_t
FUNC_1(ngx_radix_tree_t *VAR_4, uint32_t VAR_5, uint32_t VAR_6,
    uintptr_t VAR_7)
{
    uint32_t VAR_8;
    ngx_radix_node_t *VAR_9, *VAR_10;

    VAR_8 = 0x80000000;

    VAR_9 = VAR_4->root;
    VAR_10 = VAR_4->root;

    while (VAR_8 & VAR_6) {
        if (VAR_5 & VAR_8) {
            VAR_10 = VAR_9->right;

        } else {
            VAR_10 = VAR_9->left;
        }

        if (VAR_10 == ((void*)0)) {
            break;
        }

        VAR_8 >>= 1;
        VAR_9 = VAR_10;
    }

    if (VAR_10) {
        if (VAR_9->value != VAR_3) {
            return VAR_0;
        }

        VAR_9->value = VAR_7;
        return VAR_2;
    }

    while (VAR_8 & VAR_6) {
        VAR_10 = FUNC_0(VAR_4);
        if (VAR_10 == ((void*)0)) {
            return VAR_1;
        }

        VAR_10->right = ((void*)0);
        VAR_10->left = ((void*)0);
        VAR_10->parent = VAR_9;
        VAR_10->value = VAR_3;

        if (VAR_5 & VAR_8) {
            VAR_9->right = VAR_10;

        } else {
            VAR_9->left = VAR_10;
        }

        VAR_8 >>= 1;
        VAR_9 = VAR_10;
    }

    VAR_9->value = VAR_7;

    return VAR_2;
}
