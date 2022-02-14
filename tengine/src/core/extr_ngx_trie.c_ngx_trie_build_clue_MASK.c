
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* root; } ;
typedef TYPE_1__ ngx_trie_t ;
struct TYPE_5__ {struct TYPE_5__** next; struct TYPE_5__* search_clue; } ;
typedef TYPE_2__ ngx_trie_node_t ;
typedef int ngx_int_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

ngx_int_t
FUNC_0(ngx_trie_t *VAR_3)
{
    ngx_int_t VAR_4, VAR_5, VAR_6;
    ngx_trie_node_t *VAR_7[VAR_2], *VAR_8, *VAR_9, *VAR_10;

    VAR_5 = VAR_6 = 0;
    VAR_10 = VAR_3->root;
    VAR_7[VAR_5++] = VAR_10;
    VAR_10->search_clue = ((void*)0);

    while (VAR_5 != VAR_6) {
        VAR_9 = VAR_7[VAR_6++];
        VAR_6 %= VAR_2;

        if (VAR_9->next == ((void*)0)) {
            continue;
        }

        VAR_8 = ((void*)0);

        for (VAR_4 = 0; VAR_4< VAR_1; VAR_4++) {
            if (VAR_9->next[VAR_4] == ((void*)0)) {
                continue;
            }

            if (VAR_9 == VAR_10) {
                VAR_9->next[VAR_4]->search_clue = VAR_10;

                VAR_7[VAR_5++] = VAR_9->next[VAR_4];
                VAR_5 %= VAR_2;

                continue;
            }

            VAR_8 = VAR_9->search_clue;

            while (VAR_8 != ((void*)0)) {
                if (VAR_8->next !=((void*)0) && VAR_8->next[VAR_4] != ((void*)0)) {
                    VAR_9->next[VAR_4]->search_clue = VAR_8->next[VAR_4];
                    break;
                }
                VAR_8 = VAR_8->search_clue;
            }

            if (VAR_8 == ((void*)0)) {
                VAR_9->next[VAR_4]->search_clue = VAR_10;
            }

            VAR_7[VAR_5++] = VAR_9->next[VAR_4];
            VAR_5 %= VAR_2;
        }
    }

    return VAR_0;
}
