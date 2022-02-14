
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ngx_uint_t ;
struct TYPE_6__ {TYPE_2__* root; } ;
typedef TYPE_1__ ngx_trie_t ;
struct TYPE_7__ {size_t key; int greedy; void* value; struct TYPE_7__** next; struct TYPE_7__* search_clue; } ;
typedef TYPE_2__ ngx_trie_node_t ;
struct TYPE_8__ {size_t len; size_t* data; } ;
typedef TYPE_3__ ngx_str_t ;
typedef size_t ngx_int_t ;


 size_t VAR_0 ;
 int VAR_1 ;

void *
FUNC_0(ngx_trie_t *VAR_2, ngx_str_t *VAR_3, ngx_int_t *VAR_4,
    ngx_uint_t VAR_5)
{
    void *VAR_6;
    size_t VAR_7;
    ngx_int_t VAR_8, VAR_9, VAR_10;
    ngx_trie_node_t *VAR_11, *VAR_12;

    VAR_6 = ((void*)0);
    VAR_12 = VAR_2->root;
    VAR_11 = VAR_12;
    VAR_7 = 0;

    if (VAR_5 & VAR_1) {
        VAR_9 = VAR_3->len;
        VAR_8 = -1;
    } else {
        VAR_9 = -1;
        VAR_8 = 1;
    }

    if (VAR_11->next == ((void*)0)) {
        return ((void*)0);
    }

    while (VAR_7 < VAR_3->len) {
        VAR_9 += VAR_8;
        VAR_10 = VAR_3->data[VAR_9];
        if (VAR_10 < 0 || VAR_10 >= VAR_0) {
            VAR_10 = 0;
        }

        while (VAR_11->next[VAR_10] == ((void*)0)) {
            if (VAR_11 == VAR_12) {
                break;
            }
            VAR_11 = VAR_11->search_clue;
        }

        VAR_11 = VAR_11->next[VAR_10];
        VAR_11 = VAR_11 == ((void*)0) ? VAR_12 : VAR_11;
        if (VAR_11->key) {
            VAR_6 = VAR_11->value;
            *VAR_4 = VAR_9 + VAR_11->key;
            if (!VAR_11->greedy) {
                return VAR_6;
            }
            VAR_11 = VAR_12;
        }

        VAR_7++;
    }

    return VAR_6;
}
