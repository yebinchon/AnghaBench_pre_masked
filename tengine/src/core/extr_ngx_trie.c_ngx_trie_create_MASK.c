
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int build_clue; int query; int insert; int * pool; int * root; } ;
typedef TYPE_1__ ngx_trie_t ;
typedef int ngx_pool_t ;


 TYPE_1__* FUNC_0 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int *) ;
 int VAR_2 ;

ngx_trie_t *
FUNC_2(ngx_pool_t *VAR_3)
{
    ngx_trie_t *VAR_4;

    VAR_4 = FUNC_0(VAR_3, sizeof(ngx_trie_t));
    if (VAR_4 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_4->root = FUNC_1(VAR_3);
    if (VAR_4->root == ((void*)0)) {
        return ((void*)0);
    }

    VAR_4->pool = VAR_3;
    VAR_4->insert = VAR_1;
    VAR_4->query = VAR_2;
    VAR_4->build_clue = VAR_0;

    return VAR_4;
}
