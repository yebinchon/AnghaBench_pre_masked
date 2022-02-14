
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int ngx_uint_t ;
struct TYPE_9__ {int pool; TYPE_2__* root; } ;
typedef TYPE_1__ ngx_trie_t ;
struct TYPE_10__ {size_t key; int greedy; struct TYPE_10__** next; } ;
typedef TYPE_2__ ngx_trie_node_t ;
struct TYPE_11__ {size_t len; size_t* data; } ;
typedef TYPE_3__ ngx_str_t ;
typedef size_t ngx_int_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 TYPE_2__** FUNC_0 (int ,size_t) ;
 TYPE_2__* FUNC_1 (int ) ;

ngx_trie_node_t *
FUNC_2(ngx_trie_t *VAR_3, ngx_str_t *VAR_4, ngx_uint_t VAR_5)
{
    size_t VAR_6;
    ngx_int_t VAR_7, VAR_8, VAR_9;
    ngx_trie_node_t *VAR_10, *VAR_11;

    VAR_11 = VAR_3->root;
    VAR_6 = 0;

    if (VAR_5 & VAR_2) {
        VAR_7 = VAR_4->len;
        VAR_8 = -1;
    } else {
        VAR_7 = -1;
        VAR_8 = 1;
    }

    VAR_10 = VAR_11;

    while (VAR_6 < VAR_4->len) {
        VAR_7 = VAR_7 + VAR_8;
        VAR_9 = VAR_4->data[VAR_7];

        if (VAR_9 < 0 || VAR_9 >= VAR_1) {
            continue;
        }

        if (VAR_10->next == ((void*)0)) {
            VAR_10->next = FUNC_0(VAR_3->pool,
                                  VAR_1 * sizeof(ngx_trie_node_t *));

            if (VAR_10->next == ((void*)0)) {
                return ((void*)0);
            }
        }

        if (VAR_10->next[VAR_9] == ((void*)0)) {
            VAR_10->next[VAR_9] = FUNC_1(VAR_3->pool);
            if (VAR_10->next[VAR_9] == ((void*)0)) {
                return ((void*)0);
            }
        }

        VAR_10 = VAR_10->next[VAR_9];
        VAR_6++;
    }

    VAR_10->key = VAR_4->len;
    if (VAR_5 & VAR_0) {
        VAR_10->greedy = 1;
    }

    return VAR_10;
}
