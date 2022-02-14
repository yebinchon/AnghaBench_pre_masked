
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int size; int * start; int pool; TYPE_2__* free; } ;
typedef TYPE_1__ ngx_radix_tree_t ;
struct TYPE_6__ {struct TYPE_6__* right; } ;
typedef TYPE_2__ ngx_radix_node_t ;


 int VAR_0 ;
 int * FUNC_0 (int ,int,int) ;

__attribute__((used)) static ngx_radix_node_t *
FUNC_1(ngx_radix_tree_t *VAR_1)
{
    ngx_radix_node_t *VAR_2;

    if (VAR_1->free) {
        VAR_2 = VAR_1->free;
        VAR_1->free = VAR_1->free->right;
        return VAR_2;
    }

    if (VAR_1->size < sizeof(ngx_radix_node_t)) {
        VAR_1->start = FUNC_0(VAR_1->pool, VAR_0, VAR_0);
        if (VAR_1->start == ((void*)0)) {
            return ((void*)0);
        }

        VAR_1->size = VAR_0;
    }

    VAR_2 = (ngx_radix_node_t *) VAR_1->start;
    VAR_1->start += sizeof(ngx_radix_node_t);
    VAR_1->size -= sizeof(ngx_radix_node_t);

    return VAR_2;
}
