
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* right; struct TYPE_5__* left; } ;
typedef TYPE_1__ ngx_rbtree_node_t ;
typedef int ngx_array_t ;
struct TYPE_6__ {TYPE_1__* sentinel; } ;


 TYPE_1__** FUNC_0 (int *) ;
 TYPE_3__ VAR_0 ;

__attribute__((used)) static void
FUNC_1(ngx_array_t *VAR_1, ngx_rbtree_node_t *VAR_2)
{
    ngx_rbtree_node_t **VAR_3;

    if (VAR_1 != ((void*)0) && VAR_2 != ((void*)0)
        && VAR_2 != VAR_0.sentinel)
    {
        FUNC_1(VAR_1, VAR_2->left);
        VAR_3 = FUNC_0(VAR_1);
        if (VAR_3 == ((void*)0)) {
            return;
        }
        *VAR_3 = (ngx_rbtree_node_t *) VAR_2;
        FUNC_1(VAR_1, VAR_2->right);
    }
}
