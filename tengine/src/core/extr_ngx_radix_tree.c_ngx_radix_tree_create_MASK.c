
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {TYPE_3__* root; scalar_t__ size; int * start; int * free; int * pool; } ;
typedef TYPE_1__ ngx_radix_tree_t ;
typedef int ngx_radix_node_t ;
typedef int ngx_pool_t ;
typedef int ngx_int_t ;
struct TYPE_8__ {int value; int * parent; int * left; int * right; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int,int,int ) ;
 TYPE_3__* FUNC_2 (TYPE_1__*) ;

ngx_radix_tree_t *
FUNC_3(ngx_pool_t *VAR_3, ngx_int_t VAR_4)
{
    uint32_t VAR_5, VAR_6, VAR_7;
    ngx_radix_tree_t *VAR_8;

    VAR_8 = FUNC_0(VAR_3, sizeof(ngx_radix_tree_t));
    if (VAR_8 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_8->pool = VAR_3;
    VAR_8->free = ((void*)0);
    VAR_8->start = ((void*)0);
    VAR_8->size = 0;

    VAR_8->root = FUNC_2(VAR_8);
    if (VAR_8->root == ((void*)0)) {
        return ((void*)0);
    }

    VAR_8->root->right = ((void*)0);
    VAR_8->root->left = ((void*)0);
    VAR_8->root->parent = ((void*)0);
    VAR_8->root->value = VAR_1;

    if (VAR_4 == 0) {
        return VAR_8;
    }
    if (VAR_4 == -1) {
        switch (VAR_2 / sizeof(ngx_radix_node_t)) {


        case 128:
            VAR_4 = 6;
            break;


        case 256:
            VAR_4 = 7;
            break;


        default:
            VAR_4 = 8;
        }
    }

    VAR_6 = 0;
    VAR_7 = 0x80000000;

    while (VAR_4--) {

        VAR_5 = 0;
        VAR_6 >>= 1;
        VAR_6 |= 0x80000000;

        do {
            if (FUNC_1(VAR_8, VAR_5, VAR_6, VAR_1)
                != VAR_0)
            {
                return ((void*)0);
            }

            VAR_5 += VAR_7;

        } while (VAR_5);

        VAR_7 >>= 1;
    }

    return VAR_8;
}
